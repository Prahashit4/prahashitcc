#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int rem,n,rev=0,num;
clrscr();
printf("\n enter number:");
scanf("%d",&n);
n = num;
while(num != 0)
{
rem = num%10;
rev = rev*10+rem;
num = num/10;
}
if(num == rev)
printf("\nit is a palindrome\n");
else
printf("\nit is not a palindrome\n");
return 0;
}