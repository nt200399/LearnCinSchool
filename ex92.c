#include <stdio.h>
#include <math.h>
int kiemtrasonguyento(int);

int main()
{
    int n;
    do
    {   
        printf("Nhap gia tri nguyen duong: ");
        scanf("%d",&n);
        if (n <= 0)
            printf("Vui long nhap lai gia tri nguyen duong!\n");
    } while (n <= 0);
    printf("Tra ve gia tri (1 la so nguyen to, 0 khong phai nguyen to): %d\n", kiemtrasonguyento(n));
    return 0;
}

int kiemtrasonguyento(int n)
{
    if (n <= 2)
        return 1;
    else if (n > 2)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}
