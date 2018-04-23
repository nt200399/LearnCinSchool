#include <stdio.h>

double *giatrimax(double *arr, int n);

int main()
{
    double *arr;
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lf", &*(arr + i));
    printf("Con tro tro toi gia tri lon nhat cua mang la: %.2lf\n", *giatrimax(arr, n));
    return 0;
}

double *giatrimax(double *arr, int n)
{
    double *max = arr;
    if (n == 0)
        return NULL;
    for (int i = 0; i < n; i++)
    {
        if (*max < *(arr + i))
            *max = *(arr + i);
    }
    return max;
}
