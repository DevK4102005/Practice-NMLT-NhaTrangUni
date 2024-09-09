#include <stdio.h>
void HoanVi(int *a, int *b);
void SXGiam(int *a, int *b, int *c, int *d, int *e);
int main()
{
    int a, b, c, d, e;
    printf("Nhap a,b,c,d,e:");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    SXGiam(&a, &b, &c, &d, &e);
    printf("%d %d %d %d %d", a, b, c, d, e);
}
void HoanVi(int *a, int *b)
{
    int tam;
    tam = *a;
    *a = *b;
    *b = tam;
}
void SXGiam(int *a, int *b, int *c, int *d, int *e)
{
    if (*a < *b)
        HoanVi(a, b);
    if (*a < *c)
        HoanVi(a, c);
    if (*a < *d)
        HoanVi(a, d);
    if (*a < *e)
        HoanVi(a, e);
    if (*b < *c)
        HoanVi(b, c);
    if (*b < *d)
        HoanVi(b, d);
    if (*b < *e)
        HoanVi(b, e);
    if (*c < *d)
        HoanVi(c, d);
    if (*c < *e)
        HoanVi(c, e);
    if (*d < *e)
        HoanVi(d, e);
}