#include <stdio.h>

void menu ();
void Chucnang1();
void Chucnang2();
void Chucnang3();
void Chucnang4();

int findMax (int a, int b, int c);
int checkYear (int year);
void swap (int * a, int * b);
void checkTriangle (float a, float b, float c);

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

        printf(" >> Xin moi chon chuc nang (1-5). \n");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
        {
            printf("Ban chon chuc nang 1. \n");
            break;
        }

        case 2:
        {
            printf("Ban chon chuc nang 2. \n");
            break;
        }

        case 3:
        {
            printf("Ban chon chuc nang 3. \n");
            break;
        }

        case 4:
        {
            printf("Ban chon chuc nang 4. \n");
            break;
        }

        case 5:
        {
            printf("Thoat chuong trinh. \n");
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