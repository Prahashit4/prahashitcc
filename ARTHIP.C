#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,d,e,f;
int *pa=&a,*pb=&b,*pc=&c,*pd=&d,*pe=&e,*pf=&f;
clrscr();
printf("\n enter a and b values:");
scanf("%d%d",pa,pb);
*pc = *pa + *pb;
printf("\n %d+%d=%d",*pa,*pb,*pc);
*pd = *pa - *pb;
printf("\n %d-%d=%d",*pa,*pb,*pd);
*pe = *pa / *pb;
printf("\n %d/%d=%d",*pa,*pb,*pe);
*pf = *pa * *pb;
printf("\n %d*%d=%d",*pa,*pb,*pf);
return 0;
}

