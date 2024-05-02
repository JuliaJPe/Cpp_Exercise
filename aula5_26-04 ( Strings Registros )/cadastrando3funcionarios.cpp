#include <iostream>
#include <string.h>
using namespace std;

typedef struct {
    char nome[80], dep[80];
    float salario;
} Funcionario;

int main() {
    Funcionario reg[3];
    int i;
     cout << "Preencha a ficha cadastral de 3 funcionarios\n ";

    for (i = 0; i < 3; i++)
    {  
        cout << "Nome: ";
        fflush(stdin);
        gets(reg[i].nome);
        cout << "Departamento: ";
        fflush(stdin);
        gets(reg[i].dep);
        cout << "Salario: ";
        cin >> reg[i].salario;
    }

    char chave[80];
    cout << "Forneca um nome para buscar: \n";
    fflush(stdin);
    gets(chave);
    for (i = 0; i < 3; i++)
    {
        if (stricmp(chave, reg[i].nome) == 0)
        {
            cout << "\nFicha Cadastral\n ";
            cout << "Nome: " << reg[i].nome << endl;
            cout << "Departamento: " << reg[i].dep << endl;
            cout << "Salario: " << reg[i].salario << endl;
            break;
        }
    }

    if (i==3) cout << "\nFuncionario nao encontrado\n ";
    
}