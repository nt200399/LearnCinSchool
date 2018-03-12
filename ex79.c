#include <stdio.h>

int main()
{
  int n, S = 1;
  printf("Nhap gia tri: ");
  scanf("%d",&n);
  if (n == 0)
    S = S;
  else
    {
      for (int i = 1; i <= n; i++)
	{
	  S *= i;
	}
    }
  printf("Gia tri cua %d! la: %d\n",n,S);
  return 0;
}
