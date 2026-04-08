#include <iostream>
#include <string>

struct Funcionario {
    char nome[51];
    char cargo[31];
    float salario;
};

int main() {
    int N;

    std::cout << "Quantos funcionários deseja cadastrar? ";
    std::cin >> N;
    std::cin.ignore();  // Limpa o buffer após cin >>

    Funcionario funcionarios[N];

    for (int i = 0; i < N; ++i) {
        std::cout << "Nome do funcionário " << i + 1 << ": ";
        std::cin.getline(funcionarios[i].nome, 51);

        std::cout << "Cargo do funcionário " << i + 1 << ": ";
        std::cin.getline(funcionarios[i].cargo, 31);

        std::cout << "Salário do funcionário " << i + 1 << ": ";
        std::cin >> funcionarios[i].salario;
        std::cin.ignore();  // Limpa o buffer após cin >>
    }

    std::cout << "\nLista de funcionários:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Funcionário " << i + 1 << ":" << std::endl;
        std::cout << "  Nome: " << funcionarios[i].nome << std::endl;
        std::cout << "  Cargo: " << funcionarios[i].cargo << std::endl;
        std::cout << "  Salário: " << funcionarios[i].salario << std::endl;
    }

    return 0;
}