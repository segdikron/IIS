#include <stdio.h>

int buscar(int arr[], int tamanio, int buscado);

int main()
{ 
  int arreglo[]={10,4,5,13,15,9,23,5,7,4,9,13,10,5,8];
  int tam=sizeof(arreglo)/sizeof(arreglo[0]);
  int n, repeticiones;
 
  printf("Ingresar el número a buscar: ");
  scanf("%d",&n);
  
  repeticiones= buscar(arreglo,tam,n);
  if(repeticiones==0)
  {
    //no esta
  }
  else{
    //se repitio n veces
  }

}

int buscar(int arr[], int tamanio, int buscado)
{
  int i;
  int cont=0;
  for(i=0; i<tamanio; i++)
  {
    if(arr[i]==buscado)
    { 
      cont++;
    }
  }
  return cont;
}
