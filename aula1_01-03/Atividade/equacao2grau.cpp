#include <iostream>
#include <cmath>
using namespace std;

float a, b, c, delta, x1, x2;

void Delta();


 main()
{
    cout<<"EQUAÇÃO DE SEGUNDO GRAU \n\n";
    cout << "digite o valor de a: \n";
    cin >> a;
    cout << "digite o valor de b: \n";
    cin >> b;
    cout << "digite o valor de c: \n";
    cin >> c;

   Delta();

    cout << "delta = " << delta << "\n";

    if (delta >= 0)
    {
       x1 = (-b + sqrt(delta)) / (2 * a);
       x2 = (-b - sqrt(delta)) / (2 * a);
       cout << "x1 = " << x1 << "\nx2 = " << x2;
    }
    else{
        cout << "nao existem raizes reais";
    }

    

    
    
    return 0;
}

void Delta()
{
    delta = pow(b, 2) - 4 * a * c;
    
}