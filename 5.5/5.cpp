#include <iostream>

int sumOfDigits(int n, int& depth) {
    if (n == 0) return 0;
    ++depth;
    return n % 10 + sumOfDigits(n / 10, depth);
}

int main() {
    int n;
    std::cout << "Enter a natural number: ";
    std::cin >> n;

    int depth = 0;
    int result = sumOfDigits(n, depth);

    std::cout << "Sum of digits of " << n << " = " << result << std::endl;
    std::cout << "Recursion depth: " << depth << std::endl;

    return 0;
}
