#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,f;
clrscr();
printf("enter two numbers:\n");
scanf("%d%d",&a,&b);
c = a+b;
d = a-b;
e = a*b;
f = a/b;
printf("sum = %d\n",c);
printf("subtraction = %d\n",d);
printf("multiplication = %d\n",e);
printf("division = %d\n",f);
return 0;
}