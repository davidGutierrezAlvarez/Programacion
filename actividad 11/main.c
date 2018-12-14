#include <stdio.h>
#include <string.h>

int main() {
    int b = 0;
    char paises[10][25] = {"Argentina", "Australia", "Francia", "Italia", "Alemania", "Estados Unidos", "Nicaragua", "Mexico", "Canada", "Inglaterra"};
    char capitales[10][25] = {"Buenos Aires", "Sydney", "Paris", "Roma", "Berlin", "Washington", "Managua", "Ciudad de Mexico", "Ottawa", "Londres"};
    char busqueda[25];
    while (1) {
        printf("Ingrese el pais que desea buscar en la base de datos\n");
        fflush(stdin);
        gets(busqueda);
        b = 0; //Reset de bandera
        for (int i = 0; i < 10; i++) {
            if (strcmp(paises[i], busqueda) == 0) {
                printf("%s y su capital es %s\n", paises[i], capitales[i]);
                b = 1;
                break;
            }
        }
        if (b == 0) { //Si no se encuentran coincidencias
            printf("El pais no existe en la base de datos\n");
        }
        printf("Presione 1 para seguir buscando o cualquier otra tecla para salir\n");
        fflush(stdin);
        scanf("%d", &b); //Se recicla la bandera
        if (b != 1) {
            break;
        }
    }
    return 0;
}
