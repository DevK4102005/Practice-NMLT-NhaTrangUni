#include <stdio.h>
#include <stdlib.h>
#define maxlen 100
typedef float Mang[maxlen];
void Nhapmang( Mang a, int *ptr_n);
void Xuatmang(Mang a, int n); // 1 so le phan thap phan
void TimMaxVaVitri(Mang a, int n, float *max, int *vtcc);
void XoaPT(Mang a, int *ptr_n, int k);
void ThemPT(Mang a, int *ptr_n, int x);
int main()
{
    Mang a;
    int n, vtcc, k;
    float max;
    float *ptr=(float*)malloc(n*sizeof(float));//Dynamic Allocated
    Nhapmang(a, &n);
    printf("mang vua nhap la:\n");
    Xuatmang(a, n);
    printf("\n");
    TimMaxVaVitri(a, n, &max, &vtcc);
    printf("max=%.1f\n", max);
    printf("vtcc=%d\n", vtcc);
    XoaPT(a, &n, k);
    printf("Mang sau khi xoa la:\n");
    Xuatmang(a, n);
    printf("\n");
    int x;
    ThemPT(a, &n, x);
    printf("Mang sau khi them phan tu la:\n");
    Xuatmang(a, n);
    free(ptr);
    return 0;
}
void Nhapmang(Mang a, int *ptr_n)
{
    do
    {
        printf("Nhap n:");
        scanf("%d", &*ptr_n);
    } while (!(3 <= *ptr_n && *ptr_n <= 100));
    for (int i = 0; i < *ptr_n; i++)
    {
        do
        {
            printf("Nhap a[%d]", i);
            scanf("%f", &a[i]);
        } while (!(5 <= a[i] && a[i] <= 20));
    }
}
void Xuatmang(Mang a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.1f\t", a[i]);
    }
}
void TimMaxVaVitri(Mang a, int n, float *max, int *vtcc)
{
    *max = a[0];
    *vtcc = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
            *vtcc = i;
        }
        else if (a[i] == *max)
            *vtcc = i; // Cap nhat lai vi tri
    }
}
void XoaPT(Mang a, int *ptr_n, int k)
{
    do
    {
        printf("Nhap vi tri phan tu can xoa:");
        scanf("%d", &k);
    } while (!(k >= 0 && k <= (*ptr_n - 1)));
    for (int i = k; i < (*ptr_n - 1); i++)
    { // Doi cac phan tu tu k->n-1 len 1 vi tri de xoa di phan tu k
        a[i] = a[i + 1];
    }
    *ptr_n -= 1;
}
void ThemPT(Mang a, int *ptr_n, int x)
{
    do
    {
        printf("Nhap vi tri phan tu can chen:");
        scanf("%d", &x);
    } while (!(x >= 0 && x <= *ptr_n));
    float y;
    printf("Nhap gia tri can chen:");
    scanf("%f", &y);
    *ptr_n += 1;
    for (int i = (*ptr_n - 1); i > x; i--)
    {
        a[i] = a[i - 1];
    }
    a[x] = y;
}