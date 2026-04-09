#include <iostream>
#include <vector>

int maior_elemento(int vet[], int N) {
    if (N == 1) return vet[0];

    int maior_resto = maior_elemento(vet, N - 1);

    if (vet[N - 1] > maior_resto) {
        return vet[N - 1];
    } else {
        return maior_resto;
    }
}

int main() {
    int N;
    std::cin >> N;

    int numeros[N];
    
    for (int i = 0; i < N; ++i) {
        std::cin >> numeros[i];
    }

    std::cout << maior_elemento(numeros, N);

    return 0;
}