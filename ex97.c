#include <stdio.h>
void kiemtrachanle(int);

int main()
{
    int n;
    printf("Nhap gia tri: ");
    scanf("%d", &n);
    kiemtrachanle(n);
    return 0;
}

void kiemtrachanle(int n)
{
    int a;
    int scsc = 0, scsl = 0;
    while (n != 0)
    {
        a = n % 10;
        if (a % 2 == 0)
            scsc++;
        else
            scsl++;
        n = n / 10;
    }
    printf("So chu so chan la: %d\n", scsc);
    printf("So chu so le la: %d\n", scsl);
}