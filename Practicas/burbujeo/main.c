#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
    int vec[tam];
    int aux;

    for (int i = 0; i < tam; i++){
        printf("Ingrese el elemento del vector: ");
        scanf("%d",&vec[i]);
        system("cls");
    }

    for (int i = 0; i < tam; i++){
        printf("%d\t",vec[i]);

    }
    printf("\n\n");

    for (int i = 0; i < tam-1; i++){
        for (int j = i+1; j< tam; j++){
            if (vec[i]<vec[j]){
                aux = vec[i];
                vec[i]= vec[j];
                vec[j] = aux;
            }
        }
    }

    for (int i = 0; i < tam; i++){
        printf("%d\t",vec[i]);

    }
    printf("\n\n");


    return 0;
}
