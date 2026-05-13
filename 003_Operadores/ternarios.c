/*
003_Operadores

    "?" -> Es equivalente a (if)
    ":" -> Es equivalente a (else) 

*/

/*Dados dos numeros, escriba en la salida estandar estos numeros ordenados de
menor a mayor.*/

#include <stdio.h>

int main(){
    int a = 7, b = 3;

    printf("%d<%d", a<b?a:b, b<a?a:b); // (0 -> b), (1 -> a)

}