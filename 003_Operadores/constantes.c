/* 003_Operadores

Se declaran con la palabra reservada define

#define NOMBRE_DE_CONSTANTES 

snake_case
camelCase

*/
#include <stdio.h>

#define PI 3.14

int main(){
    double radio, altura;
    double area;

    scanf("%lf%lf", &radio, &altura);

    area = (PI  * radio * radio) * altura;

    printf("%lf", area);

    return 0;
}