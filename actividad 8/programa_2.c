#include <stdio.h>

main(){

    int num1,num2,counter=1;
    char repetir='s';

while(repetir=='s' || repetir=='S'){
    printf("introdusca un numero: ");
    scanf("%i",&num1);
    num2=num1;

    if(num1%2==0){
        if(num1==0){
            printf("su factorial es 1");
        }
        if(num1<0){
            printf("los numeros negativos no tienen factorial");
            printf("%i",num1);
        }
        if(num1>0){
            while(counter<num1){
                num2=num2*counter;
                counter++;
            }
            printf("el factorial de %i es %i",num1,num2);
        }
    }
    else{
        printf("los multiplos de %i son: \n",num1);
        while(counter*num1<=1000 && counter*num1>=-1000){
            printf("=%i\n",counter*num1);
            counter++;
        }
    }
    printf("desea introducir otro numero: <<s>> <<n>>");
    scanf("%s",&repetir);

}
    return 0;
}
