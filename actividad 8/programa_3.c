#include <stdio.h>

main(){

    int num1,num2,num3,bool1,bool2,suma=0;

    printf("dame el primer numero: ");
    scanf("%i",&num1);
    if(num1>=0){
        bool1=1;
    }else bool1=0;

    printf("dame el segundo numero: ");
    scanf("%i",&num2);
    if(num2>=0){
        bool2=1;
    }else bool2=0;
    num3=num2;

    if(bool1==bool2){
        if(bool1==1){
            while(num3>0){
                suma=suma+num1;
                num3--;
            }
        }else{
            while(num3<0){
                suma=suma-num1;
                num3++;
            }
        }
    }

    if(bool1!=bool2){
        if(bool1==1){
            while(num3<0){
                suma=suma+num1;
                num3++;
            }
        }else{
            while(num3>0){
                suma=suma+num1;
                num3--;
            }
        }
    }
printf("la multiplicacion de los numeros %i*%i=%i",num1,num2,suma);






    return 0;
}
