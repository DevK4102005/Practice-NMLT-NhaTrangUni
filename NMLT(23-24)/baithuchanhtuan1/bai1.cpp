#include <stdio.h>
int sum(int a);
int kt(int a);
int main()
{
    int a;
    printf("Nhap a:");
    scanf("%d", &a);
    int temp = sum(a);
    printf("%d\n", temp);
    if (kt(a) == 1)
        printf("chia het cho 3");
    else
        printf("khong chia het cho 3");
}
int sum(int a)
{
    int t = 0;
    while (a > 0)
    {
        t += a % 10;
        a = a / 10;
    }
    return t;
}
int kt(int a)
{
    if (sum(a) % 3 == 0)
        return 1;
    else
        return 0;
}