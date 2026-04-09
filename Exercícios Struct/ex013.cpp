#include <iostream>

int soma_digitos(int N) {
    if (N < 10) return N;

    return (N % 10) + soma_digitos(N / 10);
}

int main() {
    int N;
    std::cin >> N;

    std::cout << soma_digitos(N);

    return 0;
}