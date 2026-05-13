/*
001_var_op:

1. Dados el numerador y el denominador de dos números racionales, escribir el numerador y el denominador
de su suma y su producto

Sean a, b números racionales tales que a = p/q, b = r/s, 

Suma: 

Está definida como, a+b = (ps+qr)/qs

Producto:

Está definido como, a*b = pr/qs

Formatear para que veamos es un número racional
*/

#include <stdio.h>


int main(){
    int num_1, den_1, num_2, den_2;
    int ret_num = 0, ret_den = 1;

    printf("Ingresa el primer racional:\n");
    printf("Primer numerador: ");
    scanf("%d", &num_1);
    printf("Primer denominador: ");
    scanf("%d", &den_1);

    printf("Ingresa el segundo racional:\n");
    printf("Segundo numerador: ");
    scanf("%d", &num_2);
    printf("Primer numerador: ");
    scanf("%d", &den_2);

    /* Suma: Está definida como, a+b = (ps+qr)/qs */

    ret_num = num_1 * den_2 + den_1 * num_2; // (ps+qr)
    ret_den = den_1 * den_2;// qs  
    printf("La suma de los racionales (%d/%d + %d/%d) es: %d/%d\n\n", num_1, den_1, num_2, den_2, ret_num, ret_den);

    /* Producto: Está definido como, a*b = pr/qs*/

    ret_num = num_1 * num_2;
    ret_den = den_1 * den_2; 
    printf("El producto de los racionales (%d/%d * %d/%d) es: %d/%d", num_1, den_1, num_2, den_2, ret_num, ret_den);

    return 0;
}

