// Aula Vetores: Desenvolva um programa em C que construa um histograma
// que verifica a quantidade de notas pertencentes a uma determinada 
// faixa de valores. Para cada faixa de valores é associado um conceito tal 
// como descrito na tabela abaixo: 

// Faixa         Conceito
// 9 ≤ nota ≤ 10  A 
// 7 ≤ nota < 9   B 
// 5 ≤ nota < 7   C 
// 3 ≤ nota < 5   D 
// 0 ≤ nota < 3   E 

// Depois de totalizar o número de valores pertencentes a cada faixa, o programa deverá mostrar com um histograma o número de notas pertencentes a cada conceito.  

// Exemplo de execução: 

// Insira n. de alunos: 5 
// Insira nota 1: 10 
// Insira nota 2: 8 
// Insira nota 3: 7 
// Insira nota 4: 6 
// Insira nota 5: 8 

// Histograma: 

// A: * 
// B: *** 
// C: *
// D: 
// E: 


#include <iostream>
using namespace std;

void histograma(int alunos, float nota, int i) {
    float A = 0, B = 0, C = 0, D = 0, E = 0;
    for (i = 0; i < alunos; i++) {
        cout << "\nInsira nota " << i + 1 << ": ";
        cin >> nota;
        if (nota >= 9 && nota <= 10) {
            A++;}    

        else if (nota >= 7 && nota < 9) {
            B++;}

        else if (nota >= 5 && nota < 7) {
            C++;}

        else if (nota >= 3 && nota < 5) {
            D++;}

        else if (nota >= 0 && nota < 3) {
            E++;}
    }
    cout << "\nHistograma: " << endl;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;
    cout << "D: " << D << endl;
    cout << "E: " << E << endl;
}

int main() {
    int alunos, i=0;
    float nota = 0;
    cout << "Insira o numero de alunos: ";
    cin >> alunos;

    histograma(alunos, nota, i);
}