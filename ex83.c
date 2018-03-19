#include <stdio.h>

int main()
{
  printf("Chuong trinh tinh can bac hai theo phuong phap NT\n");
  float epsilon = 0.000001;
  int S;
  printf("Nhap gia tri: ");
  scanf("%d",&S);
  float x, x_1;
  x =(S+1)/2;
  x_1 = (x + S/x)/2;
  if (x > x_1)
    {
    float a;
    a = x;
    x = x_1;
    x_1 = a;
    }
  while((x_1 - x) > epsilon)
    {
      x = x_1;
      x_1 = (x +S/x)*0.5;
    }
  printf("Gia tri can bac 2 la: %.2f\n",x_1);
  return 0;
}
