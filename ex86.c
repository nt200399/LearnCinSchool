#include <stdio.h>

int main()
{
  int a;
  do
    {
      printf("Nhap gia tri nguyen: ");
      scanf("%d",&a);
      printf("Gia tri moi la: %d\n", a-1);
      if ( (a-1) == 0 )
	printf("Gia tri moi bang 0! Ket thuc!\n");
    } while ((a-1) > 0);
  return 0;
}
