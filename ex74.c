#include <stdio.h>
int main()
{
  printf("Chuong trinh liet ke cac so lon hon a tu 1 toi 100\n");
  int a;
  do
    {
      printf("Nhap gia tri a: ");
      scanf("%d",&a);
      if (a < 1 || a > 100)
	printf("Vui long nhap lai gia tri trong khoang tu 1 den 100\n");
    } while (a < 1 || a > 100);
  for (int i = 1; i <= 100; i++)
    {
      if (i <= a) continue;
      else
	printf("%d\n",i);
    }
  return 0;
}
