#include <stdio.h>

main(){

    int x=0,y;

    while(x<=3){
        for(y=1;y<4;y++){
            if(x>y){
                printf("\t%i",x+y);
                x-=1;
            }
        }
        printf("%i",x);
    }


    return 0;
}
