//Tao ham strend(s,t);

#include <stdio.h>
#include <string.h>
#define MAX 100

int hamstrend(char s[], char t[])
{
    for (int i = 0; i < strlen(t); i++)
    {
        if (s[strlen(s) - i] == t[strlen(t) - i])
            continue;
        else 
            return 0;
    }
    return 1;
}

int main()
{
    char s[MAX], t[MAX];
    printf("Nhap xau s: ");
    gets(s);
    printf("Nhap xau t: ");
    gets(t);

    if (hamstrend(s,t) == 1)
        printf("Xau t xuat hien o cuoi sau s!\n");
    else
        printf("Khong xuat hien!\n");
}