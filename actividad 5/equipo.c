#include <stdio.h>

main(){
    int numero;

    printf("escribe un numero: ");
    scanf("%i",&numero);

    while(numero>0){
        printf("el numero es positivo");
        break;
    }
    while(numero<0){
        printf("el numero es negativo");
        break;
    }
    while(numero==0){
        printf("el numero es cero");
        break;
    }



    return 0;
}
