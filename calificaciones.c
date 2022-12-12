#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int numGrupos, numCal, i, u, o;
    float grup[100], cal[100], sumaGrupo, sumaGrupos, promGrupo, promGrupos;
    printf("Programa que promedia las calificaciones de varios grupos \n");
    printf("Cuantas grupos vas a calificar? \n");
    scanf("%i", &numGrupos);
    for ( i = 1; i <= numGrupos; i++)
    {
        printf("Grupo %i \n", i );
        printf("Cuantas calificaciones quieres promediar?");
        scanf("%i", &numCal);
        u = 1;
        do
        {
            printf("Ingresa la calificacion %i \n", u);
            scanf("%f", &cal[u]);
            u++;
        } while ( u <= numCal);
        o = 1;
        do
        {
            sumaGrupo = sumaGrupo + cal[o];
        } while ( o <= numCal);
        promGrupo = sumaGrupo / numCal;
        //grup[i] = promGrupo;
    }
    /*
    for ( i = 1; i <= numGrupos; i++)
    {
        sumaGrupos = sumaGrupos + grup[i];
    }
    promGrupos = sumaGrupos / numGrupos;
    printf("El promedio de los grupos es %f ", promGrupos);
    */
    return 0;
}
