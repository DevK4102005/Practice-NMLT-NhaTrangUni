#include <stdio.h>
#define maxlen 100
typedef int Mang[maxlen];
void Nhapmang(Mang a, int *ptr_n);
void Xuatmang(Mang a, int n);
int TimSoAmMax(Mang a, int n);
void TachMang2AmDuong(Mang a, int n, Mang b, int &nb, Mang c, int &nc);
int checkNegtv(int check);
void swap(int &x, int &y);
void ThayAm1bangDuong1(Mang a, int n);
int main()
{
    Mang a, b, c;
    int n, nb, nc;
    Nhapmang(a, &n);
    printf("Mang vua nhap la:\n");
    Xuatmang(a, n);
    printf("\n");
    // if(TimSoAmMax(a,n)==0)printf("0");
    // else
    printf("so am lon nhat la:%d", TimSoAmMax(a, n));
    printf("\n");
    printf("Mang sau khi tach la\n");
    TachMang2AmDuong(a, n, b, nb, c, nc);
    printf("Mang toan so am:\n");
    Xuatmang(b, nb);
    printf("\n");
    printf("Mang toan so duong:\n");
    Xuatmang(c, nc);
    ThayAm1bangDuong1(a, n);
    printf("\n");
    printf("Mang sau khi thay so am bang -1, so duong thanh 1\n");
    Xuatmang(a, n);
    return 0;
}
void Nhapmang(Mang a, int *ptr_n)
{
    do
    {
        printf("Nhap n:");
        scanf("%d", ptr_n);
    } while (!(3 <= *ptr_n && *ptr_n <= 100));
    for (int i = 0; i < *ptr_n; i++)
    {
        printf("Nhap a[%d]:", i);
        scanf("%d", a + i);
    }
}
void Xuatmang(Mang a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int TimSoAmMax(Mang a, int n)
{
    int maxAm = -9999;
    for (int i = 0; i < n; i++)
    {
        if (checkNegtv(a[i]) && a[i] > maxAm)
        {
            maxAm = a[i];
        }
    }
    return maxAm;
    return 0;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void TachMang2AmDuong(Mang a, int n, Mang b, int &nb, Mang c, int &nc)
{
    // Khoi tao Mang b de gan nhung gia tri am, khoi tao Mang c de gan nhung gia tri duong
    // Khoi tao bien nb de biet so luong phan tu am, bien nc de biet so luong so duong
    nb = 0;
    nc = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkNegtv(a[i]) == 1)
        {
            b[nb] = a[i];
            nb++;
        }
        else
        {
            c[nc] = a[i];
            nc++;
        }
    }
}
int checkNegtv(int check)
{
    if (check < 0)
        return 1;
    return 0;
}
void ThayAm1bangDuong1(Mang a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkNegtv(a[i]))
        {
            a[i] = -1;
        }
        else
            a[i] = 1;
    }
}