#include <stdio.h>

int main(){

	int numero, suma=0,cantidad=0;

	while(suma==0){
        printf("dame un numero entero de maximo cuatro digitos: ");
        scanf("%i",&numero);
        if(numero<=9999 && numero>=-9999)
            break;
        printf("\n el numero no es valido\n por favor introduce otro\n");
    }

        while(numero>0){
            suma+=numero%10;
            numero=numero/10;
            cantidad+=1;
        }
        printf("la suma de los numeros es: %i\n",suma);
        printf("y la cantidad de dijitos que hay es %i",cantidad);


	return 0;
}
