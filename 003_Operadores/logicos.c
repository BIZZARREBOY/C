/*
003 - Operadores (Logicos)

    && (and) -> (a, b) -> (1 o 0)
                    (1, 1) -> (1)
                    (1, 0) -> (0)
                    (0, 1) -> (0)
                    (0, 0) -> (0)

    || (or) -> (a, b) -> (1 o 0)
                    (1, 1) -> (1)
                    (1, 0) -> (1)
                    (0, 1) -> (1)
                    (0, 0) -> (0)
    
    ! (not) -> (a) -> (1 o 0)
                    (1) -> (0)
                    (0) -> (1)


    3! = 6 
*/

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Ingrese los tres numeros");
    scanf("%d%d%d", &a, &b, &c);

    printf("%d<%d<%d", (a<=b && a<=c) ? a : (b<=a && b<=c) ? b : c,
                        ((a<=b && b<= c) || (c<=b && b<=c))  ? b : ((a<=c && c<=b) || (b<=c && c<=a)) ? c : a,
                        (a>=b && a>=c) ? a : (b>=a && b>=c) ? b : c);

    /*if(a<b && a<c){
            if(b<c){
                printf("%d %d %d", a, b, c);
            }else{
                printf("%d %d %d", a, c, b);
            }
    }else if(b<a && b<c){
        if(a<c){
            printf("%d %d %d", b, a, c);
        }else{
            printf("%d %d %d", b, c, a);
        }
    } else {
        if(a<b){
            printf("%d %d %d", c, a, b);
        }else{
            printf("%d %d %d", c, b, a);
        }
    }*/
        
    return 0;
}


// a<b<c
// a<c<b
// b<a<c
// b<c<a
// c<a<b
// c<b<a