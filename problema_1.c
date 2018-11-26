#include <stdio.h>

main(){

  int a,b,c,d,e,ordenamiento;

  printf("dame 5 numeros: ");
  scanf("%i %i %i %i %i",&a,&b,&c,&d,&e);

  if (a>b && a>c && a>d && a>e) {
    //la variable 'a' se queda con ese valor ya que es el mayor
  }else{
    if (a<b) {//con esto cambio los valores entre 'a' y 'b' para que 'a' sea el mayor
      ordenamiento=a;
      a=b;
      b=ordenamiento;
    }
    if (a<c) {//con esto cambio los valores entre 'a' y 'c' para que 'a' sea el mayor
      ordenamiento=a;
      a=c;
      c=ordenamiento;
    }
    if (a<d) {//con esto cambio los valores entre 'a' y 'd' para que 'a' sea el mayor
      ordenamiento=a;
      a=d;
      d=ordenamiento;
    }
    if (a<e) {//con esto cambio los valores entre 'a' y 'e' para que 'a' sea el mayor
      ordenamiento=a;
      a=e;
      e=ordenamiento;
    }
  }

  if (b>c && b>d && b>e) {
    //la variable 'b' es la mayor entre ellas
  }else{
    if (b<c) {//cambia los valores de 'b' y 'c' para que 'b' sea el mayor
      ordenamiento=b;
      b=c;
      c=ordenamiento;
    }
    if (b<d) {//cambia los valores de 'b' y 'd' para que 'b' sea el mayor
      ordenamiento=b;
      b=d;
      d=ordenamiento;
    }
    if (b<e) {//cambia los valores de 'b' y 'e' para que 'b' sea el mayor
      ordenamiento=b;
      b=e;
      e=ordenamiento;
    }
    if (b<e) {//cambia los valores de 'b' y 'e' para que 'b' sea el mayor
      ordenamiento=b;
      b=e;
      c=ordenamiento;
    }
  }

  if (c>d && c>e) {
    //la variable 'c' es la mayor y no se le hace ni un cambio
  }else{
    if (c<d) {//cambia los valores de 'c' y 'd' para que 'c' sea el mayor
      ordenamiento=c;
      c=d;
      d=ordenamiento;
    }
    if (c<e) {//cambia los valores de 'c' y 'e' para que 'c' sea el mayor
      ordenamiento=c;
      c=e;
      e=ordenamiento;
    }
  }

  if (d>e) {
    //la variable 'd' es la mayor y no se le hace ni un cambio
  }else{
    if (d<e) {//cambia los valores de 'd' y 'e' para que 'd' sea el mayor
      ordenamiento=d;
      d=e;
      e=ordenamiento;
    }
  }

  printf("el numero mayor es el: %i\n",a);
  //printf("el numero mayor es el: %i\n",b);
  printf("el numero intermedio es el: %i\n",c);
  //printf("el numero mayor es el: %i\n",d);
  printf("el numero menor es el: %i\n",e);

  return 0;
}
