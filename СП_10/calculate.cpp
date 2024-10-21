#include "calculate.h"
#include <stdexcept>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return static_cast<double>(a) / b;
}

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial of negative number is not defined");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double power(int base, int exponent) {
    if (exponent < 0) {
        throw std::invalid_argument("Negative exponent is not supported");
    }
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}
