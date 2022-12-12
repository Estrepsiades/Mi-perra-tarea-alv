#include <stdio.h>
void presentacion(){

    printf("Universidad Nacional Autonoma De Mexico \n");
    printf("Facultad De Estudios Superiores Aragon \n");
    printf("Ingenieria Electrica Electronica \n");
    printf("Grupo 1106 \n");
    printf("Hernandez Reyna Samuel Alejandro \n");

}
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    presentacion();
    printf("Programa que ordena tres numeros de mayor a menor \n");
    printf("Dame el primer numero \n");
    scanf("%i", &a );
    printf("Dame el segundo numero \n");
    scanf("%i", &b );
    printf("Dame el tercer numero \n");
    scanf("%i", &c );
    if( a > b );
        else{
            d=a;
            a=b;
            b=d;
        }
    if( b < c );
        else{
            d=b;
            b=c;
            c=d;
        }
    if( a > b );
        else{
            d=a;
            a=b;
            b=d;
        }
    printf("El orden de los numeros es \n 1.%i \n 2.%i \n 3.%i \n ", a, b, c);
    return 0;
}
