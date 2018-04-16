#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void nhapmang(int arr[], int *n);
void xuatmang(int arr[], int n);
int tongcucbo(int arr[], int n);

#define MAX 1000

int main()
{
    int arr[MAX];
    int n;
    nhapmang(arr, &n);
    xuatmang(arr, n);
    printf("Tong cuc bo la: %d\n", tongcucbo(arr, n));
    return 0;
}

void nhapmang(int arr[], int *n)
{
    printf("Nhap so phan tu mang: ");
    scanf("%d", &*n);
    srand(time(NULL));
    for (int i = 0; i < *n; i++)
    {
        arr[i] = rand() % 1000;
    }
}

void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int tongcucbo(int arr[], int n)
{
    int S = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            S += arr[i];
    }
    return S;
}