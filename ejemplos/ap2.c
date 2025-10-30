#include <stdio.h>
int main()
{
  int num[5]={10,20,30,40,50,};
  int *ap_num;
  ap_num = num;
  printf("%d\n",num[0]);
  printf("%d\n",ap_num[0]);
  printf("%d\n",*num);
  printf("%d\n",*ap_num);
  printf("%d\n",num[3]);
  printf("%d\n\n",ap_num[3]);
  
  printf("%d\n",++*ap_num);
  printf("%d\n",*++ap_num);
  
  printf("%d\n",*ap_num++);
  printf("%d\n",*ap_num);
}

