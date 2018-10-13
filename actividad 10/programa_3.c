#include <stdio.h>
#include <stdlib.h>

main(){

  int vector1[5],vector2[5],contador=0;

  printf("\t\t\t\t\t\tCOMPARADOR DE VECTORES\n" );

  printf("\t\t\t\t\t\tVECTOR 1\n" );
  for (size_t i = 0; i < 5; i++) {//aqui llenamos el vector con valores numericos
    printf("dame el valor %i del vector: ",i+1);
    scanf("%i", &vector1[i]);
  }

  printf("\t\t\t\t\t\tVECTOR 2\n" );
  for (size_t i = 0; i < 5; i++) {//aqui llenamos el vector con valores numericos
    printf("dame el valor %i del vector: ",i+1);
    scanf("%i", &vector2[i]);
  }

  for (size_t i = 0; i < 5; i++) {//con este for solo verifico si son EXACTAMENTE igual los vectores
    if (vector1[i]==vector2[i]){
      contador++;
    }
  }

if (contador==5) {
  printf("\nTus dos vectores son exactamente iguales\n" );
}else{
  contador=0;
  printf("\nTus vectores no son iguales\n");
  for (size_t i = 0; i < 5; i++) {
    for (size_t j = 0; j < 5; j++) {
      //printf("%i,%i\n",vector1[i],vector2[j] );
      if (vector1[i]==vector2[j]) {
        printf("el vector1[%i] y vector2[%i] son iguales con el valor -> %i\n",i+1,j+1,vector2[j] );
        contador++;
      }
    }
  }
}
if (contador==0) {
  printf("\nTus dos vectores son completamente diferentes\n");
}
  return 0;
}
