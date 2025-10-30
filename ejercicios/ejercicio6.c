#include <stdio.h>
#include <stdlib.h>

float* capturar(int *n);
void leer(float *arr, int n);
void  imprimir(float *calificaciones, int n);
void  bonus_extra(float *calificaciones, int n);

int main()
{
  float *calificaciones;
  int n;  
  // Reservar memoria dinámica
  calificaciones =capturar(&n);
  if(calificaciones==NULL)
    return -1;
  
  
  leer(calificaciones, n);
  imprimir(calificaciones, n);
  bonus_extra(calificaciones, n);
  
  imprimir(calificaciones, n);
  
  // Liberar memoria
  free(calificaciones);
  return 0;
}

float* capturar(int *n)
{
  printf("¿Cuántas calificaciones deseas ingresar? ");
  scanf("%d", n);
  
  // Reservar memoria dinámica
    
  float *calificaciones =(float*) calloc(*n, sizeof(float));
  if(calificaciones==NULL)
  {
    printf ("Error no se pudo reservar la memoria\n");
    return NULL;
  }
  return calificaciones;
}

void leer(float *arr, int n) {
  int i;

  printf("\nIngresa las calificaciones\n");
  for(i=0;i<n;i++)
  {
    printf("Calificación %d: ", i+1);
    scanf("%f", arr+i );
  }
}

void  imprimir(float *calificaciones, int n) {
  int i;
  printf("\nCalificaciones ingresadas\n");
  for(i=0;i<n;i++)
  {
    printf("Calificación %d: %.2f\n", i+1, *(calificaciones+i));
  }
}

void  bonus_extra(float *calificaciones, int n)

{
  int i;
  float bonus;
  printf("\nBonus Extra\n");
  for(i=0;i<n;i++)
  {
    printf("Ingresa el bonus de la calificación %i: ", i+1);
    scanf("%f",&bonus);
    *(calificaciones+i)+=bonus;
  }
}
