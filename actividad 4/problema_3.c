

#include <stdio.h>


main(){

    int dia, mes,anio;
    char signo[10];
    printf("%s",signo);

    printf("en que anio maciste: ");
    scanf("%i",&anio);
    printf("en que mes naciste: ");
    scanf("%i",&mes);
    printf("que dia del mes naciste: ");
    scanf("%i",&dia);

    printf("tu signo sodiacal es ");
    switch (mes) {
        case 1:
            if (dia > 21) {
                printf("ACUARIO");
            } else {
                printf("CAPRICORNIO");
            }
            break;
        case 2:
                if (dia > 19) {
                    printf("PISCIS");
                } else {
                    printf("ACUARIO");
                }
                break;
        case 3:
                if (dia > 20) {
                    printf("ARIES");
                } else {
                    printf("PISCIS");
                }
                break;
        case 4:
                if (dia > 20) {
                    printf("TAURO");
                } else {
                    printf("ARIES");
                }
                break;
        case 5:
                if (dia > 21) {
                    printf("GEMINIS");
                } else {
                    printf("TAURO");
                }
                break;
        case 6:
                if (dia > 20) {
                    printf("CANCER");
                } else {
                    printf("GEMINIS");
                }
                break;
        case 7:
                if (dia > 22) {
                    printf("LEO");
                } else {
                    printf("CANCER");
                }
                break;
        case 8:
                if (dia > 21) {
                    printf("VIRGO");
                } else {
                    printf("LEO");
                }
                break;
        case 9:
                if (dia > 22) {
                    printf("LIBRA");
                } else {
                    printf("VIRGO");
                }
                break;
        case 10:
                if (dia > 22) {
                    printf("ESCORPION");
                } else {
                    printf("LIBRA");
                }
                break;
        case 11:
                if (dia > 21) {
                    printf("SAGITARIO");
                } else {
                    printf("ESCORPION");
                }
                break;
        case 12:
                if (dia > 21) {
                    printf("CAPRICORNIO");
                } else {
                    printf("SAGITARIO");
                }
        break;

    }




    return 0;

}


