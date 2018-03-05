#include <stdio.h>

int main()
{
  int tuoi;
  printf("Nhap tuoi: ");
  scanf("%d",&tuoi);
  /////////////////////////////////////////////////////////
  if (tuoi > 0)
    {
      if (tuoi >= 65)
	printf("Nguoi cao tuoi\n");
      else
	{
	if (tuoi < 18)
	  printf("Tre em\n");
	else printf("Nguoi lon\n");
	}
    }
  else
    printf("Nhap lai gia tri!\n");
  /////////////////////////////////////////////////////////
  printf("\n***********************************\n\n");
  switch (tuoi) {
  case 1 ...17: printf("Tre em\n"); break;
  case 18 ... 64: printf("Nguoi lon\n"); break;
  case 65 ... 125: printf("Nguoi cao tuoi\n"); break;
  default: printf("Nhap lai tuoi!\n");
    }
  return 0;
}
