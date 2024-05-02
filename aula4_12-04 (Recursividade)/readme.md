# O que é Recursividade #

Recursividade é, nada mais nada menos, que uma função (ou método) que dentro dela existe uma chamada para ela mesma.

`int fat(int n) {
    if (n==0) return 1;
    else
        return n* **fat**(n-1);  /*chamada recursiva*/
}`

essa no caso é uma função que calcula um numero fatorial