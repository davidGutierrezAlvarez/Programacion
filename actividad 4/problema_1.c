/*
*Programa que imprima si un alumno puede o no
*pertenecer al equipo de basquetbol, si para
*ello debe contar con promedio de 80 o más, medir
*1.75 o más y tener entre 18 y 24 años
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	int edad;
	float promedio,estatura;

	printf("\t\t\t\t\tQUIERES ENTRAR AL EQUIPO DE BASTQUETBOL\n");
	printf("cual es tu p´romedio: ");
	scanf("%f",&promedio);
	printf("cuanto mides, en mestros: ");
	scanf("%f",&estatura);
	printf("y por ultimo cual es tu edad: ");
	scanf("%i",&edad);

	if(edad>=18 && edad<=24 && promedio>=80 && estatura >=1.75){
        printf("\t\t\t\t\t\t\tBIENVENIDO\n");
        printf("\t\t\t\t\t\tYA ERES PARTE DEL EQUIPO\n\n\n\n\n\n");
	}
	else
        printf("\t\t\t\t\t   NEL :v NO CUMPLES LOS REQUISITOS\n\n\n\n\n\n");


	return 0;
}
