#include <stdio.h>
void ktDoixung(int n);
int main(){
int n;
printf("Nhap n:");
scanf("%d",&n);
ktDoixung(n);
return 0;
}

void ktDoixung(int n){
   //B1: TAO SO DAO NGUOC CUA SO N
   int reversedNumber=0,original=n;
   while(n>0){
    reversedNumber=reversedNumber*10+n%10;
    n/=10;
   }
   //B2: SO SANH SO DAO NGUOC VOI SO BAN DAU
   if (reversedNumber==original) printf("Day la so doi xung");
   else printf("Day khong phai so doi xung");

}