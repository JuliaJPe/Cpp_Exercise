// 5- Aula Recursividade: Escreva um programa em C++ que atribua
// valores aleatórios (entre 0 e 100) a um vetor de 50 elementos inteiros. 
//  Ordene o vetor e imprima seu conteúdo na tela. 
// Leia do usuário um valor e realize a busca binária recursiva
// do mesmo dentro do vetor de acordo com a função abaixo:

//  int bbr(int v[], int baixo, int alto, int chave) {
//        int meio;   
//        while(baixo <= alto) {    
//          meio = (baixo+alto)/2;     
//          if (v[meio] == chave) return meio;     
//          if (v[meio] < chave) return bbr(v,meio+1,alto,chave);     
//          else return bbr(v,baixo,meio-1,chave);   
//         } 

//          return -1; 
// } 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <stdlib.h>

// Função para busca binária recursiva
int bbr(int v[], int baixo, int alto, int chave) {
    if (baixo > alto) {
        return -1; 
    }

    int meio = (baixo + alto) / 2;

    if (v[meio] == chave) {
        return meio; 
        
    } else if (v[meio] < chave) {
        return bbr(v, meio + 1, alto, chave); 
    } else {
        return bbr(v, baixo, meio - 1, chave); 
    }
}



int main() {
    const int TAMANHO = 50;
    int vetor[TAMANHO];

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor com números aleatórios entre 0 e 100
    for (int i = 0; i < TAMANHO; ++i) {
        vetor[i] = rand() % 101; 
    }

    // Ordena o vetor
    std::sort(vetor, vetor + TAMANHO);

 
    std::cout << "Vetor ordenado: ";
    for (int i = 0; i < TAMANHO; ++i) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;

    std::system("Color 0A");

    int chave;
    std::cout << "Digite um valor para buscar: ";
    std::cin >> chave;

    // Realiza a busca binária recursiva
    int indice = bbr(vetor, 0, TAMANHO - 1, chave);

    // Verifica o resultado da busca
    if (indice != -1) {
        std::cout << "Valor encontrado na posição: " << indice << std::endl;
    } else {
        std::cout << "Valor não encontrado." << std::endl;
    }

    return 0;
}




