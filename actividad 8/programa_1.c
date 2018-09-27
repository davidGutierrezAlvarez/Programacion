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

    scanf("%c",&flechas);
    switch(flechas){
        case 'a': case 'A':columna--;break;

        case 'b': case 'B':columna++;break;

        case 'i': case 'I':fila--;break;

        case 'd': case 'D':fila++;break;

        case 'f': case 'F':counter=1;break;
    }
    system("cls");
}
    return 0;
}
