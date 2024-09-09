#include <stdio.h>
int KiemTraNT(int check);
int TinhTongNT(int check);
int main()
{
    int a;
    do
    {
        printf("Nhap so nguyen duong:");
        scanf("%d", &a);
    } while (!(5 <= a && a <= 30));
    printf("Cac so nguyen to hop le la:\n");
    for (int i = 2; i <= a; i++)
    {
        if (KiemTraNT(i) == 1)
            printf("%d\t", i);
    }
    printf("\n");
    int Tong = TinhTongNT(a);
    printf("Tong la:%d", Tong);
    return 0;
}
int KiemTraNT(int check)
{
    for (int i = 2; i < check; i++)
    {
        if (check % i == 0)
            return 0;
    }
    return 1;
}
int TinhTongNT(int check)
{
    int s = 0;
    for (int i = 2; i <= check; i++)
    {
        if (KiemTraNT(i) == 1)
            s += i;
    }
    return s;
}
