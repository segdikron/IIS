#include <stdio.h>
#include <stdlib.h>

void leerNum(int n, int *arr);
void imprimirNum(int n, int *arr);

int main ()
{
  int n;
  int * pNum;
  printf ("Cantidad de números por introducir: ");
  scanf ("%d",&n);
  
  pNum = (int*) malloc (sizeof(int)*n);
  if (pNum==NULL)
    exit (1);
    
  // Lectura de números
  leerNum(n, pNum);
  
  // Imprimir números
  imprimirNum(n,pNum);
  
  free (pNum);

  return 0;
}

void leerNum(int n, int *arr)
{
  int i;
  for (i=0;i<n;i++)
  {
    printf ("Número %d: ",i);
    scanf ("%d",&arr[i]);
  }
}

void imprimirNum(int n, int *arr)
{
  int i;
  printf ("\nNúmeros capturados: ");
  for (i=0;i<n;i++){
    printf ("%d ",arr[i]);
  }
  printf ("\n\n");
}
