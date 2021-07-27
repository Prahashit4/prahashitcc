#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,x,i,sum=0;
clrscr();
printf("\n geometric progression");
printf("\n enter the limit:");
scanf("%d",&n);
printf("\n enter the value of x:");
scanf("%d",&x);
if(x<0||n<0)
{
printf("\n illegal value");
}
else
{
for(i=0;i<=n;i++)
sum = sum + pow(x,i);
printf("\n sum = %d",sum);
}
return 0;
}