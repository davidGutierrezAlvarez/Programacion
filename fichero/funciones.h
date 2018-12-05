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

struct matrizSalon{
  char Linea[40][300],
  auxiliarLinea[300],
  Calificacion[40][15],
  auxiliarCal[15];
}Salon;

void crear() {/*esta funcion busca el fichero y si no existe crea uno*/
  fichero = fopen(archivo, "rt");/*busca fichero para leerlo*/
  if (fichero == NULL) {/*si ocurre algun erro lo crea*/
    fichero = fopen(archivo, "wt");
    printf("no hay alumnos en su bse de datos\n");
  }else{
    printf("ya hay una base de datos\n");
  }
}

void nuevoAlumno(){
  fflush(stdin);
  char digito = 0;
  printf("\nNombre completo 'empezar por nombre' : ");gets(Alumno.Nombre);

  do {
    digito = 0;
    printf("\ncodigo '6 digitos': ");scanf("%s",&Alumno.Codigo);
    for (size_t i = 0; Alumno.Codigo[i] != '\0'; i++) {
      digito++;
    }
    if (digito != 6) {
      printf("DEBES INTRODUCIR EXACTAMENTE '6' LETRAS");
    }
    if (Vcode(Alumno.Codigo) == 1) {/*Vcode valida que el codigo no se repita*/
      printf("El codigo ya existe, introdusca otro \n");
    }
  } while(Vcode(Alumno.Codigo) == 1 || digito != 6);

  do {
    digito = 0;
    printf("\ncarrera '4 letras': ");scanf("%s",&Alumno.Carrera);
    for (size_t i = 0; Alumno.Carrera[i] != '\0'; i++) {
      digito++;
    }
    if (digito != 4) {
      printf("DEBES INTRODUCIR EXACTAMENTE '4' LETRAS\n");
    }
  } while(digito != 4);

  printf("\nActividades 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Actividades);
  printf("\nexamen 1 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Examenes[0]);
  printf("\nexamen 2 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Examenes[1]);
  printf("\nParticipacion 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Participacion);
  printf("\ndepartamental 'porcentaje sobre 100' : ");scanf("%s",&Promedio.Departamental);
}

void agregarAlumno() {//Ccon esto agregamos el alumno creado al fichero
  fichero = fopen(archivo, "at");/*escribe al final del documento*/
  fflush(stdin);
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
  fprintf(fichero, "\n");
  fclose(fichero);
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
  printf("\r     " );
}

int Vcode(char code[]){/*esta funcion valida la existencia del codigo de algun alumno*/
  char inicio = '|', fin = '|', linea[100];
  int c, nCaracteres=0, barrita=1, count=0;

  fichero = fopen(archivo, "rt");
  fflush(stdin);

  while ((c=fgetc(fichero)) != EOF) {/*revisara caracter por caracter*/
    if (c != '\n') {/*revisa renglon por renglon*/
      linea[nCaracteres]=c;/*guarda cada caracter del renglon*/
      nCaracteres++;/*recorre el renglon*/
      barrita=0;/*reinicia las barras de separacion al saltar una linea*/
    }else {
      nCaracteres=0;/*cuando hay un salto de linea recorrera otro renglon*/
      for (size_t i = 0; linea[i] != '\0'; i++) {
        if (linea[i] == '|') {
          barrita++;
        }
        if (linea[i]==code[count]  && barrita==1) {
          /*revisara si la palabra esta en esa linea*/
          count++;
          /*si la cantidad de caracteres coincide y termina e inicia con el bloque con un '|' si existe*/
          if (count==strlen(code) && linea[i-strlen(code)]==inicio && linea[i+1]==fin) {/*cuando la palabra coinsida imprimira la linea*/
            return 1;
          }
        }else {
          count=0;/*cuando dejen de coincidir las letras se resetea*/
        }
      }/*fin del for*/
    }/*fin del condicional*/
  }/*fin del while*/
  return 0;
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
    }else if(c == '\n'){
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
    printf("\t\t\t\t\t\t\t\t.:NO SE ENCONTRARON ALUMNOS:.\n");
  }
}

int contarAlumnos() {
  int c, CAlumnos=0;

  fichero = fopen(archivo, "rt");

  while ((c=fgetc(fichero)) != EOF) {
    if (c == '\n') {
      CAlumnos++;
    }
  }
  return CAlumnos;
}

void ordenNombre(){
  mostrarAlumnos();
}

void ordenCalif() {
  mostrarAlumnos();
}

void saveMatriz() {
  int c,contador=1,nCaracteres=0;
  int barrita, count=0;
  fichero = fopen(archivo, "rt");
  fflush(stdin);
  system("cls");

  while ((c=fgetc(fichero)) != EOF) {/*revisara caracter por caracter*/
    if (c != '\n') {/*revisa renglon por renglon*/
      Salon.Linea[contador][nCaracteres]=c;/*guarda cada caracter del renglon*/
      nCaracteres++;/*recorre el renglon*/
      barrita=0;
    }else {
      nCaracteres=0;/*cuando hay un salto de linea recorrera otro renglon*/
      for (size_t i = 0; Salon.Linea[contador][i] != '\0'; i++) {
        if (Salon.Linea[contador][i] == '|') {
          barrita++;
        }
        if (barrita == 8 && Salon.Linea[contador][i] != '|') {/*buscar la calificaciones*/
          Salon.Calificacion[contador][count]=Salon.Linea[contador][i];
          count++;
        }else {
          count=0;/*cuando termina de añadir la calificacion se resetea*/
        }
      }/*fin del for*/
      contador++;
    }/*fin del condicional*/
  }/*fin del while*/
}


void ordenar(){
  //saveMatriz();
  // for (size_t i = 0; i < contarAlumnos()-1; i++) {
  //   for (size_t j = 0; j < contarAlumnos()-1; j++) {
  //     fflush(stdin);
  //     if (atof(Salon.Calificacion[j]) < atof(Salon.Calificacion[j+1])) {
  //
  //       // strcpy(Salon.auxiliarCal , Salon.Calificacion[j]);
  //       // strcpy(Salon.Calificacion[j] , Salon.Calificacion[j+1]);
  //       // strcpy(Salon.Calificacion[j+1] , Salon.auxiliarCal[j]);
  //       *Salon.auxiliarCal = Salon.Calificacion[j];
  //       printf("%s\n", Salon.auxiliarCal);
  //       *Salon.Calificacion[j] = Salon.Calificacion[j+1];
  //       *Salon.Calificacion[j+1] = Salon.auxiliarCal;
  //
  //       *Salon.auxiliarLinea = *Salon.Linea[j];
  //       *Salon.Linea[j] = *Salon.Linea[j+1];
  //       *Salon.Linea[j+1] = *Salon.auxiliarLinea;
  //     }
  //     printf("%i_%s\n",i, Salon.Calificacion[j]);
  //     printf("%i_%s\n",i, Salon.Linea[j]);
  //   }
  // }
  // fichero = fopen(archivo, "wt");
  // fclose(archivo);
  // fichero = fopen(archivo, "at");
  for (size_t i = 0; i < contarAlumnos(); i++) {
    printf("%s\n", Salon.Calificacion[i]);
    // fwrite(Salon.Linea[i],1,strlen(Salon.Linea[i]),fichero);
    // fprintf(fichero, "\n");
  }
  // fclose(archivo);
}
