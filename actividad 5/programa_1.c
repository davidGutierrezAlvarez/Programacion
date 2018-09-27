#include <stdio.h>
#include <math.h>
/*
*programa de un menu
*/

int main(){

    int menu;
    char repetir='s';

    while(repetir=='s' || repetir=='S'){
        system("cls");

        printf("1.- Introducir tus datos\n2.- Calculadora\n3.- Espacio en memoria de un numero\n");
        printf("4.- Convertir caracter a valor ASCII\n5.- Sumar los dijitos de un numero\n");
        printf("6.- Equipo de Basquetbol\n7.- Conversor de ASCII\n8.- Signo sodiacal\n9.- Salario de un profesor\n");
        printf("Selecciona una de las opciones del menu: ");
        scanf("%i",&menu);

        switch(menu){

            case 1: printf("programa 1\n");
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
                    break;
/******************************************************************************/
            case 2: printf("programa 2\n");
                    int a,b;
                    char ope;
                    printf("dame el primer numero: ");
                    scanf("%i",&a);
                    printf("dame el segundo numero: ");
                    scanf("%i",&b);

                    printf("Que operacion desea realizar : \n");

                    printf("+ = Suma\n- = Resta\n* = Multiplicacion\n/ = Division\n%c = potencia \n%c = Residuo\n%c = Raiz cuadrada\n",94,37,35);
                    fflush(stdin);
                    scanf("%c",&ope);

                    switch(ope){
                        case '+': printf("Suma de %i + %i =%i",a,b,a+b); break;
                        case '-': printf("Resta de %i - %i =%i",a,b,a-b); break;
                        case '*': printf("Multiplicacion de %i * %i =%i",a,b,a*b); break;
                        case '/': printf("Division de %i / %i =%i",a,b,a/b); break;
                        case '%': printf("Residuo de %i %% %i =%i",a,b,a%b); break;
                        case '#': printf("Raiz cuadrada de %i y %i =%f, %f",a,b,sqrt(a),sqrt(b)); break;
                        case '^': printf("Potencia de %i a la %i = %f",a,b,pow(a,b)); break;
                        default : printf("No existe esa operacion karnal >:v ");

                    }
                    break;
/******************************************************************************/
            case 3: printf("programa 3\n");
                    int valor;
                    printf("Introduce un valor para saber el espacio ocupado: ");
                    scanf("%i",&valor);
                    printf("\nEspacio en sistema:\t%i", &valor);
                    valor = sizeof(valor);
                    printf("\nEspacio ocupado es: %i bit",valor);
                    break;
/******************************************************************************/
            case 4: printf("programa 4\n");
                    char letra;
                    int num_caracter;

                    printf("escribe una letra: ");
                    scanf("%s",&letra);
                    num_caracter=letra;
                    printf("su valor numerico en Ascii es --> %i\n",num_caracter);
                    printf("su numero en hexadecimal es   --> %X\n",num_caracter);
                    printf("su numero en octal es         --> %o\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",num_caracter);
                    break;
/******************************************************************************/
            case 5: printf("programa 5\n");
                    int numero,suma=0,resto;

                    printf("introduce un numero de 4 digitos: ");
                    scanf("%i",&numero);



                    while(numero<0 || numero>9999){
                        printf("por favor introduce un numero de 4 digitos\n");
                        printf("introduce un numero de 4 digitos: ");
                        scanf("%i",&numero);
                    }
                    //printf("la suma de ");
                    while(numero!=0){
                        resto=(numero%10);
                        suma=(suma+resto);
                        numero=(numero/10);
                        //printf("%i+",resto);
                    }
                    //return (suma);
                    printf("la suma de los digitos del numero%i es = %i\n\n\n\n\n\n",numero,suma);
                    break;
/******************************************************************************/
            case 6: printf("programa 6\n");
                    int edad2;
                    float promedio,estatura2;

                    printf("\t\t\t\t\tQUIERES ENTRAR AL EQUIPO DE BASTQUETBOL\n");
                    printf("cual es tu p´romedio: ");
                    scanf("%f",&promedio);
                    printf("cuanto mides, en mestros: ");
                    scanf("%f",&estatura2);
                    printf("y por ultimo cual es tu edad: ");
                    scanf("%i",&edad2);

                    if(edad2>=18 && edad2<=24 && promedio>=80 && estatura2 >=1.75){
                        printf("\t\t\t\t\t\t\tBIENVENIDO\n");
                        printf("\t\t\t\t\t\tYA ERES PARTE DEL EQUIPO\n\n\n\n\n\n");
                    }
                    else
                        printf("\t\t\t\t\t   NEL :v NO CUMPLES LOS REQUISITOS\n\n\n\n\n\n"); break;
/******************************************************************************/
            case 7: printf("programa 7\n");
                    int numero2,valor2;
                    char caracter,un='@';

                    printf("ES --> %d",un);
                    printf("\t\t\t\t\tESTO ES UN CONVERSOR DE ASCII\n");
                    printf("____________________________________________________________________|\n");
                    printf("<<convertir de ASCII a CARACTER>>  |  <<CONVERTIR CARACTER A ASCII>>|");
                    printf("\n\t   <<1>>\t\t   |\t\t  <<2>>\t            |\n");
                    printf("___________________________________|________________________________|\n");

                    printf("QUE DESEA HACER: ");
                    scanf("%i",&valor2);
                    while(valor2!=1 && valor2!=2){
                        printf("\npor favor introduce un valor posible\n");
                        printf("QUE DESEA HACER: ");
                        scanf("%i",&valor2);
                    }

                    if (valor2==1){
                        printf("dame el numero del codigo ASCII: ");
                        scanf("%i",&numero2);
                        while(numero2<0 || numero2>255){
                            printf("\npor favor introduce un valor entr 0 y 255\n");
                            printf("dame el numero del codigo ASCII: ");
                            scanf("%i",&numero2);
                        }
                    printf("el caracter es --> %c",numero2);
                    }
                    if(valor2==2){
                        printf("dame el caracter que quieres convertir a ASCII: ");
                        scanf("%s",&caracter);
                        printf("el numero ASCII es --> %d",caracter);
                        }
                    break;
/******************************************************************************/
            case 8: printf("programa 8\n");
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

                    } break;
/******************************************************************************/
            case 9: printf("programa 9\n");
                    char cat;
                	int sueldo, horas;
                	float bono, bono2, bonototal, impuestos, concepto, infonavit;
                	printf("Que categoria de profesor eres?:\n\t'A'\t\t'B'\n\nCategoria:");
                	scanf("%s",&cat);
                	printf("cuantas horas as trabajado: ");
                	scanf("%i",&horas);
                	system("cls");

                	if(cat=='A' || cat=='a'){
                		sueldo=50*horas;
                		bono=10*sueldo/100;
                		bono2=2*sueldo/100;
                		bonototal=60*sueldo/100;
                		impuestos=3*sueldo/100;
                		concepto=5*sueldo/100;
                		infonavit=5*sueldo/100;
                		printf("Tu salario neto es: %i\n\n",sueldo);
                		printf("Tu bono que se otorga a los 5 anios es: %f, cada anio extra se \nincrementara: %f, logrando despues de 45 años un total de: %f\n\n", bono, bono2, bonototal);
                		printf("De tu salario se van a descontar: %f, de los impuestos a tu sueldo bruto.\n\n",impuestos);
                		printf("Por conceptos de vivienda, despensa, etc. se te descontaran: %f, a tu sueldo bruto.\n\n",concepto);
                		printf("Si cuentas con saldo de INFONAVIT se te descontara: %f.\n\n\n\n\n\n",infonavit);
                	}
                	if(cat=='B' || cat=='b'){
                		sueldo=50*horas;
                		bono=10*sueldo/100;
                		bono2=2*sueldo/100;
                		bonototal=60*sueldo/100;
                		impuestos=3*sueldo/100;
                		concepto=5*sueldo/100;
                		infonavit=5*sueldo/100;
                		printf("Tu salario neto es: %i\n\n",sueldo);
                		printf("Tu bono que se otorga a los 5 años es: %f, cada año extra se \nincrementara: %f, logrando despues de 45 años un total de: %f\n\n", bono, bono2, bonototal);
                		printf("De tu salario se van a descontar: %f, de los impuestos a tu sueldo bruto.\n\n",impuestos);
                		printf("Por conceptos de vivienda, despensa, etc. se te descontaran: %f, a tu sueldo bruto.\n\n",concepto);
                		printf("Si cuentas con saldo de INFONAVIT se te descontara: %f.\n\n\n\n\n\n",infonavit);
                	}
                	if(cat!='A' && cat!='a' && cat!='B' && cat!='b'){
                		printf("La seleccion fue invalida...");
                	} break;
/******************************************************************************/
            default : printf("NO ES UN VALOR POSIBLE\n");
            printf("desea escojer alguna otra opcion: <<s>> <<n>>");
            scanf("%s",&repetir);
        }
        if(menu>0 && menu<10){
        printf("desea escojer alguna otra opcion: <<s>> <<n>>");
        scanf("%s",&repetir);
        }
    }





    return 0;
}
