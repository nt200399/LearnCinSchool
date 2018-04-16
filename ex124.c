#include <stdio.h>

void swap(int *a, int *b, int *c);

int main()
{
    int a, b, c;
    printf("Nhap gia tri: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Gia tri truoc khi doi cho: %d %d %d\n", a, b, c);
    swap(&a, &b, &c);
    printf("Gia tri sau khi doi cho: %d %d %d\n", a, b, c);
    return 0;
}

void swap(int *a, int *b, int *c)
{
    int tg = *a;
    *a = *b;
    *b = *c;
    *c = tg;
}