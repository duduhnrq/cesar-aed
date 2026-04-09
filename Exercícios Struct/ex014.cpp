#include <iostream>

int produto(int num1, int num2) {
    if (num2 == 0) return 0;

    return num1 + produto(num1, (num2 - 1));
}

int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;

    std::cout << produto(a, b);

    return 0;
}