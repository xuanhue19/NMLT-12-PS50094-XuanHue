#include <stdio.h>
int main ()
{
   

        int min, max;
        int i;
        int tong = 0 ;
        int Biendem = 0;
        float Diemtrungbinh;

        printf ("Nhap gia tri min: \n");
        scanf ("%d", &min);
        printf ("Nhap gia tri max: \n");
        scanf ("%d", &max);

        if (min > max)
        {
            printf ("Gia tri min khong duoc lon hon max! \n");
        }
        else 
        {
            printf ("Cac so chia het cho 2 trong khoang [%d %d]: \n ", min, max);
            for (i=min; i<=max; i++)

        {
            if (i%2==0)
            printf ("%d",i);
            tong =+ i;
            Biendem++;
        }
      } 

            if (Biendem==0)
            {
               printf ("Khong co so nao chia het cho 2 trong bien nay \n");
            }
            
            else
            {
               Diemtrungbinh = (float)tong/Biendem;
 
               printf (" Tong cac so chia het cho 2: %d\n", tong);
               printf (" So luong cac so chia het cho 2: %d\n", Biendem);
               printf (" Trung binh cong: %.2f\n", Diemtrungbinh);

            }

            return 0;
        }