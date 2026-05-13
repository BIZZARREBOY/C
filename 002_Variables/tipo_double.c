/*
002_Variables

Es un tipo de punto flotante con mayor precisión que el float
Consta de 8 bytes (8 * 8 = 64 bits)

Puede usar hasta 1.84x10^19

Se declara

    double nombre_de_variable

Para indicar que en salida y entrada usaremos un double usamos "%lf"
*/

#include <stdio.h>

int main() {
    double pi = 3.141592653589793;
    double radio = 10;
    
    double area;

    // Area = pi * radio ^2
    area = pi * radio * radio;

    printf("El area de nuestro circulo de radio de 10 cm es: %lf", area);

    return 0;
}