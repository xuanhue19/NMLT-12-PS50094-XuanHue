#include <stdio.h>
int main ()
{
    int chon;
    do
    {
        printf ("+------------------------------------------------+ \n");
        printf ("|         MENU CHUONG TRINH LAB 4                | \n");
        printf ("+------------------------------------------------+ \n");
        printf ("| 1. Tinh trung binh tong cac so chia het cho 2  | \n");
        printf ("| 2. Kiem tra So nguyen to                       | \n");
        printf ("| 3. Kiem tra So chinh phuong                    | \n");
        printf ("| 4. Thoat chuong trinh                          | \n");
        printf ("+------------------------------------------------+ \n");

        printf ("Moi chon chuc nang (1-4): \n");
        scanf ("%d", &chon);
    
    switch (chon)
  {
        case 1:
     {
        printf ("Ban da chon chuc nang 1. \n");
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
            printf ("Cac so chia het cho 2 trong khoang [%d %d]: ", min, max);
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
        }
        break;
        
        case 2:
     {
        printf ("Ban da chon chuc nang 2. \n");
        int i;
        int x;
        int laSonguyento=1;

        printf ("Nhap vao so nguyen x: \n");
        scanf ("%d", &x);

        if (x<2)
        {
         laSonguyento=0;
        }
        else 
        {
         for (i=2; i>x; i++)
         {
            if (x % i == 0)
            {
               laSonguyento=0;
               break;
            }

         }
        }

        if (laSonguyento == 1)

        {
         printf ("%d laSonguyento\n", x);
        }

        else 
        {
         printf ("%d laSonguyento\n", x);
        }

        break;
     }

        case 3:
     {
        printf ("Ban da chon chuc nang 3. \n");
        int x;
        int i;
        int laSochinhphuong = 0;

        printf ("Nhap vao so nguyen x: \n");
        scanf ("%d", &x);

        if (x<0)
        {
         printf ("%d khong phai la so chinh phuong \n", x);
        }
        else
        {
         for (i=0; i<=x; i++)
         {
            if (i * i == x)
            {
               laSochinhphuong = 1;
               break;
            }
         }
         if (laSochinhphuong == 1)
         {
            printf ("%d la so chinh phuong. \n", x);
            printf("Vi %d = %d * %d.\n", x, i, i);
         }
         else
         {
            printf ("%d khong phai la so chinh phuong. \n",x);
         }
        }
        break;
     }

        case 4:
     {
        printf ("Ban da chon chuc nang 4. \n");
        break;
     }

        default:
     {
        printf ("Lua chon khong hop le! Vui long chon lai. \n");
        break;
     }
  }

   } while (chon != 4);

      return 0;
}
  
   




