#include <stdio.h>

int main()
{
  int n;
  printf("Nhap gia tri: ");
  scanf("%d",&n);
  for (int i = 1; i <= n; i++)
    {
      int TongPhanChia = 0;
      for (int j = 1; j < i; j++)
	{
	  if (i % j == 0)
	    {
	      TongPhanChia += j;
	    }
	}
      if (TongPhanChia == i)
	printf("%d\n", i);
    }
  return 0;
}
