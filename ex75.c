#include <stdio.h>
#include <math.h>

int main()
{
  int a = 100;
  printf("Chuong trinh in ra cac so nguyen to tu 1 den 100\n");

  // Chuong trinh khong su dung ham sqrt
  for (int i = 1; i <= a; i++)
    {
      if (i == 1 || i == 2)
	printf("%d\n",i);
      else
	{
	  for (int j = 2; j <= i; j++)
	    {
	      if (i == j)
		printf("%d\n",i);
	      else if (i % j == 0)
		break;
	    }
	}
    }
  
  // Su dung ham sqrt
  
  /* for (int i = 1; i <= a; i++)
    {
      if (i == 1 || i == 2)
	printf("%d\n",i);
      else if (a % 2 == 0)
	continue;
      else
	{
	  for (int j = 3; j <= sqrt(i); j++)
	    {
	      if (i % j == 0)
		break;
	    }
	}
    }
  */
  return 0;
}
