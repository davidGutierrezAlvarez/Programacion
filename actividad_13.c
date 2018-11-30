#include <stdio.h>

#define print printf
#define print_ scanf

main() {
  int i;
  print("hola mundo");
  print_("%i", &i);

  print("%i\n",i*i+i );

  return 0;
}
