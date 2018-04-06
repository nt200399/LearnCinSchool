#include <stdio.h>
int tinhluong(int);

int main()
{
    int n;
    do
    {
        printf("Nhap gio lam viec cua cong nhan: ");
        scanf("%d",&n);
        if (n < 10 || n > 65)
        {
            printf("Gio lam viec khong hop le!\n");
            printf("Vui long nhap lai gio lam!\n");
        }
    } while (n < 10 || n > 65);
    printf("Luong cua cong nhan la: %d\n",tinhluong(n));
    return 0;
}

int tinhluong(int n)
{
    if (n < 40)
        return 15000 * n;
    else if (n >= 40)
        return 15000*40 + (n-40)*22500;
}