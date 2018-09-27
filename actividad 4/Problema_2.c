/*
*Programa que reciba un entero entre 0 y 255 y
*muestre en la pantalla el carácter correspondiente
*en ASCII. O bien que reciba el carácter e imprima
*cuál es su código en decimal. La elección la hará el usuario.
*
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero,valor;
	char caracter,un='@';

    printf("ES --> %d",un);
	printf("\t\t\t\t\tESTO ES UN CONVERSOR DE ASCII\n");
	printf("____________________________________________________________________|\n");
	printf("<<convertir de ASCII a CARACTER>>  |  <<CONVERTIR CARACTER A ASCII>>|");
	printf("\n\t   <<1>>\t\t   |\t\t  <<2>>\t            |\n");
    printf("___________________________________|________________________________|\n");

    printf("QUE DESEA HACER: ");
	scanf("%i",&valor);
    while(valor!=1 && valor!=2){
    printf("\npor favor introduce un valor posible\n");
	printf("QUE DESEA HACER: ");
	scanf("%i",&valor);
	}

	if (valor==1){
        printf("dame el numero del codigo ASCII: ");
        scanf("%i",&numero);
        while(numero<0 || numero>255){
            printf("\npor favor introduce un valor entr 0 y 255\n");
            printf("dame el numero del codigo ASCII: ");
            scanf("%i",&numero);
        }
        printf("el caracter es --> %c",numero);
	}
	if(valor==2){
        printf("dame el caracter que quieres convertir a ASCII: ");
        scanf("%s",&caracter);
        printf("el numero ASCII es --> %d",caracter);
	}

	return 0;
}
