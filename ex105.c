#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 1000

void nhapmang(int arr[], int *n);
void xuatmang(int arr[], int n);
int demso0(int arr[], int n);
int timchieudai(int arr[], int n);

int main()
{
    int arr[MAX];
    int n;
    nhapmang(arr, &n);
    printf("So phan tu la so 0 la: %d\n", demso0(arr, n));
    timchieudai(arr, n);
    printf("Chieu dai xuat hien so 0 dai nhat la: %d\n",timchieudai(arr, n));
    return 0;
}

void nhapmang(int arr[], int *n)
{
    printf("Nhap so phan tu mang: ");
    scanf("%d", &*n);
    srand(time(NULL));
    for (int i = 0; i < *n; i++)
    {
        // arr[i] = rand()%1000;
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int demso0(int arr[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            dem++;
    }
    return dem;
}

int timchieudai(int arr[], int n)
{
    int arr0[MAX];
    int dem;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            dem++;
        else
        {
            arr0[i] = dem++;
            dem = 0;
        }
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr0[i])
            max = arr0[i];
    }
    return max;
}


// Sap xep cac phan tu theo thu tu! Sau do dem cac phan tu bang nhau!!!! OKEEEEEEEEEEEEEE!!!!!