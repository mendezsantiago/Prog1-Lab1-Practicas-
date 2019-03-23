// mostrar el mensaje "usted es xxxxx y vive en la localidad de xxxxxxxx". 

#include <stdio.h>
#include <stdlib.h>

int main() {
	char nombre[50];
	char localidad[50];
	
	printf("Ingrese su nombre: ");
	gets(nombre);
	printf("Ingrese la localidad: ");
	gets(localidad);
	
	printf ("Usted es %s y vive en la localidad de %s\n",nombre,localidad);
	
	system("pause");
	return 0;
}
