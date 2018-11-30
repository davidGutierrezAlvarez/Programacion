#include <stdio.h>
#include <stdlib.h>
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

void agregarAlumno() {

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
  int c,contador=1;

  fichero = fopen(archivo, "rt");
  printf("\n\tNOMBRE\tCODIGO\tCARRERA\tACTIVIDADES\tEXAMEN 1\tEXAMEN 2\tPARTICIPACION\tDEPARTAMENTAL");
  printf("\n%i.- ",contador);
  contador++;
  while ((c=fgetc(fichero)) != EOF) {
    if (c == '\n') {
      printf("\n%i.- ",contador);
      contador++;
    }else if (c == '|') {
      printf(" | ");
    }else {
      putchar(c);
    }
  }


}

int main() {
  crear();
  mostrarAlumnos();



  return 0;
}
