#include <stdio.h>
#define maxlen 100
typedef int Mang[maxlen];
void Nhapmang(Mang a, int &n);
void Xuatmang(Mang a, int n);
int PTlecc(Mang a, int n);
int PTMin(Mang a, int n);
int demPtMIN(Mang a, int n);
int main()
{
    int n;
    Mang a;
    Nhapmang(a, n);
    printf("Mang vua nhap:\n");
    Xuatmang(a, n);
    printf("\nPhan tu le cuoi cung trong mang la:%d\n", PTlecc(a, n));
    printf("Phan tu nho nhat la %d va xuat hien %d lan", PTMin(a, n), demPtMIN(a, n));
    return 0;
}
void Nhapmang(Mang a, int &n)
{
    do
    {
        printf("Nhap n:");
        scanf("%d", &n);
    } while (!(5 <= n && n <= 100));
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]", i);
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
int PTlecc(Mang a, int n)
{
    for (int i = n; i > 0; i--)
    {
        if (a[i] % 2 != 0)
            return a[i];
    }
    return 0;
}

int PTMin(Mang a, int n)
{
    int Min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < Min)
            Min = a[i];
    }
    return Min;
}
int demPtMIN(Mang a, int n)
{
    int demPtMin = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == PTMin(a, n))
            demPtMin++;
    }
    return demPtMin;
}