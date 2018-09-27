/*Calcular el sueldo neto por horas trabajadas de un profesor bajo las siguientes condiciones:
a)    Si es categoría A gana 50.00 x hora, pero si es B gana 55.00.
b)    A partir de los 5 años de servicio le pagan un bono de antigüedad del 10% del sueldo bruto y cada año dicho bono se incrementa en un 2%, hasta llegar al 60%.
c)    Paga impuestos a razón del 3% de su sueldo bruto.
d)    Percibe ayuda por concepto de vivienda, despensa, etc de 5%.
e)    Si tiene crédito INFONAVIT debe pagar el 5% de su sueldo bruto también.*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	char cat;
	int sueldo, horas;
	float bono, bono2, bonototal, impuestos, concepto, infonavit;
	printf("Que categoria de profesor eres?:\n\t'A'\t\t'B'\n\nCategoria:");
	scanf("%c",&cat);
	printf("cuantas horas as trabajado: ");
	scanf("%i",&horas);
	system("cls");

	if(cat=='A' || cat=='a'){
		sueldo=50*horas;
		bono=10*sueldo/100;
		bono2=2*sueldo/100;
		bonototal=60*sueldo/100;
		impuestos=3*sueldo/100;
		concepto=5*sueldo/100;
		infonavit=5*sueldo/100;
		printf("Tu salario neto es: %i\n\n",sueldo);
		printf("Tu bono que se otorga a los 5 anios es: %f, cada anio extra se \nincrementara: %f, logrando despues de 45 años un total de: %f\n\n", bono, bono2, bonototal);
		printf("De tu salario se van a descontar: %f, de los impuestos a tu sueldo bruto.\n\n",impuestos);
		printf("Por conceptos de vivienda, despensa, etc. se te descontaran: %f, a tu sueldo bruto.\n\n",concepto);
		printf("Si cuentas con saldo de INFONAVIT se te descontara: %f.\n\n\n\n\n\n",infonavit);
	}
	if(cat=='B' || cat=='b'){
		sueldo=50*horas;
		bono=10*sueldo/100;
		bono2=2*sueldo/100;
		bonototal=60*sueldo/100;
		impuestos=3*sueldo/100;
		concepto=5*sueldo/100;
		infonavit=5*sueldo/100;
		printf("Tu salario neto es: %i\n\n",sueldo);
		printf("Tu bono que se otorga a los 5 años es: %f, cada año extra se \nincrementara: %f, logrando despues de 45 años un total de: %f\n\n", bono, bono2, bonototal);
		printf("De tu salario se van a descontar: %f, de los impuestos a tu sueldo bruto.\n\n",impuestos);
		printf("Por conceptos de vivienda, despensa, etc. se te descontaran: %f, a tu sueldo bruto.\n\n",concepto);
		printf("Si cuentas con saldo de INFONAVIT se te descontara: %f.\n\n\n\n\n\n",infonavit);
	}
	if(cat!='A' && cat!='a' && cat!='B' && cat!='b'){
		printf("La seleccion fue invalida...");
	}

	return 0;
}

