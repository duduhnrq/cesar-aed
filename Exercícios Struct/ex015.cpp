#include <iostream>

void contagem_regressiva(int N) {
    if (N == 0) {
        std::cout << "0";
        return;
    } 

    std::cout << N << " ";

    contagem_regressiva(N - 1);
}

int main() {
    int N;
    std::cin >> N;

    contagem_regressiva(N);

    return 0;
}