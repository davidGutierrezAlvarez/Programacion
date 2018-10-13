#include <stdio.h>
#include <stdlib.h>

main(){

  int longitud;
  while (1) {
    printf("dame la longitud del vector:");
    scanf("%i",&longitud);
    if (longitud<2) {
      printf("POR FAVOR INTRODUCE UNA LONGITUD DE MINIMO DOS CARACTER\n");
    }else{
      break;
    }
  }
  int vector[longitud],multiplos_3=0;
  printf("LOS ELEMENTOS EN LA POSICION PAR SON:\n[");
  for (size_t i = 0; i < longitud; i++) {
    vector[i]=rand();
    //printf("%i\n",vector[i] );
    if (i%2==0) {//elementos pares
      if (i==longitud-2 || i==longitud-1) {
          printf("%i", vector[i]);
      }else{
        printf("%i,", vector[i]);
      }
    }
    if (vector[i]%3==0) {//multiplos de 3
      multiplos_3+=vector[i];
    }
  }
  printf("]\n\nY LA SUMA DE LOS MULTIPLO DE TRES ES:\n%i\n", multiplos_3);

  return 0;
}
