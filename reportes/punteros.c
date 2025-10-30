#include <stdio.h>
#include <string.h>
int main()
{
  int lista[5] = {10, 20, 30, 40, 50};
  int *p;
  char cad[15];
  char *q;
  
  p = &lista[3];
  p = lista + 3;
  
  printf("%d ", lista[2]);
  printf("%d ", *(lista+2));
  strcpy(cad, "Programando");
  
  for (q = cad; *q != '\0'; q+=13)
    printf("%c",*q);
    
  getchar();
  return 0;
}
