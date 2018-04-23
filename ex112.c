#include <stdio.h>
#define MAX 1000

void nhapmang(int arr[], int *n);
void diachihe16(int arr[], int n);

int main()
{
    int arr[MAX], n;
    nhapmang(arr, &n);
    diachihe16(arr, n);

    return 0;
}

void nhapmang(int arr[], int *n)
{
    printf("Nhap so phan tu mang: ");
    scanf("%d",&*n);
    for (int i = 0; i < *n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void diachihe16(int arr[], int n)
{
    int  *p;
    for (int i = 0; i < n; i++)
    {
        p = &arr[i];
        printf("Dia chi: %p\n", p);
    }
}