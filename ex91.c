#include <stdio.h>
float tinhdongnang(float, float);

int main()
{
    float m, v;
    printf("Nhap khoi luong: ");
    scanf("%f",&m);
    printf("Nhap van toc: ");
    scanf("%f",&v);
    printf("Dong nang la: %.2f\n", tinhdongnang(m,v));
    return 0;
}

float tinhdongnang(float m, float v)
{
    return m*v*v/2;
}