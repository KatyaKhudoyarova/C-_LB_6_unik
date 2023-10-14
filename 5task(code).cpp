#include <iostream>

int main() {
    int N;
    std::cout << "Enter a natural number N: ";
    std::cin >> N;
    int count = 0;
    while (N > 0) {
        int digit = N % 10;
        if (digit > 3) {
            count++;
        }
        N /= 10;
    }
    std::cout << "The number of digits greater than 3 in the number N: " << count << std::endl;
    return 0;
}



