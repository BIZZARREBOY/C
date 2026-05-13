/*
002-Variables

int (enteros) - 4 bytes (32 bits) 2^32 = 4,294,967,296 (negativos, 0, positivos) 

valores que pueden los enteros => 4,294,967,296 / 2 = 2,147,483,648 
entonces puede tomar (-2,147,483,648, 2,147,483,647) 

Se declara 
    int nombre_de_variable

Para indicar que usaremos un entero usamos "%d"
*/

#include <stdio.h>

int main(){
    int a, b, c; // Declaracion de tipo int

    a = 9; //Asignando un valor a las variables
    b = 3;

    c = a + b; //Suma de variables

    printf("El valor de la variable c es: %d\n", c); //Imprime el resultado

    c = 30; //Modificando el valor de c
    printf("El valor de c es: %d\n", c);// Imprimimos el nuevo valor de c

    /*El tipo int no puede aceptar decimales*/

    int edad = 23.9;
    printf("edad: %d", edad);

    return 0;
}

