#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main() {
  printf("\t\t\t\t\t\t\t.:EN PROCESO:.\n");


  char cadena[20],cadena2[7][20];
  gets(cadena);

  split(cadena, '|', cadena2);
  printf("%s___\n", cadena2[1]);


  return 0;
}
