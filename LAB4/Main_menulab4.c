#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("+------------------------------------------------+ \n");
        printf("|        MENU CHUONG TRINH LAB 4                 | \n");
        printf("+------------------------------------------------+ \n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2. | \n");
        printf("| 2. Kiem tra so nguyen to.                      | \n");
        printf("| 3. Kiem tra So chinh phuong.                   | \n");
        printf("| 4. Thoat chuong trinh.                         | \n");
        printf("+------------------------------------------------+ \n");

        printf("Moi ban chon chuc nang (1-4) \n");
        scanf("%d", &chon);

        switch (chon)
            {
            case 1:
            {
                printf("Ban chon chuc nang 1 \n");
                break;
            }

            case 2:
            {
                printf("Ban chon chuc nang 2 \n");
                break;
            }

            case 3:
            {
                printf("Ban chon chuc nang 3 \n");
                break;
            }

            case 4:
            {
                printf("Da thoat ung dung \n");
                break;
            }

            default:
            {
                printf ("Lua chon khong hop le! Vui long chon lai \n");
                break;
            }
            }


    } while (chon != 4);

    return 0;
}