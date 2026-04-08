#include <iostream>

struct ContaBancaria {
    char nome[51];
    int conta;
    float saldo;
};

void depositarValor(ContaBancaria& c) {
    float valorDeposito;

    std::cout << "Quanto você deseja depositar? R$";
    std::cin >> valorDeposito;

    if (valorDeposito <= 0) {
        std::cout << "Por favor, insira um valor válido!\n";
    } else {
        c.saldo += valorDeposito;
        std::cout << "Depósito realizado com sucesso!\n";
    }
}

void sacarValor(ContaBancaria& c) {
    float valorSaque;

    std::cout << "Quanto você deseja sacar? R$";
    std::cin >> valorSaque;

    if (valorSaque <= 0) {
        std::cout << "Por favor, insira um valor válido!\n";
    } else if (valorSaque > c.saldo) {
        std::cout << "Saldo insuficiente!\n";
    } else {
        c.saldo -= valorSaque;
        std::cout << "Saque realizado com sucesso!\n";
    }
}

void exibirSaldo(ContaBancaria& c) {
    std::cout << "Titular: " << c.nome   << std::endl;
    std::cout << "Conta:    " << c.conta  << std::endl;
    std::cout << "Saldo:  R$" << c.saldo  << std::endl;
}

int main() {
    ContaBancaria conta1 = {
            "Eduardo Henrique",
            202610077,
            430
    };

    int operacao;

    do {
        std::cout << "\nQual operação deseja realizar?\n";
        std::cout << "1 - Depositar\n";
        std::cout << "2 - Sacar\n";
        std::cout << "3 - Consultar Saldo\n";
        std::cout << "4 - Sair\n";
        std::cout << "Opção: ";
        std::cin >> operacao;

        if      (operacao == 1) depositarValor(conta1);
        else if (operacao == 2) sacarValor(conta1);
        else if (operacao == 3) exibirSaldo(conta1);
        else if (operacao == 4) std::cout << "Encerrando...\n";
        else                    std::cout << "Operação inválida!\n";

    } while (operacao != 4);

    return 0;
}