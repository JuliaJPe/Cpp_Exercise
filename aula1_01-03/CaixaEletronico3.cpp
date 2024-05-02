#include <iostream>
using namespace std;

float saldo; //variável global

void saldo_atual();
void abrir_conta();
void depositar();
void sacar();

main()
{
    cout<<"Abertura de conta \n";

    abrir_conta();
    depositar();
    saldo_atual();
    sacar();
    saldo_atual();
    
    return 0;
}

void abrir_conta(){
    saldo = 0;
}

void saldo_atual(){
    cout<<"Seu saldo atual e: "<<saldo<<endl;
}

void depositar(){
    float valor; // variável local
    cout<<"Qual valor deseja depositar? ";
    cin>>valor;
    saldo = saldo + valor;
}

void sacar(){
    float valor;
    cout<<"Qual valor deseja sacar? ";
    cin>>valor;
    if (valor > saldo){
        cout<<"Saldo insuficiente";
    }else{
        saldo = saldo - valor;
    }
}