#include <stdio.h>

int main()
{
  char a, b, c;
  printf("Nhap xau: ");
  scanf("%c%c%c",&a,&b,&c);
  /* if (a > b)
    {
      if (b > c)
	printf("%c\n",c);
      else
	printf("%c\n",b);
    }
  else
      {
      if (a == b)
	printf("Nhap lai gia tri!");
      if (b < c) 
	printf("%c\n",a);
    }
  */
  // printf("%c%c%c",a,b,c);
  if (a < b < c)
    printf("%c\n",a);
  if (b < a && b < c)
    printf("%c\n",b);
  if (c < a && c < b)
    printf("%c\n",c);
  if (a == b || a == c || b == c)
    printf("Nhap lai\n");
   
  return 0;
}

