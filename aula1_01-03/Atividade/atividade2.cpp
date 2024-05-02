#include <iostream>
using namespace std;

int a, b;

void soma();

 main() {

    cout << "digite o valor de a: \n";
    cin >> a;
    cout << "digite o valor de b: \n";
    cin >> b;

    soma();


    return 0;
}

void soma()
{
    int s;
    s = a+b;

    if (s%2 == 0)
        {
            cout << "\n Par";
        }
    else
        {
            cout << "\n Impar";
          
        }
}