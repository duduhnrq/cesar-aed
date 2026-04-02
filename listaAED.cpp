#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    Pessoa* prox;
} *inicio = nullptr, *fim = nullptr;

struct Lista {
    Pessoa* inicio;
    Pessoa* fim;

    void adicionarPessoa(const string& nome) {
        Pessoa* novaPessoa = new Pessoa{nome, nullptr};
        if (inicio == nullptr) {
            inicio = novaPessoa;
            fim = novaPessoa;
        } else {
            fim->prox = novaPessoa;
            fim = novaPessoa;
        }
    }
};