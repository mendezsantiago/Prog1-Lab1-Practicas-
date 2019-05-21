#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a;
    a = (char *)malloc(sizeof(char));
    if(a == NULL){

        printf("NO QUEDA MEMORIA");
        system("pause");
        exit(1);
    }
    *a = 's';
    printf("a: %c", *a);
    free(a);

    return 0;
}
