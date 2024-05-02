// 3-Aula Orientação Objetos: Escreva um programa em C que faça o seguinte: 

// a) crie um vetor de números inteiros com tamanho definido pelo usuário.  
// b) crie uma função para popular esse vetor com dados fornecido pelo usuário. 
// c) crie uma função que receba esse vetor e dobre o valor de cada item.  
// d) crie uma função que liste esses valores.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Vetor {
private:
    vector<int> v;

public:
    // Função para popular o vetor com dados fornecidos pelo usuário
    void popular() {
        int tamanho;
        cout << "Digite o tamanho do vetor: ";
        cin >> tamanho;

        cout << "Digite os elementos do vetor:\n";
        for (int i = 0; i < tamanho; ++i) {
            int elemento;
            cout << "Elemento " << i + 1 << ": ";
            cin >> elemento;
            v.push_back(elemento);
        }
    }

    // Função para dobrar o valor de cada item do vetor
    void dobrar() {
        for (int i = 0; i < v.size(); ++i) {
            v[i] *= 2;
        }
    }

    // Função para listar os valores do vetor
    void listar() {
        cout << "Valores do vetor:\n";
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Vetor v;

    // Chamando a função para popular o vetor
    v.popular();

    // Chamando a função para dobrar os valores do vetor
    v.dobrar();

    // Chamando a função para listar os valores do vetor
    v.listar();

    return 0;
}
