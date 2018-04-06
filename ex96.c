#include <stdio.h>
float chuyendoinhietdo(float);

int main()
{
    float F;
    printf("Nhap nhiet do: ");
    scanf("%f",&F);
    for(int i = 0; i <= F; i++)
    {
        printf("%d",i);
        printf("\t%.2f",chuyendoinhietdo(i));
        printf("\n");
    }
}

float chuyendoinhietdo(float F)
{
    return (F-32)*(5.0/9);
}