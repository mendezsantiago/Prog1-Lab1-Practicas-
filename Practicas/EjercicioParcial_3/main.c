//Pedir el precio y el porcentaje de descuento, mostrar el precio final con descuento. 



#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float precio;
	int descuento;
	float precio_final;
	
	printf("Ingrese el precio: ");
	scanf("%f",&precio);
	
	printf("Ingrese el descuento: ");
	scanf("%d",&descuento);
	
	precio_final = (float) precio - (precio * descuento/100); 
	 
	printf("El precio total es de: %.2f\n",precio_final);
	
	system("pause");
	return 0;
}
