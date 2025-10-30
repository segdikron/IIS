#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i,n;
  int * pNum;
  printf ("Cantidad de números por introducir: ");
  scanf ("%d",&i);
  
  pNum = (int*) malloc (sizeof(int)*i);
  if (pNum==NULL)
    exit (1);
    
  for (n=0;n<i;n++)
  {
  printf ("Número %d: ",n);
  scanf ("%d",&pNum[n]);
  }

  printf ("Números capturados: ");
  for (n=0;n<i;n++){
    printf ("%d ",pNum[n]);
  }
  free (pNum);

  return 0;
}
