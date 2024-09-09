#include <stdio.h>
int Demkschan(int n);
int VTkschanDautien(int n);
int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    printf("So ks chan la %d\n", Demkschan(n));
    if(VTkschanDautien(n)==-1) printf("Khong co ks chan");
    else printf("vi tri ks chan dau tien la:%d",VTkschanDautien(n));
    return 0;
}
int Demkschan(int n)
{
    int count = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0 && digit != 0) count++;
        n /= 10;
    }
      return count;
}
int VTkschanDautien(int n){
/*CAC BUOC GIAI THEO THU TU
B1:DAO NGUOC SO N BAN DAU
B2:XET TUNG KI SO DE TIM RA KI SO CHAN DAU TIEN*/
    int reversedNumber=0,digit, position=1;
    while(n>0){
        reversedNumber=reversedNumber*10+n%10;//dao nguoc so n ban dau
        n/=10;
    }
    while(reversedNumber>0){
        digit=reversedNumber%10;//tach tung ki so de xet 
        if(digit%2==0&&digit!=0) return position;//set tung ki so 
        reversedNumber/=10;
         position++;
    }
    if (Demkschan(n)==0) return -1;
}