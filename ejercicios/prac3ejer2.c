#include <stdio.h>
int main()
{
  int n;
  int a[10];
  /* x en apuntador a un tipo de dato entero*/
  int *x;
  /* Se asigna x a elemento cero del arreglo a */
  x = a;
  /* Se asignan valores al arreglo*/
  for(n = 0; n < 10; n++){
    *(a+n) = n*2;
    
  }
  /* Imprime todos los elementos del arreglo */
  for(n = 0; n < 10; n++){
    printf("Elemento %d contiene %d\n",n,*x);
    x++;
  }
}
