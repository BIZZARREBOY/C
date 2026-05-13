/*
003_Operadores

Operadores aritméticos (binarios)

Suma "+" -> (a,b) => (2, 3) -> 5
Resta "-" -> (a, b) => (2, 3) -> -1
Multipliacion "*" -> (a, b) => (2, 3) -> 6
Division "/" -> (a,b) => (2, 3) -> 0.66666666
Modulo "%" -> (a,b) => (2, 3) -> 2 mod 3 = 1

Operadores aritméticos (unarios)

Incremento "++" -> (a) => a++ -> a + 1
Decremento "--" -> (a) => a-- -> a - 1       

*/

#include <stdio.h>

int main()
{
    double a, b, c;

    printf("\nIngresa el primer numero: ");
    scanf("%lf", &a);

    printf("\nIngresa el segundo numero: ");
    scanf("%lf", &b);

    //Suma
    c = a + b;
    printf("\nLa suma es: %lf", c);

    //Resta
    c = a - b;
    printf("\nLa resta es: %lf", c);

    //Producto
    c = a * b;
    printf("\nEl producto es: %lf", c);

    //Division
    c = a / b;
    printf("\nLa division es: %lf", c);

    //Modulo (Solo para numeros enteros)
    /*c = a % b;
    printf("El modulo es: %d", c);*/

    /*++a;
    printf("%d\n", a);

    --a;
    printf("%d", a);*/
    return 0;
}
