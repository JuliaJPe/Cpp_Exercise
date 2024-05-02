#include <iostream>
#include <string>
using namespace std;

typedef struct {
    char nome[80], dep[80];
    float salario;
} Funcionario;  //Descrição de como o registro deve ser armazenado

int main() {
    Funcionario reg; //Registro carregado na memória do computador para armazenar os dados, foi declarado como reg

    cout << "Preencha a ficha cadastral\n ";

    cout << "Nome: ";
    fflush(stdin);
    gets(reg.nome);

    cout << "Departamento: ";
    fflush(stdin);
    gets(reg.dep);

    cout << "Salario: ";
    cin >> reg.salario;

    cout << "\nFicha Cadastral\n";

    cout << "Nome: " << reg.nome << endl;

    cout << "Departamento: " << reg.dep << endl;

    cout << "Salario: " << reg.salario << endl;
}