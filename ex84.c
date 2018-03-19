#include <stdio.h>

int main()
{
  double luongcty;
  int nhanvienhientai, sonhanvien;
  double gio;
  double luongtheogio;
  double luongtra;
  printf("Nhap so nhan vien: ");
  scanf("%d",&sonhanvien);
  luongcty = 0;
  nhanvienhientai = 0;
  while (nhanvienhientai < sonhanvien)
    {
      printf("Gio lam: ");
      scanf("%lf",&gio);
      printf("Luong theo gio: ");
      scanf("%lf",&luongtheogio);
      luongtra = gio*luongtheogio;
      printf("So tien tra: %6.2f\n", luongtra);
      luongcty += luongtra;
      nhanvienhientai ++;
    }
  printf("Tong so tien luong da tra \n");
  printf("Tong tien %8.2f\n",luongcty);
  return 0;
}
