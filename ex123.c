#include <stdio.h>

int main()
{
    int a, b, c;
    int *p;
    printf("Nhap gia tri: ");
    scanf("%d%d%d", &a, &b, &c);

    p = &a;
    *p += 100;
    printf("Gia tri sau cong: %d\n", *p);   

    p = &b;
    *p += 100;
    printf("Gia tri sau cong: %d\n", *p); 

    p = &c;
    *p += 100;
    printf("Gia tri sau cong: %d\n", *p);   
    
    // int S = 100;
    // p = &S;
    // a += *p;
    // b += *p;
    // c += *p;
    // printf("Gia tri sau khi cong!\n");
    // printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}