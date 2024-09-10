#include <stdio.h>
#define Maxlen 50
typedef int Mang[Maxlen];
void Nhapmang(Mang a, int &n);
void Xuatmang(Mang a, int n);
void XuatPTduong(Mang a, int n);
int DemPTchan(Mang a, int n);
int TongPTnguyento(Mang a, int n);
int checkPrime(int b);
int main()
{
    int n;
    Mang a;
    Nhapmang(a, n);
    printf("Mang vua nhap la:\n");
    Xuatmang(a, n);
    printf("\n");
    printf("Mang co cac phan tu nguyen duong la:\n");
    XuatPTduong(a, n);
    printf("\n");
    printf("So phan tu chan co trong mang la:%d\n", DemPTchan(a, n));
    printf("Tong cac PT la so nguyen to trong mang la:%d", TongPTnguyento(a, n));
    return 0;
}
void Nhapmang(Mang a, int &n)
{
    do
    {
        printf("Nhap n:");
        scanf("%d", &n);
    } while (!(3 <= n && n <= Maxlen));
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]:", i);
        scanf("%d", &a[i]);
    }
}
void Xuatmang(Mang a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void XuatPTduong(Mang a, int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            printf("%d\t", a[i]);
}
int DemPTchan(Mang a, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            dem++;
    return dem;
}
int TongPTnguyento(Mang a, int n)
{
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkPrime(a[i]) == 1)
            t += a[i];
    }
    return t;
}
int checkPrime(int b)
{
    if (b < 2)
        return 0;
    for (int i = 2; i < b; i++)
    {
        if (b % i == 0)
            return 0;
    }
    return 1;
}
