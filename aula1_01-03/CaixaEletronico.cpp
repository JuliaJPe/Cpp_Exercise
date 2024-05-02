#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float saldo;
    float valor;

    cout << "Abertura da conta\n";

    saldo = 0;

    cout << "Informe o valor para depósito: ";
    cin >> valor;

    saldo = saldo + valor;

    cout << "Informe o valor para saque: ";
    cin >> valor;

    saldo = saldo - valor;

    cout << "Saldo atual R$" <<saldo<<endl;
    
    return 0;
}
