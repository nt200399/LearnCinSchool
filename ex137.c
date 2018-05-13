#include <stdio.h>
#include <string.h>
#define MAX 1000

void thaykutu(char c[])
{
    switch (c[strlen(c) - 1])
    {
    case '?': 
    case ',': 
    case '.': 
    case ':': 
    case ';': 
    case '!': c[strlen(c) - 1] = ' '; break;
    }
}

int main()
{
    char c[MAX];
    printf("Nhap xau: ");
    gets(c);
    thaykutu(c);
    puts(c);
}