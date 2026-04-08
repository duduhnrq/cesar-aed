#include <iostream>
#include <cstring>

struct Paciente {
    char nome[51];
    int idade;
    char diagnostico[101];
};

void exibirPacientes(Paciente pacientes[], int tamanho) {
    bool encontrado = false;

    for (int i = 0; i < tamanho; ++i) {
        if (pacientes[i].idade > 60) {
            std::cout << "Paciente encontrado!" << std::endl;
            std::cout << "Nome: " << pacientes[i].nome << std::endl;
            std::cout << "Diagnóstico: " << pacientes[i].diagnostico << std::endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        std::cout << "Nenhum paciente encontrado!";
    }
}

int main() {
    Paciente pacientes[5] = {
        {
            "João Silva",
            30,
            "Gripe"            
        },
        {
            "Maria Oliveira",
            63,
            "Diabetes"
        },
        {
            "Carlos Santos",
            61,
            "Hipertensão"
        },
        {
            "Ana Costa",
            35,
            "Asma"
        },
        {
            "Pedro Almeida",
            28,
            "Alergia"
        }
    };

    exibirPacientes(pacientes, 5);

    return 0;
}