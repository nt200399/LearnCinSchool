#include <stdio.h>

void doanhsobanhang(int *arr, int *n);
int tongdoanhso(int *arr, int n);

int main()
{
    int *arr, n;
    doanhsobanhang(arr, &n);
    printf("Tong doanh so la: %d\n", tongdoanhso(arr, n));
    return 0;
}

void doanhsobanhang(int *arr, int *n)
{
    printf("Nhap so thang: ");
    scanf("%d", &*n);
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &*(arr + i));
    }
}

int tongdoanhso(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}