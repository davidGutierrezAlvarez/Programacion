#include <stdlib.h>
#include <stdio.h>
#include <string.h>


FILE  *fichero;
#define archivo "datos.txt"/*nombre del archivo*/
#define MaxAlumnos 10/*limite de alumnos para el salon*/

struct calificaciones{
  int Actividades,/*40%*/
      Examenes[2],/*15% c/u (2)*/
      Participacion,/*10%*/
      Departamental;/*20%*/
}Promedio;

struct datosAlumno{
  char Nombre[50],/*se guarda el nombre de los alumnos*/
      Codigo[10],/*se guarda el codigo de los alumnos*/
      Carrera[10];/*se guarda la carrera de cada alumno*/
      //Promedio_f Promedio;
}Alumno;

struct MatrizSalon{/*en esta estructura se almacenan todos los datos de los alumnos
                    para ordenar los alumnos*/
  char Nombre[40][50],/*se guarda el nombre de los alumnos*/
      Codigo[40][10],/*se guarda el codigo de los alumnos*/
      Carrera[40][10];/*se guarda la carrera de cada alumno*/
    int Actividades[40],/*40%*/
        Examenes[40][2],/*15% c/u (2)*/
        Participacion[40],/*10%*/
        Departamental[40];/*20%*/
};


void crear() {/*esta funcion busca el fichero y si no existe crea uno*/
  fichero = fopen(archivo, "rt");/*busca fichero para leerlo*/
  if (fichero == NULL) {/*si ocurre algun erro lo crea*/
    fichero = fopen(archivo, "wt");
    printf("el fichero no existia y se creo uno");
  }else{
    printf("el fichero ya existe");
  }
}

void nuevoAlumno(){
  fflush(stdin);
  printf("\nNombre: ");gets(Alumno.Nombre);
  printf("\ncodigo: ");scanf("%s",&Alumno.Codigo);
  printf("\ncarrera: ");scanf("%s",&Alumno.Carrera);
  printf("\nActividades: ");scanf("%i",&Promedio.Actividades);
  printf("\nexamen 1: ");scanf("%i",&Promedio.Examenes[0]);
  printf("\nexamen 2: ");scanf("%i",&Promedio.Examenes[1]);
  printf("\ndepartamental: ");scanf("%i",&Promedio.Departamental);
}

void agregarAlumno() {//Ccon esto agregamos el alumno creado al fichero

  fichero = fopen(archivo, "at");/*escribe al final del documento*/
  fflush(stdin);
  fwrite(Alumno.Nombre,1,strlen(Alumno.Nombre),fichero);
  fprintf(fichero, "|");
  fwrite(Alumno.Codigo,1,strlen(Alumno.Codigo),fichero);
  fprintf(fichero, "|");
  fwrite(Alumno.Carrera,1,strlen(Alumno.Carrera),fichero);
  fprintf(fichero, "|\n");
  // fwrite(Promedio.Actividades,1,strlen(Promedio.Actividades),fichero);
  // fprintf(fichero, "|");
  // fwrite(Promedio.Examenes[0],1,strlen(Promedio.Examenes[0]),fichero);
  // fprintf(fichero, "|");
  // fwrite(Promedio.Examenes[1],1,strlen(Promedio.Examenes[1]),fichero);
  // fprintf(fichero, "|");
  // fwrite(Promedio.Departamental,1,strlen(Promedio.Departamental),fichero);
  fclose(fichero);
}



void mostrarAlumnos(){
  int c,contador=1,letras=0,total,barras=0;

  fichero = fopen(archivo, "rt");
  printf("\n\t\tNOMBRE\t       |CODIGO\t|CARRERA |ACTIVIDADES |EXAMEN 1 |EXAMEN 2 |PARTICIPACION |DEPARTAMENTAL |");
  printf("\n0%i.- ",contador);
  contador++;
  while ((c=fgetc(fichero)) != EOF) {
    if (c == '\n') {
      if (contador<10) {
        printf("\n0%i.- ",contador);
      }else {
        printf("\n%i.- ",contador);
      }
      contador++;
      barras=0;
    }else if (c == '|') {
      switch (barras) {
        case 0:total=25;/*total de espacios para nombre*/
        break;
        case 1:total=6;/*total de espacios para codigo*/
        break;
        case 2:total=6;/*total de espacios para carrera*/
        break;
        case 3:total=10;/*total de espacios para Actividades*/
        break;
        case 4:total=7;/*total de espacios para examen 1*/
        break;
        case 5:total=7;/*total de espacios para examen 2*/
        break;
        case 6:total=12;/*total de espacios para Participacion*/
        break;
        case 7:total=12;/*total de espacios para promedio*/
        break;
      }
      for (size_t i = 0; i < total-letras; i++) {
        printf(" ");
      }
      printf(" | ");
      letras=0;
      barras++;
    }else {
      putchar(c);
      letras++;
    }
  }
}

int charToInt(char cadena[5]){
  //char *cadena[] = "1234";
  float numero;
  numero = atof(cadena);/*convierte la cadena a un entero*/
  return numero;
}

void intToChar(int numero, char *cadena){
    sprintf(cadena, "%i", numero);
}


void split(char cadena[], char corte, char vector[7][30]) {/*este metodo convierte una cadena en un vector*/
  //char vector[7][20];
  int bloque=0,recorrido=0;
  for (size_t i = 0; cadena[i] != '\0'; i++) {
    fflush(stdin);
    //printf("%c", cadena[i]);
    if (cadena[i] != corte) {
      printf("%c\n", cadena[i]);
      vector[bloque][recorrido]=cadena[i];
      recorrido++;
    }else {
      printf("_%s_\n", vector[bloque]);
      bloque++;
      recorrido=0;
      printf("\n");
    }
  }
}
