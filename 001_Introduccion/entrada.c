#include <stdio.h> //Libreria estandard de entrada y salida

int main() //main
{
    char nombre[50]; //declarando variable (1 byte)

    printf("Ingresa tu nombre: "); // Impresion en consola
    scanf("%s", &nombre); // es para entrada del usuario (&nombre_de_variable)
    printf("%s", nombre); // Imprime el valor de la variable que ingresamos 
    return 0;
}
