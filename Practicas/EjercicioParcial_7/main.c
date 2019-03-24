/*Realizar el algoritmo que permita el ingreso de las notas (validar entre 0 y 10) , el sexo (validar el sexo “f” o “m”) de 5 alumnos:
a) El promedio de las notas totales.
b) La nota más baja y el sexo de esa persona.
c) La cantidad de varones que su nota haya sido mayor o igual a 6.*/ 

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int contador = 0;
	int i=0;
	int suma = 0;
	int flag = 1;
	int cantidadVarones = 0;
	int minNota;
	int idAlumno;
	int nota;
	char sexo;
	char sexAlumno;
	
	
	
	
	while(contador < 5){
		contador++;
		i++;
		printf("Ingrese nota del alumno %d: ",i);
		scanf("%d",&nota);
		
		while(nota < 0 || nota > 10){
			
			printf("Nota ingresada incorrecta...vuelva a intentar.\n");
			printf("Ingrese nota del alumno %d: ",i);
			scanf("%d",&nota);	
		}
		
		printf("Ingrese sexo del alumno %d: ",i);
		fflush(stdin);
		scanf("%c",&sexo);
		
		while(sexo != 'm' && sexo != 'f'){
			
			printf("Sexo ingresado incorrecto...vuelva a intentar.\n");
			printf("Ingrese sexo del alumno %d: ",i);
			fflush(stdin);
			scanf("%c",&sexo);
		}
		
		suma += nota;
		
		if(flag==1){
			minNota = nota;
			idAlumno = i;
			sexAlumno = sexo;	
			flag = 0;	
		}
		
		if (nota < minNota){
			minNota = nota;
			idAlumno = i;
			sexAlumno = sexo;	
		}
				
		if (nota >= 6 && sexo == 'm'){
			cantidadVarones++;
		}
					
	}//Fin del while	
	
	printf("El promedio de las notas totales es: %d\n",suma/5);
	printf("La minima nota es de %d, del alumno %d, de sexo %c\n", minNota, idAlumno,sexAlumno);
	printf("Cantidad de varones con notas mayores a 6: %d\n", cantidadVarones);
		
	system("pause");		
	return 0;
}//Fin del programa
