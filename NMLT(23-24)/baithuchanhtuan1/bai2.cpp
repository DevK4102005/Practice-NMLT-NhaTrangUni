#include <stdio.h>
int kt(char a);
char phanLoai(char a);
int main()
{
    char kiemtra;
    printf("Nhap vao ki tu de kiem tra:");
    scanf("%c", &kiemtra);
    char temp = phanLoai(kiemtra);
    printf("%c", temp);
    return 0;
}
int kt(char a)
{

    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
        return 1;
    else
        return 0;
}
char phanLoai(char a)
{
    if (kt(a) == 1)
    {
        if (a >= 'A' && a <= 'Z')
            return 'h';
        else if (a >= 'a' && a <= 'z')
            return 't';
    }
    else
        return '1';
}