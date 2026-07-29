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
            int min, max;
            int i;
            int tong = 0;
            int Biendem = 0;
            float Trungbinh;

            printf("Ban chon chuc nang 1 \n");

            printf("Nhap vao so nguyen min: \n");
            scanf("%d", &min);

            printf("Nhap vao so nguyen max: \n");
            scanf("%d", &max);

            if (min > max)
            {
                printf("Loi: min khong duoc lon hon max! \n");
                break;
            }

            else
            {
                printf("Cac so chia het cho 2 trong khoảng [%d,%d] la: ", min, max);
            
                for (i = min; i <= max; i++)

                {
                    if (i % 2 == 0)
                    {
                        printf ("%d ", i);
                        tong += i;
                        Biendem++;
                    }
                }

                if (Biendem == 0)
                {
                    printf("Khong co so nao chia het cho 2 \n");
                }

                else
                {
                    Trungbinh = (float) tong / Biendem;

                    printf("tong = %d\n", tong);
                    printf("Biendem = %d\n", Biendem);
                    printf("Trungbinh = %.2f\n", Trungbinh);
                }
            }
            break;
        }

        case 2:
        {
            int x;
            int i;
            int laSonguyento = 1;

            printf("Ban chon chuc nang 2 \n");

            printf("Nhap x: ");
            scanf("%d", &x);

            if (x < 2)
            {
                printf("x khong phai la so nguyen to. \n");
                break;
            }

                for (i = 2; i < x; i++)
                {
                    if (x % i == 0)
                    {
                        laSonguyento = 0;
                        break;
                    }
                }

                if (laSonguyento == 1)
                {
                    printf("x la so nguyen to. \n");
                }

                else
                {
                    printf("x khong phai la so nguyen to. \n");
                }
            
            break;
        }

        case 3:
        {
            int x;
            int i;
            int laSochinhphuong = 0;

            printf("Ban chon chuc nang 3 \n");

            printf("Nhap vao so nguyen x: \n");
            scanf("%d", &x);

            for (i = 0; i <= x; i++)
            {

                if (i * i == x)
                {
                    laSochinhphuong = 1;
                    break;
                }
            }

                if (laSochinhphuong == 1)
                {
                    printf("x la so chinh phuong. \n");
                }

                else
                {
                    printf("x khong phai la so chinh phuong. \n");
                }

            break;
        }

        case 4:
        {
            printf("Da thoat ung dung \n");
            break;
        }

        default:
        {
            printf("Lua chon khong hop le! Vui long chon lai \n");
            break;
        }
        }

    } while (chon != 4);

    return 0;
}