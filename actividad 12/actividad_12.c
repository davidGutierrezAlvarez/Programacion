#include <stdio.h>
#include <stdlib.h>

//Prototipos
char sustituir_caracter(char cadena[]);
int repeticiones_caracter(char cadena[]);
char eliminar_caracter(char cadena[]);
char orden_alfanumerico(char cadena[]);
char ultima_palabra(char cadena[]);

main(){
  char cadena[100];
  int opcion=1;
  while (opcion!=7) {
    fflush(stdin);
    if (opcion==1) {
      fflush(stdin);
      printf("Escribe una oracion: "); //obtiene la cadena
      gets(cadena);
    }
    system("pause");
    system("cls");
    printf("\t\t\t\t\tORACION --> %s <--\n", cadena);
    printf("\n1.- Cambiar cadena\n2.- Sustituir un caracter\n");
    printf("3.- Ver cuantas veces se repite una cadena\n4.- Eliminar un caracter\n");
    printf("5.- Ordenar los caracteres alfanumericamente\n6.- imprimir la ultima palabra de la cadena\n7.- Salir\nQue desea hacer: " );
    scanf("%i", &opcion);
    fflush(stdin);

    switch (opcion) {
      case 2:
      sustituir_caracter(cadena);
      break;
      case 3:
      repeticiones_caracter(cadena);
      break;
      case 4:
      eliminar_caracter(cadena);
      break;
      case 5:
      orden_alfanumerico(cadena);
      break;
      case 6:
      ultima_palabra(cadena);
      break;
    }
  }
  return 0;
}



char sustituir_caracter(char cadena[]){
  char cambiar, sustituir;
  int i;
  printf("\nCaracter para cambiar: "); //obtener caracter a buscar para remplazar
  scanf("%c",&cambiar);
  while (getchar() != '\n');
  printf("\nCaracter sustituto: "); //caracter sustituto
  scanf("%c",&sustituir);
  for (i=0;cadena[i]!='\0';i++){ //recorremos la cadena
      if (cadena[i]==cambiar){ //compara
          cadena[i]=sustituir; //cambia el valor si lo encuentra
      }
  }
  printf("%s\n", cadena);
}

int repeticiones_caracter(char cadena[]){
  char letra;
  int contador=0;
  printf("\nCaracter a contar: "); //obtener caracter a buscar para contar
  scanf("%c",&letra);
  while (getchar() != '\n');
  for (size_t i=0; cadena[i] != '\0'; i++) {
    if (cadena[i]==letra) {
      contador++;
    }
  }
  printf("%i\n", contador );
}

char eliminar_caracter(char cadena[]){
  char eliminar;
  int contador=0;
  printf("\nCaracter a eliminar: "); //obtener caracter a buscar para eliminar
  scanf("%c",&eliminar);
  for (size_t i=0; cadena[i] != '\0'; i++){ //recorremos la cadena
      if (cadena[i]==eliminar){ //compara
        contador++;
      }
      if (contador!=0) {
        cadena[i]=cadena[i+1]; //cambia el valor si lo encuentr
      }

  }
  printf("%s\n", cadena);
}

char orden_alfanumerico(char cadena[]){
  char actual,siguiente, aux, orden;

  printf("como quieres ordenar tu cadena\n <menor a Mayor> o <Mayor a menor> \n \t<m> \t\t<M>\n" );
  printf("orde: ");
  //fflush(stdin);
  scanf("%c", &orden);
  if (orden=='m') {
    //ordenamiento tipo burbuja de menar a mayor
    for (size_t i = 0; cadena[i] != '\0'; i++) {
      for (size_t j = 0; cadena[j] != '\0'; j++) {
        if (cadena[j]>cadena[j+1] && cadena[j+1]!='\0') {
          aux=cadena[j];
          cadena[j]=cadena[j+1];
          cadena[j+1]=aux;
        }
      }
    }
  }
  if (orden=='M') {
    //ordenamiento tipo burbuja de mayor a menor
    for (size_t i = 0; cadena[i] != '\0'; i++) {
      for (size_t j = 0; cadena[j] != '\0'; j++) {
        if (cadena[j]<cadena[j+1] && cadena[j+1]!='\0') {
          aux=cadena[j];
          cadena[j]=cadena[j+1];
          cadena[j+1]=aux;
        }
      }
    }
  }
  printf("%s", cadena);
}

char ultima_palabra(char cadena[]){
  char cadena2[100]="";
  int contador=0;
  for (size_t i = 0; cadena[i] != '\0'; i++) {
    if (cadena[i-1]==' ') {//cada vez que haya un espacio se reseteara la ultima palabra
      contador=0;
    }
    cadena2[contador]=cadena[i];//con esto se guardara la ultima palabra
    contador++;
  }
  printf("la ultima palabra de tu oracion es --> %s <--", cadena2);
}
