#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int so;
  printf("Nhap so trong khoang tu 1 den 10: ");
  scanf("%d",&so);
  srand(time(NULL));
  int r = 1 + rand()%10;
  printf("So may tinh la: %d\n", r);
  if (r > so)
    printf("Ban da nhap so nho hon %d don vi\n",r-so);
  if (r < so)
    printf("Ban da nhap so lon hon %d don vi\n",so-r);
  if (r == so)
    printf("Chuc mung!\n");
  return 0;
}
