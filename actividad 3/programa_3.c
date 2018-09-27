#include <stdio.h>9

int main() {
	int valor;
    printf("Introduce un valor para saber el espacio ocupado: ");
    scanf("%i",&valor);
    printf("\nEspacio en sistema:\t%i", &valor);
    valor = sizeof(valor);
    printf("\nEspacio ocupado es: %i bit",valor);
	return 0;

}
