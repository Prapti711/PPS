#include <stdio.h>
int main()

{
  int imac = 175000;
  int macbookpro = 400000;
  int iwatch = 50000;
  int iphone = 200000;
  int a,b,c,d;
  printf("/nEnter How many imac  do you want ");
  scanf("%d",&a);
  printf("/nEnter How many macbook pro   do you want ");
  scanf("%d",&b);
  printf("/nEnter How many iwatch  do you want ");
  scanf("%d",&c);
  printf("/nEnter How many iphone  do you want ");
  scanf("%d",&d);
  int p;
  p = (imac*a) + (macbookpro*b) + (iwatch*c) + (iphone*d);
  printf("Total is %d\n",p);
  switch(p)

  {
    case 5000:
    printf("value is 5000/n");
    break;
    case 10000:
    printf("value is 10000/n");
    break;
    case 15000:
    printf("value is 15000/n");
    break;
  }

  if(p>=200000)
  {
    printf("The discount bill is %d\n",p - ((p*10)/100));
  }
  return 0;
}

  