#include <iostream>

struct Retangulo {
    float base;
    float altura;
};

void calcularAreaPerimetro(Retangulo retangulo) {
    float area = retangulo.base * retangulo.altura;
    std::cout << "Área: " << area << std::endl;

    float perimetro = (retangulo.base * 2) + (retangulo.altura * 2);
    std::cout << "Perímetro: " << perimetro << std::endl;
}

int main() {
    Retangulo retangulo;

    std::cout << "Base: ";
    std::cin >> retangulo.base;

    std::cout << "Altura: ";
    std::cin >> retangulo.altura;

    calcularAreaPerimetro(retangulo);

    return 0;
}