#include <stdio.h>

void lietkephantumang(int *arr, int n);

int main()
{
    int *arr, n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &*(arr + i));
    printf("\n");
    lietkephantumang(arr, n);
    return 0;
}

void lietkephantumang(int *arr, int n)
{
    for (int h = 0; h < n; h++)
    {
        for (int i = 0; i < n - h; i++)
        {
            for (int j = 0; j <= i; j++)
                printf("%d\t", *(arr + j));
            printf("\n");
        }
        arr++;
    }
}