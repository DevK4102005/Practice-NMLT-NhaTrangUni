#include <stdio.h>
void ListKSle(int n);
int KSlemax(int n);
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    printf("Cac ki so le:");
    ListKSle(n);
    int kslemax = KSlemax(n);
    if (kslemax != 0)
        printf("\nki so le max la:%d", KSlemax(n));
    return 0;
}
void ListKSle(int n)
{
    while (n > 0)
    {
        int digit;
        digit = n % 10;
        if (digit % 2 != 0 && digit != 0)
            printf("%d\t", digit);
        n /= 10;
    }
}
int KSlemax(int n)
{
    int digit, maxdigit = 0;
    while (n > 0)
    {
        digit = n % 10;
        if (digit > maxdigit & digit % 2 != 0)
        {
            maxdigit = digit;
        }
        n /= 10;
    }
    return maxdigit;
}
