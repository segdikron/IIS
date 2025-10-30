#include <stdio.h>

void printTemp(float inicio, float fin, float salto);
float convertCaF(float grados);


int main()
{
  float inicio, fin, salto, aux;
  
  printf("Ingresa el inicio: ");
  scanf("%f", &inicio);
  printf("Ingresa el fin: ");
  scanf("%f", &fin);
  do
  {
    printf("Ingresa el salto(numeros positivos): ");
    scanf("%f", &salto);
  }while(salto <= 0);

  
  /*if(inicio>fin)
  { 
    printf("Inicio es mayor que el fin\nSe INVERTIRA EL ORDEN\n");
    aux=inicio;
    inicio=fin;
    fin = aux;
  }*/
  
  
  printTemp(inicio, fin, salto);
  
  return 0;
}

void printTemp(float inicio, float fin, float salto)
{
  float c,f;
  c = inicio;
  if(inicio<fin)
  {
      while(c<fin)
      {
        f = convertCaF(c);
        printf("%.2f Celcius = %f\n",c, f);
        c+=salto;
      }
  }else
  {
      while(c>fin)
      {
        f = convertCaF(c);
        printf("%.2f Celcius = %f\n",c, f);
        c-=salto;
      }
  }

  c=fin;
  f= convertCaF(c);
  printf("%.2f Celcius = %f\n",c, f);
}

float convertCaF(float grados)
{
  return grados*1.8+32;
}
