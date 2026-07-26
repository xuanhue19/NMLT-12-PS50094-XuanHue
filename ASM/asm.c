#include <stdio.h>
int main () {
    int chon;

    do
    {
        printf ("+------------------------------------+\n");
        printf ("|          MENU CHUONG TRINH          |\n");
        printf ("+------------------------------------+\n");
        printf (" 1. Kiem tra so nguyen \n");
        printf (" 2. Tim uoc so chung va boi so chung cua so 2 \n");
        printf (" 3. Tinh tien cho quan karaoke \n ");
        printf (" 4. Tinh tien dien \n");
        printf (" 5. Chuc nang doi tien \n");
        printf (" 6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop \n");
        printf (" 7. Xay dung chuong trinh vay tien mua xe \n");
        printf (" 8. Sap xep thong tin sinh vien \n");
        printf (" 9. Xay dung game FPOLY - LOTT \n");
        printf ("10. Xay dung chuong trinh tinh toan phan tu \n ");
        printf ("11. Thoat chuong trinh \n");
        printf ("Moi ban chon chuc nang \n");
        scanf ("%d", &chon);

     switch (chon)
      {
        case 1:
        printf (" Ban chon chuc nang 1: Kiem tra so nguyen. \n");
        break;
    
        case 2:
        printf (" Ban chon chuc nang 2: Tim uoc so chung va boi so chung cua so 2. \n");
        break;

        case 3:
        printf (" Ban chon chuc nang 3: Tinh tien cho quan karaoke. \n");
        break;

        case 4:
        printf (" Ban chon chuc nang 4: Tinh tien dien. \n");
        break;

        case 5:
        printf (" Ban chon chuc nang 5: Chuc nang doi ten. \n");
        break;

        case 6:
        printf (" Ban chon chuc nang 6: Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop. \n");
        break;

        case 7:
        printf (" Ban chon chuc nang 7: Xay dung chuong trinh vay tien mua xe. \n");
        break;

        case 8:
        printf (" Ban chon chuc nang 8: Sap xep thong tin sinh vien. \n");
        break;

        case 9:
        printf (" Ban chon chuc nang 9: Xay dung game FPOLY-LOTT. \n");
        break;

        case 10:
        printf (" Ban chon chuc nang 10: Xay dung chuong trinh tinh toan phan tu. \n");
        break;

        case 11:
        printf (" Ban chon chuc nang 11: Thoat chuong trinh. \n");
        break;

        default:
        printf (" Lua chon khong hop le! Moi chon lai \n");
        break;
      }

     } while (chon !=11);


    return 0;
}