#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaxAlumnos 10//limite de alumnos para el salon

typedef struct{
  int Actividades[MaxAlumnos],/*40%*/
      Parciales[MaxAlumnos],/*15% c/u (2)*/
      Participacion[MaxAlumnos],/*10%*/
      Departamental[MaxAlumnos];/*20%*/
}Promedio;


typedef struct {
  char  Nombre[MaxAlumnos][50],/*se guarda el nombre de los alumnos*/
        Carrera[MaxAlumnos][50],/*se guarda la carrera de cada alumno*/
        Codigo[MaxAlumnos][9];/*se guarda el codigo de los alumnos*/
        Promedio Promedio_final;
}Alumno;//es el salon que contiene a los alumnos

char *nuevo(int TotalAlumnos) {//*para apuntar en memoria
  static char nuevo[50];//static es para que almacenar en memoria
  if (TotalAlumnos<MaxAlumnos) {
    printf("dame el nombre completo del alumno #%i, emepzando por apellido : ", TotalAlumnos+1);
    fflush(stdin);
    gets(nuevo);//obtiene el nombre del alumno
  }else{
    printf("\t\t\tYA SE ALCANZO LA CANTIDAD MAXIMA DE ALUMNOS\n");
    system("pause");
  }
  return nuevo;
}

char *apellido(char nombre[]){//esta funcion es para separar el apellido del nombre
  static char apellido[50];
  for (size_t i = 0; nombre[i] != '\0'; i++) {
    if (nombre[i+1]==' ') {
      break;
    }else{
      apellido[i]=nombre[i];
    }
  }
  return apellido;
}





main() {
  int CantidadAlumnos=0, menu=0,submenu=0;
  char apellido[50],codigo[9];
  Alumno ListaAlumnos;


  while (menu!=5) {
    fflush(stdin);
    system("cls");
    printf("HOLA PROFESOR, ESTO ES UN REGISTRO PARA SUS ALUMNOS\n");
    printf("1.- Registrar un nuevo alumno a la lista\n2.- Ver lista\n3.- Agregar codigo de alumno\n4.-\n5.-Salir\n");
    printf("Que desea hacer: ");
    scanf("%i", &menu);

    switch (menu) {
      case 1:{
        strcpy(ListaAlumnos.Nombre[CantidadAlumnos],nuevo(CantidadAlumnos));
        CantidadAlumnos++;
        printf("1.-Si\n2.-No\nDesea seguir introduciendo datos para este Alumno: ");
        scanf("%i", submenu);
        switch (submenu) {
          case 1:
          printf("dame el codigo" );
          scanf("%s\n", codigo);
            strcpy(ListaAlumnos.Codigo[CantidadAlumnos],codigo);
            break;
          case 2:
            break;
          default:
            printf("No es valido");
        }
      }
        break;
      case 2:{
        printf("\t\tNombre \t\t\tCodigo \t\t\tCarrera \t\tPromedio\n");
        for (size_t i = 0; i < CantidadAlumnos; i++) {
          printf("%i.- %s|\n", i+1, ListaAlumnos.Nombre[i]);//, ListaAlumnos.codigo[i])//, ListaAlumnos.Carrera[i]);
               // ListaAlumnos.Promedio_final.Actividades[i], ListaAlumnos.Promedio_final.Parciales[i]):
               //  ListaAlumnos.Promedio_final.Participacion[i], ListaAlumnos.Promedio_final.Departamental[i]);
        }
        system("pause");
      }
        break;
      case 3:{
        fflush(stdin);
        printf("dame el primer apellido del alumno: ");
        gets(apellido);
        for (size_t i = 0; i < CantidadAlumnos; i++) {
          printf("%s,%s\n", ListaAlumnos.Nombre[i], apellido);
          if (ListaAlumnos.Nombre[i]==apellido) {
            printf("%s existe y es el alumno #%i\n", apellido, CantidadAlumnos);
          }else{
            printf("_______\n" );
          }
          system("pause");
        }
      }

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
