#include <stdio.h>

main(){

    int x=6,y=9,z=1;

    y=x+z;

    switch((x+y+z)%3){
        case 2: if(x%2==0){
                    printf("%i",x);
                }else{
                    printf("%i",y);
                }break;
        case 1: switch(y%2){
            case 0: printf("%i",z);
            break;
            case 1: printf("%i",x);
            break;
            }
            if(x>y){
                printf("%i",x+y);
                printf("%i",z*5);
            }break;

            default: {
                printf("%i",x+y-z);
            }
            if(x<10 && z>1){
                printf("%i",z*5);
            }
    }



    return 0;
}
