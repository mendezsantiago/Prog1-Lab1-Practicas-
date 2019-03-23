//Realizar el algoritmo que pida el ancho y el largo de un rectángulo por teclado y que muestre el perímetro. 


#include <stdio.h>
#include <stdlib.h>


int main(){
	float largo,ancho;
	float perimetro;
	printf("Ingrese el largo del rectangulo: ");
	scanf("%f",&largo);
	printf("Ingrese el ancho del rectangulo: ");
	scanf("%f",&ancho);
	perimetro = 2*largo + 2*ancho;
	printf("El perimetro del rectangulo es: %.2f\n",perimetro);
	
	system("pause");
	return 0;
}
