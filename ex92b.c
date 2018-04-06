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
    printf("Cac so nguyen to tu 2 den %d la: \n", n);
    for (int j = 2; j <= n; j++)
    {
        if (kiemtrasonguyento(j))
            printf("%d\t",kiemtrasonguyento(j));
    }
    printf("\n");

    return 0;
}

int kiemtrasonguyento(int n)
{
    if (n <= 2)
        return n;
    else if (n > 2)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
        return n;
    }
}
