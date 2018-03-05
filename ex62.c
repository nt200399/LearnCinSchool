#include <stdio.h>

int main()
{
  int a;
  printf("Nhap huong toa do compa: ");
  scanf("%d",&a);
  /////////////////////////////////////////////////
  printf("\n\n");
  if (0 <= a && a < 90)
    printf("North East\n");
  if (90 <= a && a < 180)  
    printf("South East\n");
  if (180 <= a && a < 270)
    printf("South West\n");
  if (270 <= a && a <= 360)
    printf("North West\n");
  if (a > 360)
    printf("Nhap lai gia tri!\n");
  printf("\n\n");
  /////////////////////////////////////////////////
  
  return 0;
}
