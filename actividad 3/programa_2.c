//NP.Moises Yaroslav Fedkevich Perez Peres
//NP.Tipo de triangulos
//Fecha.24/08/2018

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define p printf
#define s scanf

main()
{
    int a,b;
    char ope;
    printf("dame el primer numero: ");
    scanf("%i",&a);
    printf("dame el segundo numero: ");
    scanf("%i",&b);
    /*p("Teclea 2 numeros enteros : ");
    s("%d%d",&x,&y);*/

    p("Que operacion desea realizar : \n");

    p("+ = Suma\n- = Resta\n* = Multiplicacion\n/ = Division\n%c = potencia \n%c = Residuo\n%c = Raiz cuadrada\n",94,37,35);
    fflush(stdin);
    s("%c",&ope);

    switch(ope)
        {
            case '+': printf("Suma de %i + %i =%i",a,b,a+b); break;
            case '-': printf("Resta de %i - %i =%i",a,b,a-b); break;
            case '*': printf("Multiplicacion de %i * %i =%i",a,b,a*b); break;
            case '/': printf("Division de %i / %i =%i",a,b,a/b); break;
            case '%': printf("Residuo de %i %% %i =%i",a,b,a%b); break;
            case '#': printf("Raiz cuadrada de %i y %i =%f, %f",a,b,sqrt(a),sqrt(b)); break;
            case '^': printf("Potencia de %i a la %i = %f",a,b,pow(a,b)); break;
            default : printf("No existe esa operacion karnal >:v ");

        }

    getch();
}




