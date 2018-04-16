#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void nhapmang(int arr[], int *n);
void xuatmang(int arr[], int n);
int tongsole(int arr[], int n);
int gtnn(int arr[], int n);

#define MAX 1000

int main()
{
    int arr[MAX];
    int n;
    nhapmang(arr, &n);
    xuatmang(arr, n);
    printf("Tong cac so le la: %d\n",tongsole(arr, n));
    printf("Gia tri nho nhat cua mang la: %d\n",gtnn(arr,n));
    return 0;
}

void nhapmang(int arr[], int *n)
{
    printf("Nhap so phan tu mang: ");
    scanf("%d", &*n);
    srand(time(NULL));
    for (int i = 0; i < *n; i++)
    {
        arr[i] = rand()%1000;
    }
}

void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}

int tongsole(int arr[], int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            S += arr[i];
    }
    return S;
}

int gtnn(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}