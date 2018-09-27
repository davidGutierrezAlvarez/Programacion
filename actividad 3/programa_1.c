#include <stdio.h>

main(){

    int edad;
    char nombre[50],sexo='n';
    float estatura;

    printf("por favor dame tu nombre: ");
    scanf("%s",&nombre);
    printf("cual es su edad: ");
    scanf("%i",&edad);
    printf("cual es tu estatura en metros: ");
    scanf("%f",&estatura);
    printf("cual es su sexo f/m: ");
    scanf("%s",&sexo);
    //si no es correcto el valor que pone el usuario, lo pedira de nuevo hasta que cumpla los requisitos
    while(sexo!='f' && sexo!='m' && sexo!='F' && sexo!='M'){
        printf("porfavor introdusca un valor correcto: \n");
        printf("cual es su sexo f/m: ");
        scanf("%s",&sexo);
    }


    printf("%s, tu edad es %i, mides %fm, y tu sexo es %c",nombre,edad,estatura,sexo);

    return 0;
}
