#include <stdio.h>
#define maxlen 50
typedef int Mang[maxlen];
void NhapmangDoimotKhacnhau(Mang a, int &n);
void Xuatmang(Mang a, int n);
int VitriSNT(Mang a, int n);
int Checkprime(int b);
void BubbleSort(Mang a, int n);
void InsertionSort(Mang a, int n);
int main()
{
    int n;
    Mang a;
    NhapmangDoimotKhacnhau(a, n);
    printf("Mang da nhap la\n");
    Xuatmang(a, n);
    printf("\n");
    printf("Vi tri so nguyen to la:%d", VitriSNT(a, n));
    printf("\n");
    // BubbleSort(a,n);
    InsertionSort(a, n);
    printf("Mang sau khi sap xep tang dan:\n");
    Xuatmang(a, n);
    return 0;
}
void NhapmangDoimotKhacnhau(Mang a, int &n)
{
    do
    {
        printf("Nhap n:");
        scanf("%d", &n);
    } while (!(3 <= n && n <= 50));
    for (int i = 0; i < n; i++)
    {
        int flag;
        do
        {
            printf("Nhap a[%d]", i);
            scanf("%d", &a[i]);
            flag = 1;
            if (i > 0 && a[i] == a[i - 1])
            {
                printf("Hay nhap lai phan tu khac\n");
                flag = 0;
            }
        } while (!flag);
    }
}
void Xuatmang(Mang a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int VitriSNT(Mang a, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (Checkprime(a[i]) == 1)
            dem++;
        if (dem == 2)
        {
            return i;
        }
    }
    dem = 0;
    for (int j = 0; j < n; j++)
    {
        if (Checkprime(a[j]) == 1)
            dem++;
        if (dem == 1)
        {
            return j;
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (Checkprime(a[k]) == -1)
            return -1;
    }
}
int Checkprime(int b)
{
    if (b < 2)
        return -1;
    for (int i = 2; i < b; i++)
    {
        if (b % i == 0)
            return -1;
    }
    return 1;
}
void BubbleSort(Mang a, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void InsertionSort(Mang a, int n)
{
    /*Y tuong: -Chia array thanh 2 sub-array
               la sorted-array va unsorted-array
               sorted-array ngam dinh la phan tu a[0]
               unsorted-array la phan tu i=1<n
               -Gan "key" la a[i] cua unsorted-array
               va so sanh lan luot voi phan tu cuoi cung
               cua sorted-array de chen "key" vao cho thich hop*/
    int i, j, key;
    for (i = 1; i < n; i++)
    {               // Bat dau index=1 vi index=0 mac dinh la sorted array
        key = a[i]; // Luu gia tri hien tai can chen
        j = i - 1;  // Vi tri bat dau de kiem tra cac phan tu da duoc sap xep
        while (j >= 0 && a[j] > key)
        {
            /*j>=0 dam bao ta khong duyet qua phan tu cua mang
            Neu a[j]>"key" thi a[j] phai chen truoc "key"*/
            a[j + 1] = a[j]; // doi a[j] ra phia sau de tao khong gian cho "key"
            j -= 1;          // vong lap tiep tuc cho den khi tim duoc vi tri phu hop cho key hoac khi xet het phan tu cua mang
        }
        a[j + 1] = key; // sau khi tim duoc vi tri thich hop, "key" se duoc chen vao dung vi tri a[j+1]
    }
}
