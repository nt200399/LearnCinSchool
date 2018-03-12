#include <stdio.h>
int main()
{
  int a;
  do
    {
      printf("Nhap gia tri duong: ");
      scanf("%d",&a);
      if (a <= 0)
	printf("Nhap lai gia tri duong!\n");
    } while (a <= 0);
  for(int i = 1; i <= a; i++)
    {
      printf("%d\t%d\n",i,i*i);
    }
  return 0;
}
