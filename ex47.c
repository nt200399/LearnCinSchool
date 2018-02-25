/* 
Viết một chương trình yêu cầu nhập thông tin về một cuốn 
sách bạn mua ở cửa hàng: ISBN, Title, Price, Quantity. 
Thuế VAT là 4%. 
*/

#include <stdio.h>

int main()
{
    int SL, MaVach;
    float GiaTien, TongTien;
    char TenSach[25];
    printf("Nhap ten sach: ");
    scanf("%s",TenSach);
    printf("Nhap ma vach: ");
    scanf("%d",&MaVach);
    printf("Nhap so luong: ");
    scanf("%d", &SL);
    printf("Nhap gia tien: ");
    scanf("%f",&GiaTien);
    
    float VAT;
    TongTien = GiaTien * SL;
    VAT = TongTien * 0.04;

    printf("\n\nBK Bookseller\n\n");  
    printf("%-5s %-15s %-25s %-15s %-15s\n","SL","Ma Vach","Ten Sach","Gia Tien","Tong Tien");
    printf("--------------------------------------------------------------------------\n");
    printf("%-5d %-15d %-25s $%-15.2f $%-15.2f\n",SL,MaVach,TenSach,GiaTien,TongTien);
    printf("Thue VAT 4%%: $%.2f\n",VAT);
    printf("Tong tien phai tra: $%.2f \n\n", VAT + TongTien);
    return 0;
}
