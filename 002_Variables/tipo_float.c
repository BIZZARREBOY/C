/*
002_Variables

Tipo float 

Es para el uso de números reales con 6 cifras significativas, 4 bytes (32 bits) 
Puede usar valores de entre entre por lo menos (10^-38, 10^38)

Se declara

    float nombre_de_variable;

Para indicar que usaremos un float en entrada y salida %f
*/

#include <stdio.h>

int main(){
    float mexicanos = 500.00; //Inicializando nuestra variable con valor de 500
    float dolares;// dearamos variable dolares

    // 1 usd = 17.36 mxn 

    dolares = mexicanos / 17.36; //Realizamos la operacion

    printf("500 mxn = %f \n", dolares); // Imprimos el resultado

    return 0;
}

