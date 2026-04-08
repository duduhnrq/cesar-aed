#include <iostream>
#include <string>

struct Aluno {
    std::string nome;
    int matricula;
    float nota;
};

void mediaNotas(Aluno alunos[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; ++i) {
        soma += alunos[i].nota;
    }
    std::cout << "Média das notas: " << soma / tamanho << std::endl;
}

int main() {
    Aluno alunos[5];

    for (int i = 0; i < 5; ++i) {
        std::cout << "Digite o nome do aluno " << i + 1 << ": ";
        std::getline(std::cin, alunos[i].nome);

        std::cout << "Digite a matrícula do aluno " << i + 1 << ": ";
        std::cin >> alunos[i].matricula;

        std::cout << "Digite a nota do aluno " << i + 1 << ": ";
        std::cin >> alunos[i].nota;

        std::cin.ignore(); // Limpa o buffer de entrada 
    }

    mediaNotas(alunos, 5);
}