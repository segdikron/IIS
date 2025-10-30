#include <stdio.h>
#include <stdlib.h>

int* captura(int *n);
void imprimirarr(int n, int *arr);
double promedio(int *arreglo, int total);
//imprimir promedio;

int main()
{
  int *arreglo;
  int total;
  double prom;
  
  arreglo = captura(&total);
  
  imprimirarr(total, arreglo);
  
  prom = promedio(arreglo, total);
  
  printf("El promedio es: %d", prom);
  
  free(arreglo);
}

int *captura(int *n)
{
  int i, *arr;
  printf("Ingresa la cantidad de números");
  scanf("%d",n);
  
  arr = (int*)malloc(sizeof(int)*(*n));
  if(arr==NULL){
    printf("Error al reservar memoria");
    exit(1);
  }
  
  for(i=0;i<(*n);i++)
  {
    printf("%d Ingresa un número", i);
    scanf("%d", arr+i );
  }
  
  return arr;
  
}

void imprimirarr(int n, int *arr)
{
  int i;
  
  printf("Imprimir arreglo");
  for(i=0;i<n;i++)
  { 
    printf("%d, ", *(arr+i) );
  }
}

double promedio(int *arreglo, int total)
{
  int i;
  double prom;
  for(i=0;i<total;i++)
  { 
    prom += *(arreglo+i);
  }
  
  return prom/total;
}
