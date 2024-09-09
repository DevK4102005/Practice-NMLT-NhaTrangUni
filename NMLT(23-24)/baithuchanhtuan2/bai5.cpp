#include <stdio.h>
int UCLN(int a, int b);
int BCNN(int a, int b);
void NhapTuMau(int &tuso, int &mauso);
void InPS(int tuso,int mauso);
int main()
{
    int a, b, tuso, mauso;
    printf("Nhap a va b:");
    scanf("%d%d", &a, &b);
    int ucln = UCLN(a, b);
    printf("UCLN=%d\n", ucln);
    int bcnn = BCNN(a, b);
    printf("BCNN=%d\n", bcnn);
    NhapTuMau(tuso, mauso);
    InPS(tuso,mauso);
    return 0;
}
int UCLN(int a, int b)
{
    while (b != 0) // thuat toan Euclid
    {
        int temp = b; // a=b va b=a%b
        b = a % b;
        a = temp;
    }
    return a;
}
int BCNN(int a, int b)
{
    return (a * b) / UCLN(a, b);
}
void NhapTuMau(int &tuso, int &mauso)
{
    printf("Nhap tu so:");
    scanf("%d", &tuso);
    do
    {
        printf("Nhap mau so");
        scanf("%d", &mauso);
    } while (mauso == 0);
}
void InPS(int tuso,int mauso){
    printf("Phan so vua nhap la:%d/%d",tuso,mauso);
}