#include <stdio.h>


main(){

    int a=2,b=5,c=4;

    if(a+b>c-b){
        if(a+b==c){
            printf("%i",a*4);
            printf("%i%i%i",a,b,c);
        }else{
            if(a>b){
                c=c*b;
                printf("%i",c);
            }
            if(a<b){
                b=a*c;
                printf("%i",b*2);
            }
        }
    }



    return 0;
}
