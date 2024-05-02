#include <iostream>
using namespace std;

int multiplicacao(int a, int b){

    if(a == 0) return 0;
    else if (a == 1) return b;

    return b + multiplicacao(a-1, b);

}

int main(){
    int a, b;
    cout << "digite o valor de a e b: ";
    cin >> a >> b;
    cout << a << " x " << b << " = " << multiplicacao(a, b);
    return 0;
}