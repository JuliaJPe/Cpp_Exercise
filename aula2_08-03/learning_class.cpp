#include <iostream>
using namespace std;

class Conta {
    private: double saldo;
    public: void abrir_conta() {
        saldo = 0;
    }
    public: void saldo_atual() {
        cout << "Saldo atual: R$" << saldo << endl;
    }
    public: void depositar() {
        cout<<"Qual valor deseja depositar? ";
        double valor;
        cin>>valor;
        saldo = saldo + valor;
    }
    public: void sacar() {
        cout<<"Qual valor deseja sacar? ";
        double valor;
        cin>>valor;
        if (valor > saldo) {
            cout<<"Saldo insuficiente!";
        }
        else {
            saldo = saldo - valor;
        }
    }
}; //fim da classe

int main() {
    Conta Julia;
    cout<<"Abertura da conta Julia\n";
    Julia.abrir_conta();
    Julia.depositar();
    Julia.saldo_atual();
    Julia.sacar();
    Julia.saldo_atual();

    Conta Joaquim;
    cout<<"Abertura da conta Joaquim\n";
    Joaquim.abrir_conta();
    Joaquim.depositar();
    Joaquim.saldo_atual();
    Joaquim.sacar();
    Joaquim.saldo_atual(); 
    return 0;
}