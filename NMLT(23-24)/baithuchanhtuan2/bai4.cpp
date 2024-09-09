#include <stdio.h>
void TimKS(int n, int *ksmax, int *ksmin);
int main()
{
    int n;
    int ksmax, ksmin;
    printf("Nhap n:");
    scanf("%d", &n);
    TimKS(n, &ksmax, &ksmin);
    printf("ki so max la:%d va ki so min la:%d", ksmax, ksmin);
    return 0;
}
void TimKS(int n, int *ksmax, int *ksmin)
{
    *ksmax = -1;
    *ksmin = 10;
    while (n > 0)
    {
        int tam;
        tam = n % 10;
        if (tam > *ksmax)
        {
            *ksmax = tam;
        }
        if (tam < *ksmin)
        {
            *ksmin = tam;
        }
        n = n / 10;
    }
}
