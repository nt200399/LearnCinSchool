#include <stdio.h>

int main()
{
  char a;
  int d = 0;
  while(1)
    {
      a = getchar();
      if (a == ' ')
	{
	  d++;
	  if (d < 2)
	    {
	      putchar(a);
	    }
	  else
	    continue;
	}
      else if (a == '.')
	break;
      if (a != ' ')
	{
	  d = 0;
	  putchar(a);
	}
    }
  return 0;
}
