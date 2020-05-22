#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3)
        return 0;
    int N = atoi(argv[1]);
    int D = atoi(argv[2]);
    int answer = (N * (N + 1) / 2) * D; // we will count the sum of all numbers and then multiply the result by the distance

    std::cout<<answer<<std::endl;
    return 0;
}
