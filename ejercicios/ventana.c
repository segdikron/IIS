#include <stdio.h>

void ventana(int an, int alt, char simb);
void imprimeSimbolo(int n, char s);

int main(){
  int ancho, alto;
  char simbolo;
  
  printf("Ingresa el ancho de la ventana: ");
  scanf("%d", &ancho);
  
  printf("Ingresa el alto de la ventana: ");
  scanf("%d", &alto);
  getchar();
  printf("Ingresa el simbolo: ");
  scanf("%c", &simbolo);
  
  ventana(ancho, alto, simbolo);
  
  return 0;
}

void imprimeSimbolo(int n, char s)
{
  int i=0;
  while(i<n)
  {
    printf("%c", s);
    i++;
  }
  printf("\n");
}

void ventana(int an, int alt, char simb)
{
  int i=0;
  while(i<alt)
  {
    imprimeSimbolo(an, simb);
    i++;
  }
  printf("\n");
}
