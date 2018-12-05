#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"




int main() {
  char menu,submenu;

  crear();/*revisa si existe el fichero y sino lo crea*/

  do {
    printf("\n\t\t\t\t\t\t\t\t.:MENU DE INICIO:.\n");
    printf("\n1.- Agregar nuevo alumno\n2.- Buscar\n3.- Filtrar por Carrera\n");
    printf("4.- Ver lista de alumnos\n5.- Ordenar lista de alumnos\n6.- Salir del program \n");
    printf("que desea hacer: ");
    scanf("%s", &menu);
    system("cls");

    switch (menu) {
      case '1':{
        if (contarAlumnos() > 40) {
          printf("YA SE A REGISTRADO LA CANTIDAD MAXIMA DE ALUMNOS\n");
          system("pause");
        }else{
          nuevoAlumno();/*primero creamos el alumno*/
          agregarAlumno();/*despues agregamos los datos del alumno al documento*/
        }
      }
      break;
      case '2':{
        printf("1.- buscar por apellidos\n2.- Buscar por codigo\n3.- Regresar\n");
        printf("que desea hacer: ");
        scanf("%s", &submenu);
        switch (submenu) {
          case '1': {
            printf("Introdusca los apellidos del alumno a buscar: ");
            buscar(0);/*busqueda por apellido*/
          }
            break;
          case '2': {
            printf("Introdusca el codigo a buscar: ");
            buscar(1);/*busqueda por codigo*/
          }
            break;
          default: {
            printf("\n\t\t\t\t\t\t\t\t.:ESTA REGRESANDO AL MENU:.\n");
            system("pause");
          }
        }

      }
        //buscarAlumnos();/*con esto se buscan los alumnos por apellido o codigo*/
      break;
      case '3':{
        printf("Introdusca la carrera a filtrar: ");
        buscar(2);/*filtra alumnos por carrera*/
      }
      break;
      case '4':
        mostrarAlumnos();
      break;
      case '5': {
        printf("1.-Nombre\n2.-calificacion\ncomo los desea ordenar\n");
        scanf("%s", &submenu);
        switch (submenu) {
          case '1':
            ordenNombre();
            break;
          case '2':
            ordenCalif();
            break;
        }

      }
        break;
        /*ordenar lista de alumnos*/
      break;
      case '6':
      printf("\n\t\t\t\t\t\t\t\t.:FIN DEL PROGRAMA:.\n");
      break;
      default:
        printf("\n\t\t\t\t\t\t\t\t.:VALOR INVALIDO:.");
    }

  } while(menu != '6');




  return 0;
}
