#include <iostream>

int contar_digitos(int num) {
    int contador = 1;

    if (num < 10) {
        return contador;
    } else {
        contador++;
        return contador + contar_digitos(num / 10) - 1;
    }
}

int main() {
    int num;
    std::cin >> num;

    std::cout << contar_digitos(num);

    return 0;
}