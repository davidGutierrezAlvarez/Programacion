#include <stdio.h>
#include <stdlib.h>

int main(void){
  int espacios=0,recorrido=0;
  char oracion[]="123456789",frace[254];
/*espacios cuenta los espacios
* oracion guarda toda la oracion
* frace guarda la segunda frace dentro de la oracion
*/


  printf("Escribe cualquer oracion que no sobrepase la cantidad de 255 caracteres\n");
  gets(oracion);
  //scanf("%s",&oracion);




  while (oracion[recorrido]!="") {
    //printf("%i\n%c\n", recorrido,oracion[recorrido]);
    //frace[recorrido]=oracion[recorrido]
    //printf("%c,\n%s\n", oracion[recorrido],oracion);
    printf("%if\n", recorrido);
    if (oracion[recorrido]=" ") {
      /* code */
      printf("es espacio: %s\n",oracion[recorrido] );
    }
    recorrido++;

  }
  //printf("%s",frace );




  /*for (recorrido; recorrido < count; recorrido++) {

  }
  */



  return 0;
}
