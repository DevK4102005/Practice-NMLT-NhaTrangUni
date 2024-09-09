#include <stdio.h>
int swap(int &a, int &b, int &c, int &d);
int temp(int &x, int &y);
int main()
{
    int a, b, c, d;
    printf("nhap a,b,c,d:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    swap(a, b, c, d);
    printf("a,b,c,d da sap xep tang dan la:%d %d %d %d\n", a, b, c, d);
    printf("GTLN=%d\n",d);
    printf("GT nho thu 2=%d\n",b);
    return 0;
}
int swap(int &a, int &b, int &c, int &d)
{
    if (a > b)
        temp(a, b);
    if (a > c)
        temp(a, c);
    if (a > d)
        temp(a, d);
    if (b > c)
        temp(b, c);
    if (b > d)
        temp(b, d);
    if (c > d)
        temp(c, d);
}
int temp(int &x, int &y)
{
    int tam;
    tam = x;
    x = y;
    y = tam;
}
