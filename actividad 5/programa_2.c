#include <stdio.h>

main(){

    int menu,submenu,sub_submenu,repetir=1;



    while(repetir==1){
    printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
    printf("1.- COMIDAS\n2.- BEBIDAS\n3.- POSTRES\n4.- SALIR DEL MENU\n");
    printf("Que desea consimur: ");
    scanf("%i",&menu);

    /******************************************************************/
    system("cls");
    printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
    /*****************************************************************/
    switch(menu){

        case 1: printf("\n\n\nUSTED A ESCIJIDO COMIDAS\n");
                printf("1.- Hamburguesa\n2.- Pizza\n3.- Hotdog\n4.- REGRESAR AL MENU");
                printf("\nQue comida desea que le traigamos: ");
                scanf("%i",&submenu);
                /**********************************************************/
                system("cls");
                printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                /*********************************************************/
                switch(submenu){

                    case 1: printf("que hamburguesa desea\n");
                            printf("1.- Doble carne\n2.- Doble queso\n3.- Sencilla\n4.- REGRESAR AL MENU\n");
                            printf("Que opcion desea aplicar: ");
                            scanf("%i",&sub_submenu);

                            /**********************************************************/
                            system("cls");
                            printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                            /*********************************************************/
                            switch(sub_submenu){
                                case 1: printf("USTED A ESCOJIDO UNA HAMBURGUESA CON DOBLE CARNE\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 2: printf("USTED A ESCOJIDO UNA HAMBURGUESA CON DOBLE QUESO\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 3: printf("USTED A ESCOJIDO UNA HAMBURGUESA SENCILLA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 4: system("cls"); break;
                            }
                    break;
                    case 2: printf("Que pizza quiere\n");
                            printf("1.- Peperoni\n2.- Hawuallana\n3.- Especial\n4.- REGRESAR AL MENU");
                            printf("Que opcion desea aplicar: ");
                            scanf("%i",&sub_submenu);

                            /**********************************************************/
                            system("cls");
                            printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                            /*********************************************************/
                            switch(sub_submenu){
                                case 1: printf("USTED A ESOJIDO UNA PIZZA DE PEPERONI\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 2: printf("USTED A ESCOJIDO UNA PIZZA HAWUALLANA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 3: printf("USTED A ESCOJIDO UNA PIZZA ESPECIAL *^*\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 4: system("cls"); break;
                            }
                    break;
                    case 3: printf("Que hotdog quiere\n");
                            printf("1.- Normal\n2.- Doble salchicha\n3.- Especial\n4.- REGRESAR AL MENU");
                            scanf("%i",&sub_submenu);

                            /**********************************************************/
                            system("cls");
                            printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                            /*********************************************************/
                            switch(sub_submenu){
                                case 1: printf("USTED A ESCOJIDO UN HOTDOG NORMAL\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 2: printf("USTED A ESCOJIDO UN HOTDOG CON DOBLE SALCHICHA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 3: printf("USTED A ESCOJIDO UN HOTDOG ESPECIAL\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 4: system("cls"); break;
                            }
                    case 4: system("cls"); break;
                }

        break;

        case 2: printf("\n\n\nUSTED A ESCIJIDO BEBIDA\n");
                printf("1.- Te Helado\n2.- Jugo\n3.- Refresco\n4.- REGRESAR AL MENU");
                printf("\nQue bebida desea que le traigamos: ");
                scanf("%i",&submenu);
                /**********************************************************/
                system("cls");
                printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                /*********************************************************/
                switch(submenu){

                    case 1: printf("De que quieres tu te helado\n");
                            printf("1.- limon\n2.- menta\n3.- herva buena\n4.- REGRESAR AL MENU\n");
                            printf("Que opcion desea aplicar: ");
                            scanf("%i",&sub_submenu);

                            /**********************************************************/
                            system("cls");
                            printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                            /*********************************************************/
                            switch(sub_submenu){
                                case 1: printf("USTED A ESCOJIDO UN TE DE LIMON\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 2: printf("USTED A ESCOJIDO UN TE DE MENTA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 3: printf("USTED A ESCOJIDO UN TE HIERVA BUENA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 4: system("cls"); break;
                            }
                    break;
                    case 2: printf("De que quiere su jugo\n");
                            printf("1.- Naranja\n2.- Toronja\n3.- Verde\n4.- REGRESAR AL MENU");
                            printf("Que opcion desea aplicar: ");
                            scanf("%i",&sub_submenu);

                            /**********************************************************/
                            system("cls");
                            printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                            /*********************************************************/
                            switch(sub_submenu){
                                case 1: printf("USTED A ESOJIDO UN JUGO DE NARANJA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 2: printf("USTED A ESCOJIDO UN JUGO DE TORONJA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 3: printf("USTED A ESCOJIDO UN JUGO VERDE\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 4: system("cls"); break;
                            }
                    break;
                    case 3: printf("Que refresco quiere\n");
                            printf("1.- Coca-cola\n2.- pepsi\n3.- Squert\n4.- REGRESAR AL MENU");
                            scanf("%i",&sub_submenu);

                            /**********************************************************/
                            system("cls");
                            printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                            /*********************************************************/
                            switch(sub_submenu){
                                case 1: printf("USTED A ESCOJIDO UNA COCA-COLA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 2: printf("USTED A ESCOJIDO UNA PEPSI\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 3: printf("USTED A ESCOJIDO UN SQUERT\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 4: system("cls"); break;
                            }
                    case 4: system("cls"); break;
                }

        break;

        case 3: printf("\n\n\nUSTED A ESCIJIDO POSTRES\n");
                printf("1.- Pastel\n2.- Donas\n3.- ManteConchas\n4.- REGRESAR AL MENU");
                printf("\nQue postre desea que le traigamos: ");
                scanf("%i",&submenu);
                /**********************************************************/
                system("cls");
                printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                /*********************************************************/
                switch(submenu){

                    case 1: printf("De que quieres tu pastel\n");
                            printf("1.- 3 Leches\n2.- Chocolate\n3.- Vainilla\n4.- REGRESAR AL MENU\n");
                            printf("Que opcion desea aplicar: ");
                            scanf("%i",&sub_submenu);

                            /**********************************************************/
                            system("cls");
                            printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                            /*********************************************************/
                            switch(sub_submenu){
                                case 1: printf("USTED A ESCOJIDO UN PASTEL DE 3 LECHES\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 2: printf("USTED A ESCOJIDO UN PASTEL DE CHOCOLATE\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 3: printf("USTED A ESCOJIDO UN PASTEL DE VAINILLA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 4: system("cls"); break;
                            }
                    break;
                    case 2: printf("De que quiere su dona\n");
                            printf("1.- azucar\n2.- chocolate\n3.- rellena\n4.- REGRESAR AL MENU");
                            printf("Que opcion desea aplicar: ");
                            scanf("%i",&sub_submenu);

                            /**********************************************************/
                            system("cls");
                            printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                            /*********************************************************/
                            switch(sub_submenu){
                                case 1: printf("USTED A ESOJIDO UNA DONA DE AZUCAR\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 2: printf("USTED A ESCOJIDO UNA DE CHOCOLATE\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 3: printf("USTED A ESCOJIDO UNA DONA RELLENA\n\n\n");
                                        system("pause");
                                        system("cls");
                                break;
                                case 4: system("cls"); break;
                            }
                    break;
                    case 3: printf("\t\t\t\tUSTED A ESCOJIDO UNA MANTECONCHA \\*^*/\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            /**********************************************************/
                            system("pause");
                            system("cls");
                            printf("\t\t\t\t\tBIENVENIDO A COMIDA 'LA CHIDA'\n\n\n");
                            /*********************************************************/

                            printf("\t\t\t\tYA TIENES UNA MANTECONCHA, NO NECESITAS NADA MAS\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            system("pause");


                    case 4: system("cls"); break;
                }

        break;

        case 4: repetir=0;



    }

    }



    return 0;

}
