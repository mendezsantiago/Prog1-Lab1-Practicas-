#include <stdio.h>
#include <stdlib.h>

int main()
{
    int legajos[5];
    int nota1[5];
    int nota2[5];
    float promedios[5];
    char sexos[5];
    int suma = 0;

    for (int i = 0; i < 5;i++){
        printf("Ingrese el legajo del alumno %d: ",i+1);
        scanf("%d",&legajos[i]);
        printf("\nIngrese la nota 1 del alumno %d: ",i+1);
        scanf("%d",&nota1[i]);
        printf("\nIngrese la nota 2 del alumno %d: ",i+1);
        scanf("%d",&nota2[i]);
        fflush(stdin);
        printf("\nIngrese el sexo del alumno %d: ",i+1);
        scanf("%c",&sexos[i]);
        system("cls");

    }

    for (int i = 0; i< 5;i++){
        suma = nota1[i] + nota2[i];
        promedios[i] = (float) suma/2;
    }

    for (int i = 0; i < 5; i++){
        printf("El alumno de legajo %d, sexo %c, tiene un promedio de %.2f\n",legajos[i],sexos[i],promedios[i]);

    }

    return 0;
}
