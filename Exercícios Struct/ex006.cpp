#include <iostream>
#include <string>

struct Livro {
    char titulo[51];
    char autor[51];
    int ano;
};

void exibirLivrosPosteriores(Livro livros[], int tamanho, int anoBusca) {
    for (int i = 0; i < tamanho; ++i) {
        if (livros[i].ano > anoBusca) {
            std::cout << "Título: " << livros[i].titulo << std::endl;
            std::cout << "Autor: " << livros[i].autor << std::endl;
            std::cout << "Ano: " << livros[i].ano << std::endl;
        }
    }
}

int main() {
    Livro livros[5] = {
        {
            "O Senhor dos Anéis",
            "J.R.R. Tolkien",
            1954
        },
        {
            "1984",
            "George Orwell",
            1949
        },
        {
            "A Guerra dos Tronos",
            "George R.R. Martin",
            1996
        },
        {
            "O Pequeno Príncipe",
            "Antoine de Saint-Exupéry",
            1943
        },
        {
            "Dom Quixote",
            "Miguel de Cervantes",
            1605
        }
    };

    int anoBusca;
    std::cin >> anoBusca;

    exibirLivrosPosteriores(livros, 5, anoBusca);

    return 0;
}