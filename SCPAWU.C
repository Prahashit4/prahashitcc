#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char a[10];
char b[10];
clrscr();
gets(a);
gets(b);
int r;
r=strcmp(a,b);
if(r==0)
printf("\n two string are equal");
else
printf("\n two are not equal");
return 0;
}