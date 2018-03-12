#include <stdio.h>
int main()
{
  int h;
  do
    {
      printf("Nhap chieu cao cua tam giac: ");
      scanf("%d",&h);
      if (h <= 0)
	printf("Vui long nhap lai gia tri duong!");
    } while (h <= 0);
  for (int i = 1; i <= h; i++)
    {
      for (int j = 1; j <= i; j++)
	{
	  printf("*");
	}
      printf("\n");
    }
  return 0;
}
