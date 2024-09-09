#include <stdio.h>
void MaxMin(int a, int b, int c, int d, int *max, int *min);
int main()
{
    int a, b, c, d;
    int *min, *max;
    printf("Nhap a,b,c,d:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    MaxMin(a, b, c, d, max, min);
    printf("So nguyen lon nhat va nho nhat la %d va %d", *max, *min);
    return 0;
}
void MaxMin(int a, int b, int c, int d, int *max, int *min)
{
    *max = a;
    if (*max < b)
        *max = b;
    if (*max < c)
        *max = c;
    if (*max < d)
        *max = d;
    *min = a;
    if (*min > b)
        *min = b;
    if (*min > c)
        *min = c;
    if (*min > d)
        *min = d;
}