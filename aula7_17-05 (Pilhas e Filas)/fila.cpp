//fila de numeros pares e outra de impares

#include <iostream>

using namespace std;

class fila
{
private:
    int fim, tam_max;
    int *itens;
public:
    fila(int n){
        tam_max = n;
        itens = new int[tam_max];
        fim = 0;
    }
    bool empty(){
        return (fim == 0);
    }
    bool full(){
        return (fim == tam_max);
    }
    int size(){
        return fim;
    }
    int front(){
        if(!empty()) return itens[0];
    }
   void enqueue(int chave){
        if(full()){
            cout<<"Atençao! Fila cheia!"<<endl;
            return;
        }
        itens[fim] = chave;
        fim++;
    }
    void dequeue(){
        if(empty()){
            cout<<"Atençao! Fila vazia!"<<endl;
            return;
        }
        for(int i = 0; i < (fim - 1); i++){
            itens[i] = itens[i + 1];
        }
        fim--;
    }
};

main(){
    fila fp(1000); int chave;
    fila fi (1000);

    cout<<"Informe 10 valores inteiros\n";
    for(int i = 0; i < 10; i++){
        cin>>chave;
        if(chave % 2 == 0){
            fp.enqueue(chave);
        }else{
            fi.enqueue(chave);
        }
    }
    cout<<"Fila de pares: ";
    while(!fp.empty()){
        cout<<fp.front()<<" ";
        fp.dequeue();
    }
    cout<<"\nFila de impares: ";
    while(!fi.empty()){
        cout<<fi.front()<<" ";
        fi.dequeue();
    }
    cout<<endl;
}
