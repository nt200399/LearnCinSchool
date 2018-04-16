#include <stdio.h>

void nhapmang(int arr1[], int arr2[], int *n);
int kiemtramang(int arr1[], int arr2[], int n);

#define MAX 1000

int main()
{
    int arr1[MAX];
    int arr2[MAX];
    int n;
    nhapmang(arr1, arr2, &n);
    printf("2 ham co bang nhau hay khong? (1 bang, 0 khac): %d\n", kiemtramang(arr1, arr2, n));
    return 0;
}

void nhapmang(int arr1[], int arr2[], int *n)
{
    printf("Nhap so phan tu mang: ");
    scanf("%d", &*n);

    printf("\nNhap mang 1\n");
    for (int i = 0; i < *n; i++)
    {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nNhap mang 2\n");
    for (int i = 0; i < *n; i++)
    {
        printf("arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }
}

int kiemtramang(int arr1[], int arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}