#include <stdio.h>
int main()
{
  int a;
  int *x;
  /* x es una puntador a una variable de tipo entera */
  a = 100;
  x = &a;
  printf("\nVariable 'a' tiene el valor %d en la direcciónde memoria %p \n", a, x);
  printf("\nEL valor al que apunta x es %d \n", *x);
  return 0;
}
