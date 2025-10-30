#include <stdio.h>
void suma(int, int, int *);
int main()
{
  int a=10, b=30, c=0;
  suma(a, b, &c);
  printf("la suma es %d\n", c);
}
  void suma(int x, int y, int *z){
  *z=x+y;
}
