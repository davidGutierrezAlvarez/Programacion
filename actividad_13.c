#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int limit=0, index=0;

void gotoxy (short x, short y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void marco(void)
{
    int x1=0,x2=79,y1=2,y2=22;
    for(int i=0; i<x2; i++)
    {
        gotoxy(i+1,y1); printf("*");
        gotoxy(i+1,y2); printf("*");
    }
    for(int j=0; j<y2; j++)
    {
        gotoxy(x1,y1+j); printf("*");
        gotoxy(x2,y1+j); printf("*");
    }
}

void login()
{
    char USUARIO[]={"user"}; char CONTRAS[]={"password"}; char usuario[20]; char contras[20], contras1[20];
    int a,b,c,op=0;
    while(op!=3)
    {
        flag: b=0;c=0;
        gotoxy(32,4);
        printf("USUARIO: ");
        fflush(stdin);
        gets(usuario);
        gotoxy(32,6);
        printf("CONTRASE%cA: ",165);
        fflush(stdin);
        gets(contras);

        if(strcmp(USUARIO, usuario) == 0)
            {
                b=1;
            }
            else
            {
                gotoxy(32,8);
                printf("USUARIO INCORRECTO.");
                b=0;
                system("pause");
                system("cls");
                marco();
            }
        if(strcmp(CONTRAS, contras) == 0)
            {
                c=1;
            }
            else
            {
                gotoxy(32,8);
                printf("CONTRASE%cA INCORRECTA.",165);
                c=0;
                system("pause");
                system("cls");
                marco();
            }
        if(c==1 && b==1)
            {
                op=3;
            }
        else{
        op++;
        if (op==3)
            {
                system("cls");
                marco();
                gotoxy(32,6);
                printf("SE ACABARON LOS INTENTOS."); exit(0);
            }
            else{goto flag;}
        }
    }
    system("cls");
    marco();
}

struct productos
{
    int id;
    int index[100];
    char des[100];
    double precio;
}p[5];

void captura()
{

	if(limit==4)
	{
		system("cls");
		marco();
		gotoxy(20,4);
		printf("SE HA ALCANZADO EL LIMITE DE REGISTROS.");
	}
	else
	{
	    system("cls");
	    marco();
	    gotoxy(20,4);
	    printf("INGRESE ID DEL PRODUCTO: ");
	    fflush(stdin);
	    scanf("%d",&p[index].id);
	    gotoxy(20,6);
	    printf("INGRESE NOMBRE DEL PRODUCTO: ");
	    fflush(stdin);
	    scanf("%s",&p[index].des);
	    gotoxy(20,8);
	    printf("INGRESE PRECIO DEL PRODUCTO: ");
	    fflush(stdin);
	    scanf("%d",&p[index].precio);
	    index=index+1;
	    system("cls");
	}
}

void buscar()
{
    int i=0, pos=0, ban=0, id;
    system("cls");
	marco();
    gotoxy(20,3);
    printf("INGRESA EL ID DEL PRODUCTO A BUSCAR: ");
    scanf("%d", &id);
    while(i<5)
    {
        if(id==p[i].id && ban==0)
        {
        	system("cls");
        	marco();
        	gotoxy(32,3);
			printf("PRODUCTO ENCONTRADO: ");
		    gotoxy(32,4);
		    printf("ID: %d",p[i].id);
		    gotoxy(32,5);
		    printf("DESCRIPCION: %s",p[i].des);
		    gotoxy(32,6);
		    printf("PRECIO: %d",p[i].precio);
            pos=i;      /posicion/
            ban=1;      /bandera/
        }
        i++;
    }
    if(ban=0)
    {
    	system("cls");
    	marco();
    	gotoxy(20,3);
		printf("NO HAY PRODUCTOS QUE CONCUERDEN CON EL ID.");
	}
	system("pause");
}

void mostrar(int limit)
{
	system("cls");
	marco();
	gotoxy(28,3);
	printf("REGISTROS:");
	for(int i=0; i<limit;i++)
	{
	    gotoxy(28,4);
	    printf("ID: %d",p[index].id);
	    gotoxy(28,5);
	    printf("DESCRIPCION: %s",p[index].des);
	    gotoxy(28,6);
	    printf("PRECIO: %d",p[index].precio);
	}
}

int main()
{
    int id=0, opc=0, pos=0, index=0;
    marco();
	login();
	flag:
	marco();
    gotoxy(32,4);
    printf("MENU:");
    gotoxy(32,6);
    printf("1) Capturar datos.");
    gotoxy(32,8);
    printf("2) Buscar datos.");
    gotoxy(32,10);
    printf("3) Mostrar datos.");
    gotoxy(32,12);
    printf("4) Salir.");
    gotoxy(32,14);
    scanf("%d", &opc);
    switch(opc)
    {
        case 1: captura(); goto flag; break;
        case 2: buscar(); goto flag; break;
        case 3: mostrar(limit); goto flag; break;
        case 4: EXIT_SUCCESS;
    }
    return 0;
}
