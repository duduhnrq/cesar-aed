#include <iostream>
#include <cstring>

struct Contato {
    char nome[51];
    char telefone[16];
};

void buscarPorNome(Contato contatos[], int tamanho) {
    char nomeBusca[51];
    std::cout << "Insira um nome para buscar: ";
    std::cin.getline(nomeBusca, 51);

    bool encontrado = false;

    for (int i = 0; i < tamanho; ++i) {
        if (strcmp(nomeBusca, contatos[i].nome) == 0) {
            std::cout << "\nContato encontrado!" << std::endl;
            std::cout << "Nome: "     << contatos[i].nome     << std::endl;
            std::cout << "Telefone: " << contatos[i].telefone << std::endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        std::cout << "Contato não encontrado." << std::endl;
    }
}

int main() {
    const int MAX = 100;
    Contato contatos[MAX];

    int N;
    std::cout << "Quantos contatos deseja adicionar? ";
    std::cin >> N;
    std::cin.ignore();

    for (int i = 0; i < N; ++i) {
        std::cout << "Nome do contato " << i + 1 << ":";
        std::cin.getline(contatos[i].nome, 51);

        std::cout << "Telefone do contato " << i + 1 << ":";
        std::cin.getline(contatos[i].telefone, 16);
    }

    buscarPorNome(contatos, N);

    return 0;
}