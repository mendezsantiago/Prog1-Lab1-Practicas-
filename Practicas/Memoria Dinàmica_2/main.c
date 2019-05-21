#include <stdio.h>
#include <stdlib.h>



int main()
{
    int *pArray;

    pArray = (int*) malloc(sizeof(int)*5);

    if (pArray == NULL){
        printf("No se consiguio memoria\n");
        system("pause");
        exit(1);
    }

    for (int i = 0; i < 5; i ++){
        printf("Cargue algun valor: ");
        scanf("%d", pArray+i);
    }

    for (int i = 0; i < 5; i ++){
        printf("\n%d\t", *(pArray+i));
    }
    free(pArray);


    return 0;
}
