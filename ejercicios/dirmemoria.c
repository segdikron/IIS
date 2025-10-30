#include<stdio.h>

int main()
{
  double x[5] = {1.1,2.1,3.1,4.1,5.1};
  double *p=&x[1], *q=&x[4];
  
  int n;
  
  n=q-p; // dirferencia de apuntador aa double, 8 bytes
  
  printf("%p\n", q); // %p imprime la dirección de memoria del apuntador
  printf("%p\n", p);
  printf("%d\n", n);
  printf("dirección de memoria de n: %p\n", &n);
}
