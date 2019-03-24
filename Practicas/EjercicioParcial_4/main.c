/* (IF).
Pedir dos números y mostrar el resultado:
Si son iguales los muestro concatenados.
Si el primero es mayor, los resto,
de lo contrario los sumo.
Si la suma es mayor a 10 ,además de mostrar el resultado, muestro el mensaje
"la suma es xxx y supero el 10".*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numero1;
	int numero2;
	int resultado;
	
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero1);
	
	printf("Ingrese otro numero: ");
	scanf("%d",&numero2);
	
	if(numero1 == numero2){
		printf("%d%d",numero1,numero2);
	}
	else
	{
		if(numero1 > numero2){
			resultado = numero1 - numero2;
			printf("El resultado es: %d",resultado);
		}
		else
		{
			resultado = numero1 + numero2;
			printf("El resultado es: %d\n",resultado);
			if (resultado > 10){
				printf("La suma es %d y supero el 10",resultado);
			}
		}
	}
	
	return 0;
}
