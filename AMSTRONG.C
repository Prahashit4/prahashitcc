#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int num,n,rem,sum = 0;
clrscr();
printf("\nenter number:");
scanf("%d",&num);
n = num;
while(n>0)
{
rem = n%10;
sum+=pow(rem,3);
n=n/10;
}
if(sum==num)
printf("\n %d is an armstrong number ",num);
else
printf("\n %d is not an armstrong number ",num);
return 0;
}
