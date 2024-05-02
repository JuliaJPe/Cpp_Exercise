// 2- Aula Orientação Objetos: Escreva uma função
// que receba três valores (a, b e c) que são coeficientes
// de uma equação de segundo grau e retorne o valor de delta.

#include <iostream>
#include <cmath>
using namespace std;

float a, b, c, delta, x1, x2;

void Delta();


 main()
{
    cout<<"\nEQUACAO DE SEGUNDO GRAU \n\n";
    cout << "\ndigite o valor de a: ";
    cin >> a;
    cout << "\ndigite o valor de b: ";
    cin >> b;
    cout << "\ndigite o valor de c: ";
    cin >> c;

   Delta();

    cout << "\ndelta = " << delta << "\n";

    if (delta >= 0)
    {
       x1 = (-b + sqrt(delta)) / (2 * a);
       x2 = (-b - sqrt(delta)) / (2 * a);
       cout << "x1 = " << x1 << "\nx2 = " << x2;
    }
    else{
        cout << "\nnao existem raizes reais\n";
    }

    

    
    
    return 0;
}

void Delta()
{
    delta = pow(b, 2) - 4 * a * c;
    
}