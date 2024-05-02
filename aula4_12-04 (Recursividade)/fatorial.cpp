#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int valor;
    cout << "digite um valor inteiro maior que 0: ";
    cin >> valor;
    cout << "fatorial de " << valor << " = " << fatorial(valor) << endl;
    return 0;
}