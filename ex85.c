#include <stdio.h>

int main()
{
  printf("Nhap so sinh vien: ");
  int sinhvien;
  int sinhviendo = 0, sinhvientruot = 0;
  scanf("%d",&sinhvien);
  for (int a = 1; a <= sinhvien; a++)
    {
      int check;
      printf("Nhap sinh vien do hay truot (1 - do), (2 - truot): ");
      scanf("%d",&check);
      if (check == 1)
	sinhviendo++;
      else
	sinhvientruot++;
    }
  printf("So sv do la: %d, sv truot la: %d\n",sinhviendo,sinhvientruot);
  return 0;


}
