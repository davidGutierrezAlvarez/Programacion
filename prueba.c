#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaxAlumnos 3
#define calificaciones 4




typedef struct {
  char  Nombre[MaxAlumnos][50],/*se guarda el nombre de los alumnos*/
        Codigo[MaxAlumnos][9],/*se guarda el codigo de los alumnos*/
        Carrera[MaxAlumnos][50];/*se guarda la carrera de cada alumno*/

}Alumno;//es el salon que contiene a los alumnos

Alumno nuevo(int TotalAlumnos) {//de la estructura almuno creo nuevos alumnos
  Alumno nuevo;//datos guarda toda la informacion del alumno
  if (TotalAlumnos<MaxAlumnos) {
    printf("dame el nombre completo del alumno : ");
    fflush(stdin);
    gets(nuevo.Nombre[TotalAlumnos]);//lo agrega al final de la lista de alumnos
  }else{
    printf("\t\t\tYA SE ALCANZO LA CANTIDAD MAXIMA DE ALUMNOS\n");
    system("pause");
  }

  return nuevo;
}


main() {
  int cantidad_alumnos=0, menu=0;
  //Alumno nuevo_alumno = nuevo();


  while (menu!=5) {
    printf("HOLA PROFESOR, ESTO ES UN REGISTRO PARA SUS ALUMNOS\n");
    printf("1.- Registrar un nuevo alumno a la lista\n2.-\n3.-\n4.-\n5.-Salir\n");
    printf("Que desea hacer: ");
    scanf("%i", &menu);
    fflush(stdin);
    switch (menu) {
      case 1:{
        Alumno nuevo_alumno = nuevo(cantidad_alumnos);
        for (size_t i = 0; i < 3; i++) {
              printf("%s\n", nuevo_alumno.Nombre[i]);
            }
        cantidad_alumnos++;
      }
        break;
      case 2:{

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
  //existente();


  return 0;
}
