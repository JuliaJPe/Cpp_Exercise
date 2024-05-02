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

   int busca_valores_repetidos(){
        
       int valor, cont=0;
       cout << "\n Qual valor deseja buscar?" << endl;
       cin >> valor;
       for(int i=0;i<n;i++){
           if(v[i]==valor){
               cont++;
           }
       }
       cout<<"\n O valor " << valor << " aparece " << cont << " vezes\n" << endl;

   }
   public: void bubbleSort(){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(v[j]>v[j+1]){
                    int aux = v[j];
                    v[j]=v[j+1];
                    v[j+1]=aux;
                }
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
    v.bubbleSort();
    cout<<"\n Vetor ordenado: \n" << endl;
    v.mostrar();
    v.busca_valores_repetidos();
}

