#include <stdio.h>
#include  <math.h>
int main () 
{
 int chon;
    do
 {
    printf ("+------------------------------------------------------+ \n");
    printf ("|                MENU CHUONG TRINH LAN 3               | \n");
    printf ("+------------------------------------------------------+ \n");
    printf ("|1. Chuc nang tinh hoc luc sinh vien.                  | \n");
    printf ("|2. Chuc nang giai phuong trinh bac 2.                 |\n");
    printf ("|3. Chuc nang tinh tien dien tieu thu hang thang.      | \n");
    printf ("|4. Thoat chuong trinh.                                |\n");
    printf ("+------------------------------------------------------+ \n");
    printf (" Moi ban chon chuc nang (1-4) \n");
    scanf ("%d", &chon);

    switch (chon)
    {
        case 1:
        float diem;

        printf ("Nhap diem sinh vien: \n");
        scanf ("%f", &diem);

        if (diem < 0 || diem >10)
    {
        printf ("diem khong hop le! \n");
    }

    else 

    {
        if (diem >= 9.0)
    {
        printf ("Hoc luc: Xuat sac \n");
    }
    else if (diem >= 8.0)
    {
        printf ("Hoc luc: Gioi \n");
    }
    else if (diem >= 6.5)
    {
        printf ("Hoc luc: Kha \n");
    }
    else if (diem >= 5.0)
    {
        printf ("Hoc luc: Trung binh \n");
    }
    else if (diem >= 3.5)
    {
        printf ("Hoc luc: Yeu \n");
    }
    else 
    {
        printf ("Hoc luc: Kem \n");
    }
    }
     break;
   
    case 2:
    { 
       float a, b, c;
       float delta, x, x1, x2;

       printf ("Nhap he so a: \n");
       scanf ("%f", &a);

       printf ("Nhap he so b: \n");
       scanf ("%f", &b);

       printf ("Nhap he so c: \n");
       scanf ("%f", &c);

       if (a==0)
       {
        if (b==0)
        {
         if (c==0)
         {
            printf ("Phuong trinh co so vo nghiem \n");
         }
         else 
         {
            printf ("Phuong trinh vo nghiem \n");
         }
        }
        else 
        {
            x = -c/b;
            printf ("Phuong trinh co mot nghiem duy nhat: x = %.2f\n",x);
        }
      }
        else
      {
        delta = b*b-4*a*c;
      
        if (delta < 0)
        {
            printf ("Phuong trinh vo nghiem \n");
        }
        else if (delta == 0)
        {
            x = -b / (2*a);
            printf ("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf ("Phuong trinh co 2 nghiem rieng biet: \n ");
            printf ("x1 = %.2f\n", x1);
            printf ("x2 = %.2f\n", x2);
        }
        }
        break;
    }

        case 3:
    {
        int Sodien;
        float Tiendien;

        printf ("Nhap vao so dien tieu thu trong thang: \n");
        scanf ("%d",&Sodien);

        if ( Sodien <= 0 )
        {
            printf ("So dien khong hop le! \n");
        }
        else
        {
            if ( Sodien <= 50 )
            {
                Tiendien = Sodien * 1678;
            }
        else if ( Sodien <= 100 )
        {
            Tiendien = 50 * 1678 + (Sodien - 50) * 1734;
        }
        else if ( Sodien <= 200 )
        {
            Tiendien = 50 * 1678 + 50 * 1734 + (Sodien - 100) * 2014;
        }
        else if ( Sodien <= 300 )
        {
            Tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (Sodien - 200) * 2536;
        }
        else if ( Sodien <= 400 )
        {
            Tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (Sodien - 300) * 2834;
        }
        else 
        {
            Tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (Sodien - 400) * 2927;
        }
          printf (" So tien dien phai tra : %.2f VND\n", Tiendien);
        }
        break;
    }

        case 4:
        {
            printf ("Da thoat chuong trinh \n");
        }
    
    default:
    {
        printf ("Lua chon khong hop le! Vui long chon lai \n");
        break;
    }
}
        
}
        while (chon !=4);

        return 0;
    }



    
      
      

    





  




     










