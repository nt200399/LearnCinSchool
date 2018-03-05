#include <stdio.h>

int main()
{
  char xe;
  printf("Xe ra khoi bai la (c - xe con, b - xe buyt, t - xe tai): ");
  scanf("%c",&xe);
  switch (xe)
    {
    case 'c': printf("Ban da chon xe con!\n"); break;
    case 'b': printf("Ban da chon xe buyt!\n"); break;
    case 't': printf("Ban da chon xe tai!\n"); break;
    }
  printf("Nhap so gio giu xe: ");
  float time, okane;
  scanf("%f",&time);
  if(time > 0)
    switch (xe)
      {
      case 'c':
	{
	  if(time <= 2)
	    okane = time*0.7;
	  else
	    okane = 2*0.7 + (time - 2)*2.5;
	} break;
      case 'b':
	{
	  if(time <= 2)
	    okane = time*1.5;
	  else
	    okane = 1.5*2 + (time - 2)*2;
	} break;
      case 't':
	{
	  if(time <= 1)
	    okane = time*2.5;
	  else
	    okane = 2.5 + (time - 1)*3.25;
	}
      }
  else printf("Error!\n");

  printf("Tien trong xe la: %.2f",okane);
  printf("\n\nTRONG GIU XE\n");
  printf("%-10s %-10s %-10s\n","Loai Xe","So Gio","Gia Tien");
  printf("------------------------------\n");
  printf("%-10c %-10.2f $%-10.2f\n",xe,time,okane);
  return 0;
}
