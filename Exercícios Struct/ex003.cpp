#include <iostream>
#include <string>

struct Produto {
    char nomeProduto[31];
    int codigo;
    float preco;
};

void exibirProduto(Produto produto) {
    std::cout << "Nome do produto: " << produto.nomeProduto << std::endl;
    std::cout << "Código do produto: " << produto.codigo << std::endl;
    std::cout << "Preço do produto: " << produto.preco << std::endl;
}

int main() {
    Produto produto1;

    std::cout << "Insira o nome do produto: ";
    std::cin.getline(produto1.nomeProduto, 31);

    std::cout << "Insira o código do produto: ";
    std::cin >> produto1.codigo;

    std::cout << "Insira o preço do produto: ";
    std::cin >> produto1.preco;

    exibirProduto(produto1);
}