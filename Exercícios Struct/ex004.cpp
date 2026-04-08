#include <iostream>
#include <cstdlib>
#include <cstring>

struct Carro {
    char modelo[31];
    int ano;
    float preco;
};

int main() {
    Carro* ptr = (Carro*)malloc(sizeof(Carro));

    if (ptr == nullptr) return 1;

    strcpy(ptr->modelo, "Kwid");
    ptr->ano = 2019;
    ptr->preco = 35000;

    std::cout << "Modelo do carro: " << ptr->modelo << std::endl;
    std::cout << "Ano do carro: " << ptr->ano << std::endl;
    std::cout << "Preço do carro: " << ptr->preco << std::endl;

    free(ptr);
}