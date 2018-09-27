#include <stdio.h>
#include <stdlib.h>


main(){

    int numero,suma=0,resto;

    printf("introduce un numero de 4 digitos: ");
    scanf("%i",&numero);



    while(numero<0 || numero>9999){
        printf("por favor introduce un numero de 4 digitos\n");
        printf("introduce un numero de 4 digitos: ");
        scanf("%i",&numero);
    }
    //printf("la suma de ");
    while(numero!=0){
        resto=(numero%10);
        suma=(suma+resto);
        numero=(numero/10);
        //printf("%i+",resto);
    }
    //return (suma);
    printf("la suma de los digitos del numero%i es = %i\n\n\n\n\n\n",numero,suma);



 return 0;
}
