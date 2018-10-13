#include <stdio.h>
#include <stdlib.h>

main(){
  int espacios;
  char frase[255]="",continuar='1';

  printf("\t\t\t\tINTRODUCE CUALQUIER ORACION QUE CONTENGA UN MAXICO \n\t\t\t     DE 255 CARACTERES Y TE DARE LA SEGUNDA PALABRA INGRESADA\n\n");
  while (continuar=='1') {
    fflush(stdin);
    //con esto el usuario lo podra usar las veces que quiera
    espacios=0;
    //cuando lo use por segunda vez los espacios entre las fraces se resetearan
    printf("\nIngrese una frase:");
    gets(frase);//el get permite recivir todos los datos


    for (int i = 0; i < 255; i++) {
      if (espacios==1) {
        if (frase[i]!=' '){//esto verifica que el usuario al escribir mas de un espacio juntos estos no se impriman
          printf("%c",frase[i] );
        }
      }
      if (frase[i]==' ') {//esto cuenta la cantidad de espacio que hay
        if (frase[i-1]!=' ') {//esto verifica que no haya mas de un espacio seguidos
          espacios++;
        }
      }
    }//Ttermina siclo for
    if (espacios<1) {//si no hay espacios significa que hay una palabra o ninguna
      printf("\n\tPOR FAVOR INTRODUSCA MAS DE UNA PALABRA\n");
    }else{
      if (espacios>255) {// esto se ejecuta cuando el usuario introduce mas de 255 caracteres
        printf("\n\n\t\t\tSON MAXIMO 255 CARACTERES, POR FAVOR INGRESE LOS DATOS DE NUEVO" );
      }else{//si todo sale bien y el usuario introduce bien los valores esto se ejecutara
        printf("\n\n\t\t\ttu frase tiene '%i' palabras\n\n", espacios+1);
        printf("desea volver a introducir otra frase: \n1='si' \notro valor= 'no'\n" );
        scanf("%c",&continuar);
      }
    }
  }//termina while
   return 0;
}
