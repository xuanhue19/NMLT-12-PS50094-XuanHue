#include <stdio.h>

void menu();
void Chucnang1();
void Chucnang2();
void Chucnang3();
void Chucnang4();

int findMax(int a, int b, int c);
int checkYear(int year);
void swap(int *a, int *b);
void checkTriangle(float a, float b, float c);

int main()
{
    int chon;

    do
    {
        printf("+---------------------------------------------+ \n");
        printf("|           MENU CHUONG TRINH LAB 5           | \n");
        printf("+---------------------------------------------+ \n");
        printf("| 1. Tìm giá trị lớn nhất trong 3 số.         | \n");
        printf("| 2. Kiểm tra Năm nhuận.                      | \n");
        printf("| 3. Hoán vị 2 số (Sử dung con trỏ).          | \n");
        printf("| 4. Kiểm tra và phân loại Tam giác.          | \n");
        printf("| 5. Thoát chương trình.                      | \n");
        printf("+---------------------------------------------+ \n");

        printf(" >> Xin moi chon chuc nang (1-5): \n");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:

        {
            Chucnang1 ();
            break;
        }

        case 2:
        {
            Chucnang2 ();
            break;
        }

        case 3:
        {
           Chucnang3 ();
            break;
        }

        case 4:
        {
            Chucnang4 ();
            break;
        }

        case 5:
        {
           printf ("Thoat ung dung. \n");
            break;
        }

        default:
        {
            printf("Khong co chuc nang nay! \n");
            break;
        }
        }

    } while (chon != 5);

    return 0;
}

void Chucnang1()
            {
                int a, b, c;
                int Max;

                printf("Nhap vao 3 tham so a, b, c: \n");
                scanf("%d %d %d", &a, &b, &c);

                Max = findMax(a, b, c);

                printf("Gia tri cua max la: %d\n", Max);
            }

            int findMax(int a, int b, int c)
            {
                int Max = a;

                if (b > Max)
                {
                    Max = b;
                }

                if (c > Max)
                {
                    Max = c;
                }

                return Max;
            }

            void Chucnang2()
            {
                int year;

                printf ("Nhap so nam can kiem tra: \n");
                scanf ("%d", &year);

                if (checkYear(year) == 1)
                {
                    printf ("Nam nhuan. \n");
                }
                else 
                {
                    printf ("Nam khong nhuan. \n");
                }
            }

             int checkYear(int year)
             {
                if (year % 400 == 0 ||( year % 4 == 0 && year % 100 != 0))
                {
                    return 1;
                }
                else 
                {
                    return 0;
                }

            }

            void Chucnang3()
            {

            }

            void Chucnang4()
            {

            }