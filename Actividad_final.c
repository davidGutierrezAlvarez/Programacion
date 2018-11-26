#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaxAlumnos 3
#define calificaciones 4

typedef struct{
  int Actividades[MaxAlumnos],/*40%*/
      Parciales[MaxAlumnos],/*15% c/u (2)*/
      Participacion[MaxAlumnos],/*10%*/
      Departamental[MaxAlumnos];/*20%*/
}Promedio;


typedef struct {
  char  Nombre[MaxAlumnos][50],/*se guarda el nombre de los alumnos*/
        Codigo[MaxAlumnos][9],/*se guarda el codigo de los alumnos*/
        Carrera[MaxAlumnos][50];/*se guarda la carrera de cada alumno*/
        Promedio Promedio_final;
}Alumno;//es el salon que contiene a los alumnos

char *nuevo(int TotalAlumnos) {
  static char nuevo[50];//static es para que almacenar en memoria
  if (TotalAlumnos<MaxAlumnos) {
    printf("dame el nombre completo del alumno %i : ", TotalAlumnos+1);
    fflush(stdin);
    gets(nuevo);//obtiene el nombre del alumno
  }else{
    printf("\t\t\tYA SE ALCANZO LA CANTIDAD MAXIMA DE ALUMNOS\n");
    system("pause");
  }
  return nuevo;
}

main() {
  int CantidadAlumnos=0, menu=0;
  Alumno ListaAlumnos;


  while (menu!=5) {
    fflush(stdin);
    system("cls");
    printf("HOLA PROFESOR, ESTO ES UN REGISTRO PARA SUS ALUMNOS\n");
    printf("1.- Registrar un nuevo alumno a la lista\n2.- Ver lista\n3.-\n4.-\n5.-Salir\n");
    printf("Que desea hacer: ");
    scanf("%i", &menu);

    switch (menu) {
      case 1:{
        strcpy(ListaAlumnos.Nombre[CantidadAlumnos],nuevo(CantidadAlumnos));
        CantidadAlumnos++;
      }
        break;
      case 2:{
        for (size_t i = 0; i < CantidadAlumnos; i++) {
          printf("%i.- %s\n", i+1, ListaAlumnos.Nombre[i]);
        }
        system("pause");

      }
              break;
      case 3:
              break;
      case 4:
              break;
      case 5:
        printf("\t\tADIOS");
        break;
      default:
        printf("introduce un valor de los anteriores\n");
    }
  }

  return 0;
}
