#include <iostream>
using namespace std;

class Vetor{
    private: int v[100], n;
    public: Vetor(){
            n=0;
        }

        public: void mostrar(){
        cout<<"\nMostrando todos os valores do vetor:\n" << endl;
        for(int i=0;i<n;i++){
            cout <<" "<< v[i];
            cout << endl;
        }
    }

    public: void remover(){
        cout << "\nQual valor deseja remover?" << endl;
        int nremove;
        cin >> nremove;
        for(int i=0;i<n;i++){
            if(v[i]==nremove){
                if (i != (n-1))
                {
                    for(int j=i;j<(n-1);j++){
                        v[j]=v[j+1];
                    }
                }
                n--;
                break;
            }
        }
    }

    public: void inserir(int valor){
        cout << "Informe 10 valores inteiros para o vetor" << endl;
            v[n]=valor;
            n++;
    }

    public: int buscar(){
        cout << "Qual valor deseja buscar?" << endl;
        int nbusca;
        cin >> nbusca;
        for(int i=0;i<n;i++){
            if(v[i]==nbusca){
                return i;
            }
           
        }
         return -1;
    }

    
};

main(){
    Vetor v;
    cout << "informe 5 valores" << endl;
    int valor;
    for(int i=0;i<5;i++){
        cin>>valor;
        v.inserir(valor);
    }
    v.mostrar();
    int busca;
    busca = v.buscar();
    if(busca == -1){
        cout << "Valor nao encontrado\n" << endl;
    }
    else{
        cout << "valor encontrado na posicao: " << busca << endl;
    }
    v.remover();
    v.mostrar();
}