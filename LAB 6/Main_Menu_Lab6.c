#include <stdio.h>

void menu();
void Chucnang1();
void Chucnang2();
void Chucnang3();
void Chucnang4();
void Chucnang5();

void tinhTrungBinhCong(int a[], int n);
void timMaxMin(int a[], int n);
void sapxepGiamdan(int a[], int n);
void maTranbinhphuong(int row, int col);
void xuatSolematran(int row, int col);

int main()
{
    int chon;

    do
    {
        printf("+----------------------------------------------------------+ \n");
        printf("|               MENU CHUONG TRINH LAB 6                    | \n");
        printf("+----------------------------------------------------------+ \n");
        printf("| 1. Tính trung bình tổng số chia hết cho 3 và 5.          | \n");
        printf("| 2. Tìm giá trị Lớn nhất và Nhỏ nhất trong Mảng.          | \n");
        printf("| 3. Sắp xếp Mảng theo thứ tự Giảm dần.                    | \n");
        printf("| 4. Ma trận bình phương (Mảng 2 chiều).                   | \n");
        printf("| 5. Lọc và xuất vị trí Số lẻ trong Ma trận.               | \n");
        printf("| 6. Thoát ứng dụng.                                       | \n");
        printf("+----------------------------------------------------------+ \n");

        printf(">> Moi ban chon chuc nang (1-6): ");
        scanf("%d", &chon);

        switch (chon)
        {

        case 1:
        {
            printf("Ban chon chuc nang 1: Tinh trung binh tong so chia het cho 3 va 5. \n");
            break;
        }

        case 2:
        {
            printf("Ban chon chuc nang 2: Tim gia tri Lon nhat va Nho nhat trong Mang. \n");
            break;
        }

        case 3:
        {
            printf("Ban chon chuc nang 3: Sap xep Mang theo thu tu Giam dan. \n");
            break;
        }

        case 4:
        {
            printf("Ban chon chuc nang 4: Ma tran binh phuong (Mang 2 chieu). \n");
            break;
        }

        case 5:
        {
            printf("Ban chon chuc nang 5: Loc va xuat vi tri So le trong Ma tran. \n");
            break;
        }

        case 6:
        {
            printf("Ban da thoat ung dung. \n");
            break;
        }

        default:
        {
            printf("Lua chon khong hop le! Vui long chon lai. \n");
            break;
        }
        }
    } while (chon != 6);

    return 0;
}
