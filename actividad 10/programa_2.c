#include <stdio.h>
#include <stdlib.h>

main(){

  int vector1[20],vector2[20];
  printf("VECTOR 1 \n[");

  for (size_t i = 0; i < 20; i++) {//aqui llenamos el vector con valores numericos
    vector1[i] = rand();

    if (i==19) {
      printf("%i", vector1[i]);
    }else{
      printf("%i,", vector1[i]);
    }
  }
  printf("]\n\n\n");
  printf("VECTOR 2\n[");
  for (size_t i = 0; i < 20; i++) {
    vector2[i]=vector1[i]*vector1[i];
    if (i==19) {
      printf("%i", vector2[i]);
    }else{
      printf("%i,", vector2[i]);
    }
  }
  printf("]");
   return 0;
}
