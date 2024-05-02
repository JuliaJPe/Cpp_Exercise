#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char string1[80], string2[80];
    cout << "\nForneca uma string: ";
    fflush(stdin);
    gets(string1);
    cout << "Forneca outra string: ";
    fflush(stdin);
    gets(string2);

    if (strcmp(string1, string2) == 0)
        cout << "\nAs duas strings sao iguais" << endl;

    else if (strcmp(string1, string2) < 0)
        cout << "\nA string '" << string1 << "' vem antes da string '" << string2 << "'" << endl;

    else if (strcmp(string1, string2) > 0)
        cout << "\nA string '" << string1 << "' vem depois da string '" << string2 << "'" << endl;    

    else
        cout << "\nAs duas strings sao diferentes" << endl;

        
}