#include <stdio.h>

void tangluong(int *luonghientai);

int main()
{
    int namcongtac;
    do 
    {
        printf("Nhap so nam cong tac: ");
        scanf("%d", &namcongtac);
        if (namcongtac < 3)
            printf("Nhan vien chua du so nam cong tac de tang luong!\n");
    } while (namcongtac < 3);

    printf("Nhap so luong hien tai: ");
    int luonghientai;
    scanf("%d", &luonghientai);
    tangluong(&luonghientai);
    printf("Luong tang la: %d\n", luonghientai);

    return 0;
}

void tangluong(int *luonghientai)
{
    printf("Nhap so tien tang them: ");
    int tientang;
    scanf("%d", &tientang);
    
    *luonghientai += tientang;

}