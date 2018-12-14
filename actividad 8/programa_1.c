#include <stdio.h>
#include <unistd.h>
#include <conio.h>

main() {
    char caracter,flechas;
    int columna=16,Ccolumna=0,fila=57,Cfila=0,counter=0;

    printf("introduce un caracter:");
    scanf("%c",&caracter);
    system("cls");

while(counter==0){

    while(columna>Ccolumna){
        while(fila>Cfila){
            printf(" ");
            Cfila++;
        }
        if(columna==Ccolumna+1){
            printf(" ");
        }else printf(" \n");

        Ccolumna++;
        Cfila=0;
    }
    printf("%c",caracter);
    Cfila=0;
    Ccolumna=0;
    printf("\n\n\n");
    printf("preciona una teclapara mover el caracter");
    printf("\nA Arriba\nB Abajo\nI Izquierda\nD Derecha\nF Salir\n");
    flechas = getche();
    //scanf("%c",&flechas);
    switch(flechas){
        case 72: case 'a':{
          if (columna > 1) {
            columna--;
          }
        }
        break;

        case 80: case 'B':columna++;break;

        case 75: case 'I':{
            if (fila > 0) {
              fila--;
            }
        }
        break;

        case 77: case 'D':fila++;break;

        case 27: case 'F':counter=1;break;
    }
    system("cls");
}
    return 0;
}
