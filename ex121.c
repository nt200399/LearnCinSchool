#include <stdio.h>

int main()
{
    int a, b, c;
    int *p;
    printf("Nhap gia tri: ");
    scanf("%d%d%d", &a, &b, &c);
    p = &a;
    printf("Gia tri tham chieu: %d\n", *p);
    p = &b;
    printf("Gia tri tham chieu: %d\n", *p);
    p = &c;
    printf("Gia tri tham chieu: %d\n", *p);
    printf("%p",p);
    return 0;
}