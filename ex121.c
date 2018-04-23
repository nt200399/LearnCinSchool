#include <stdio.h>

int demsochan(int arr[], int n);

int main()
{
    int arr[100], n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("So phan tu chan la: %d\n", demsochan(arr, n));

    return 0;
}

int demsochan(int arr[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            dem++;
    return dem;
}