/*
002_Variables

Es del tipo caracter incluye todos los caracteres en el codigo ASCII

Usa un 1 byte = 8 bits

Se declara

    char nombre_de_variable

    Se usan las comillas simple  => ''

Para indicar que en salida y entrada usaremos un char usamos "%c"
*/


#include <stdio.h>

int main()
{
    char letra = 'A'; // Declarando una variable char
    printf("%c", letra); // Le indicamos que va a imprimir un caracter
    return 0;
}
