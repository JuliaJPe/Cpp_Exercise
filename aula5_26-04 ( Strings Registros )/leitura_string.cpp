#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    char string[80];
    cout << "Forneca uma string: ";
    fflush(stdin); // limpa o buffer de entrada
    gets(string); // leitura de uma string (contendo espacos)
    cout << "String lida: " << string << endl;
}