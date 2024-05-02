#include <iostream>
using namespace std;

float saldo;

void impressao();

main() {
    float valor;

    cout << "Abertura da conta\n";

    saldo = 0;

    cout << "Informe o valor para depósito: ";
    cin >> valor;

    saldo = saldo + valor;

    impressao();

    cout << "Informe o valor para saque: ";
    cin >> valor;

    if(valor>saldo) cout<<"Saldo Insuficiente\n";
    else saldo=saldo-valor;

    impressao();
    
    
    return 0;
}

void impressao(){
    cout << "Saldo atual R$" <<saldo<<endl;
}