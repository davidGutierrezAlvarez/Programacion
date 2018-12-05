#include <stdlib.h>
#include <stdio.h>
#include <string.h>


FILE  *fichero;
#define archivo "datos.txt"/*nombre del archivo*/
#define MaxAlumnos 10/*limite de alumnos para el salon*/

struct calificaciones {
  char Actividades[6],/*40%*/
      Examenes[2][6],/*15% c/u (2)*/
      Participacion[6],/*10%*/
      Departamental[6],/*20%*/
      Final[3];
  float NActividades,/*40%*/
      NExamenes[2],/*15% c/u (2)*/
      NParticipacion,/*10%*/
      NDepartamental,/*20%*/
      NFinal;
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
    printf("el fichero no existia y se creo uno\n");
  }else{
    printf("el fichero ya existe\n");
  }
}

void nuevoAlumno(){
  fflush(stdin);
  printf("\nNombre completo 'empezar por nombre' : ");gets(Alumno.Nombre);
  printf("\ncodigo '6 digitos': ");scanf("%s",&Alumno.Codigo);
  printf("\ncarrera 'porcentaje sobre 100' : ");scanf("%s",&Alumno.Carrera);
  printf("\nActividades 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Actividades);
  printf("\nexamen 1 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Examenes[0]);
  printf("\nexamen 2 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Examenes[1]);
  printf("\nParticipacion 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Participacion);
  printf("\ndepartamental 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Departamental);
}

void agregarAlumno() {//Ccon esto agregamos el alumno creado al fichero

  fichero = fopen(archivo, "at");/*escribe al final del documento*/
  fflush(stdin);
  fprintf(fichero, "\n");
  fwrite(Alumno.Nombre,1,strlen(Alumno.Nombre),fichero);
  fprintf(fichero, "|");
  fwrite(Alumno.Codigo,1,strlen(Alumno.Codigo),fichero);
  fprintf(fichero, "|");
  fwrite(Alumno.Carrera,1,strlen(Alumno.Carrera),fichero);
  fprintf(fichero, "|");

  fwrite(Promedio.Actividades,1,strlen(Promedio.Actividades),fichero);
  Promedio.NActividades = atof(Promedio.Actividades);
  fprintf(fichero, "|");
  fflush(stdin);
  fwrite(Promedio.Examenes[0],1,strlen(Promedio.Examenes[0]),fichero);
  Promedio.NExamenes[0] = atof(Promedio.Examenes[0]);
  fprintf(fichero, "|");
  fwrite(Promedio.Examenes[1],1,strlen(Promedio.Examenes[1]),fichero);
  Promedio.NExamenes[1] = atof(Promedio.Examenes[1]);
  fprintf(fichero, "|");
  fwrite(Promedio.Participacion,1,strlen(Promedio.Participacion),fichero);
  Promedio.NParticipacion = atof(Promedio.Participacion);
  fprintf(fichero, "|");
  fwrite(Promedio.Departamental,1,strlen(Promedio.Departamental),fichero);
  Promedio.NDepartamental = atof(Promedio.Departamental);
  fprintf(fichero, "|");
  Promedio.NFinal = .4 * Promedio.NActividades +
                    .15 * Promedio.NExamenes[0] +
                    .15 * Promedio.NExamenes[1] +
                    .1 * Promedio.NParticipacion +
                    .2 * Promedio.NDepartamental;
  sprintf(Promedio.Final, "%f", Promedio.NFinal);
  fwrite(Promedio.Final,1,strlen(Promedio.Final),fichero);
  fprintf(fichero, "|");

  fclose(fichero);
  //calFinal.Actividades = isdigit(Promedio.Actividades);
}



void mostrarAlumnos() {
  int c,contador=1,letras=0,total,barras=0;

  fichero = fopen(archivo, "rt");
  printf("\n\t\tNOMBRE\t\t| CODIGO |CARRERA |ACTIVIDADES |EXAMEN 1 |EXAMEN 2 |PARTICIPACION |DEPARTAMENTAL | CALIFICACION |");
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
        case 0:total=26;/*total de espacios para nombre*/
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

int charToInt(char cadena[5]) {
  float numero;
  numero = atof(cadena);/*convierte la cadena a un entero*/
  return numero;
}

void intToChar(int numero, char *cadena) {
    sprintf(cadena, "%i", numero);
}


void buscar(int valor){
  char inicio, fin = '|';
  int c,contador=1,nCaracteres=0,barras=0,total=0,letras=0;
  int barrita;
  char linea[100],buscar[30];
  int count=0;
  fichero = fopen(archivo, "rt");
  fflush(stdin);
  //printf("que palabra quieres buscar: ");
  gets(buscar);
  system("cls");
  printf("\n\t\tNOMBRE\t\t| CODIGO |CARRERA |ACTIVIDADES |EXAMEN 1 |EXAMEN 2 |PARTICIPACION |DEPARTAMENTAL | CALIFICACION |");
  if (valor == 0) {
    inicio = ' ';
  }else if (valor == 1 || valor == 2) {
    inicio = '|';
  }
  while ((c=fgetc(fichero)) != EOF) {/*revisara caracter por caracter*/
    if (c != '\n') {/*revisa renglon por renglon*/
      linea[nCaracteres]=c;/*guarda cada caracter del renglon*/
      nCaracteres++;/*recorre el renglon*/
      barrita=0;
    }else {
      nCaracteres=0;/*cuando hay un salto de linea recorrera otro renglon*/
      for (size_t i = 0; linea[i] != '\0'; i++) {
        if (linea[i] == '|') {
          barrita++;
        }
        if (linea[i]==buscar[count]  && barrita==valor) {/*revisara si la palabra esta en esa linea*/
          count++;
          /*si la cantidad de caracteres coincide y termina e inicia con el bloque con un '|' si existe*/
          if (count==strlen(buscar) && linea[i-strlen(buscar)]==inicio && linea[i+1]==fin) {/*cuando la palabra coinsida imprimira la linea*/
            /*esto imprimira la linea con orden*/
            if (contador<10) {
              printf("\n0%i.- ",contador);
            }else {
              printf("\n%i.- ",contador);
            }
            contador++;
            barras=0;
            for (size_t i = 0; linea[i] != '\0'; i++) {
              if (linea[i] == '|') {
                switch (barras) {/*casos*/
                  case 0:total=26;/*total de espacios para nombre*/
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
                  case 8:total=12;/*total de espacios para promedio*/
                  break;
                }
                for (size_t i = 0; i < total-letras; i++) {
                  printf(" ");
                }
                printf(" | ");
                letras=0;
                barras++;
              }else{
                printf("%c", linea[i]);
                letras++;
              }
            }
          }

        }else {
          count=0;/*cuando dejen de coincidir las letras se resetea*/
        }
      }/*fin del for*/
    }/*fin del condicional*/
  }/*fin del while*/
  printf("%i\n", contador);
  if (contador==1) {
    printf("\t\t\t\t.:NO SE ENCONTRARON ALUMNOS:.\n");
  }
}
