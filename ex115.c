#include <stdio.h>

void swap(int *a, int *b, int *c);

int main()
{
    int x, y, z;
    int *p, *q, *r;
    printf("Nhap gia tri: ");
    scanf("%d%d%d", &x, &y, &z);
    p = &x;
    q = &y;
    r = &z;

    printf("Gia tri x, y, z la: %d %d %d\n", x, y, z);
    printf("Gia tri p, q, r la: %p %p %p\n", p, q, r);
    printf("Gia tri cua *p, *q, *r la: %d %d %d\n", *p, *q, *r);

    printf("\n Doi cho gia tri x, y, z\n");
    swap(&x, &y, &z);
    printf("Gia tri x, y, z la: %d %d %d\n", x, y, z);
    printf("Gia tri p, q, r la: %p %p %p\n", p, q, r);
    printf("Gia tri cua *p, *q, *r la: %d %d %d\n", *p, *q, *r);

    printf("\n Doi cho gia tri p, q, r\n");
    swap(p, q, r);
    printf("Gia tri x, y, z la: %d %d %d\n", x, y, z);
    printf("Gia tri p, q, r la: %p %p %p\n", p, q, r);
    printf("Gia tri cua *p, *q, *r la: %d %d %d\n", *p, *q, *r);

    return 0;
}

void swap(int *a, int *b, int *c)
{
    int tg = *a;
    *a = *b;
    *b = *c;
    *c = tg;
}