#include <stdio.h>
int main(int argc, char const *argv[])
{
    //Inicializacion de variables
    
    int numCal,i;
    float cal[100], sumaGrup, promGrup;

    //Presentacion

    printf("Universidad Nacional Autonoma De Mexico\n");
    printf("Facultad De Estudios Superiores Aragon\n");
    printf("Ingenieria Electrica Electronica\n");
    printf("Grupo 1106\n");
    printf("Hernandez Reyna Samuel Alejandro\n");

    //Presentacion Programa
    printf("Programa que promedia muchas calificaciones\n");
    //Pregunta programa
    printf("Cuantas calicaciones vas a promediar?\n");
    scanf("%i", &numCal );
    //Ciclo For para el tamano de las calificaciones y preguntar sobre ellas
    for ( i = 1; i <= numCal; i++)
    {
        printf("Ingresa la calificacion %i. \n", i);
        scanf("%f", &cal[i]);
    }
    //Ciclo form para la suma de calificaciones
    for ( i = 1; i <= numCal; i++)
    {
        sumaGrup = sumaGrup + cal[i];
    };
    //
    promGrup = sumaGrup / numCal;
    printf("El promedio del grupo es: \n %f \n ", promGrup);
    
    
    return 0;
}
