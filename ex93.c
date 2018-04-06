#include <stdio.h>
int tonglapphuong(int);
void lietkeuocso(int);
int lietkebinhphuong(int);

int main()
{
    int n;
    printf("Nhap gia tri: ");
    scanf("%d",&n);
    printf("Tong lap phuong la: %d\n",tonglapphuong(n));
    printf("Liet ke uoc so cua %d la: ",n);
    lietkeuocso(n);
    printf("\n");
    printf("Liet ke binh phuong tu 1 den %d la: ",n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t",lietkebinhphuong(i));
    }
    printf("\n");

    return 0;
}

int lietkebinhphuong(int n)
{
    return n*n;
}

int tonglapphuong(int n)
{
    int S = 0;
    for(int i = 0; i <= n; i++)
    {
        S += i*i*i;
    }
    return S;
}

void lietkeuocso(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d\t",i);
    }
}