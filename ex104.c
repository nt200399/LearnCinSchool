#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 1000

void nhapmang(int arr[], int *n);
void xuatmang(int arr[], int n);
void sapxep(int arr[], int n);
void sapxeple(int arr[], int n);

int main()
{
    int arr[MAX];
    int n;
    nhapmang(arr, &n);
    printf("\nTruoc khi sap xep!\n");
    xuatmang(arr, n);
    sapxep(arr, n);
    printf("\nSau khi sap xep!\n");
    xuatmang(arr, n);
    printf("\nSap xep le\n");
    sapxeple(arr, n);
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
        // printf("arr[%d] = ", i);
        // scanf("%d", &arr[i]);
    }
}

void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void sapxep(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j - 1] < arr[j])
            {
                int swap = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

void sapxeple(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            printf("arr[%d] = %d\n", i,arr[i]);
    }
}