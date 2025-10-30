#include <stdio.h>

void buscar(int arr[], int tamanio, int buscado);

int main()
{ 
  int arreglo[]={10,4,1,13,15,9,23,5,7,54,29,19,12};
  int tam=sizeof(arreglo)/sizeof(arreglo[0]);
  int n;
 
  printf("Ingresar número número a buscar: ");
  scanf("%d",&n);
  
  buscar(arreglo, tam, n);
}

void buscar(int arr[], int tamanio, int buscado)
{
  int i;
  for(i=0; i<tamanio; i++)
  {
    if(arr[i]==buscado)
    { 
      printf("El número buscado si está\n\n");
      break;
    }
  }
  if(i==tamanio)
  {
    printf("El número buscado no está");
  }
}
