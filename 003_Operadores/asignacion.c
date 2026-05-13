/*
003_Operadores (Asignación)

    "=" -> Asignarle un valor a nuestras variables
    "+=" -> Sea b = b + a -> b += a
    "-=" -> Sea b = b - a -> b -= a


*/


#include <stdio.h>

int main()
{
    /* code */
    int b;
    int c = 3;

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    // "="
    c = c + b; //c = 3 + 2 = 5
    printf("%d\n", c);

    // "+=" Aditional Assignment
    c += b; // c = c + b = 5 + 2 = 7
    printf("%d\n", c);

    // "-=" Substract Assignment
    c -= b; // c = c - b = 7 - 2 = 5
    printf("%d\n", c);

    return 0;
}
