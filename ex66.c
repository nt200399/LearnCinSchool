#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Nhap vao 3 so: ");
  scanf("%d%d%d",&a,&b,&c);
  if (a < b && b < c)
    printf("So nho nhat la: %d\n",a);
  else if (b < c && b < a)
    printf("So nho nhat la: %d\n",b);
  else if (c < a && c < b)
    printf("So nho nhat la: %d\n",c);
  else
    printf("Khong co so nao nho nhat!\n");

	   
  
}
