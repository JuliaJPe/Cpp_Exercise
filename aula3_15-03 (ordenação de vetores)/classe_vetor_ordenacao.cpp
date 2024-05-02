#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Vetor {
    private:
        int v[1000];
        int n;

    public: Vetor(){
            n=0;
        }
    void inserir(int valor){
        v[n]=valor;
        n++;
    }
    void mostrar(){
        cout<<"\nMostrando todos os valores do vetor:\n" << endl;
        for(int i=0;i<n;i++){
            cout <<v[i]<<" ";   
        }
         cout << endl;
    }
    int busca_linear(){
        int valor;
        cout << "Qual valor deseja buscar?" << endl;
        cin >> valor;
        for(int i=0;i<n;i++){
            if(v[i]==valor){
                return i;
            }
        }
        return -1;
    }    
    void remover(){
        cout << "\nQual valor deseja remover?" << endl;
        int valor;
        cin >> valor;
        for(int i=0;i<n;i++){
            if(v[i]==valor){
                if(i!=(n-1)){
                    for(int j=i;j<(n-1);j++){
                        v[j]=v[j+1];
                    }
                }
                n--;
                break;
            }
        }
    }
};        

main(){
    Vetor v;
    srand(time(NULL));
    for (int i=0;i<100;i++){
        v.inserir(rand()%101);
    }
    
    v.mostrar();
}