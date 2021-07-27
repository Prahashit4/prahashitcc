#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
char a[100],b[100];
int i,j,flag=0;
printf("\n enter string a:");
gets(a);
printf("\n enter string b:");
gets(b);
for(i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++)
{
if(a[i]!=b[j])
{
flag++;
break;
}}
if(flag==0)
printf("\n two strings are equal");
else
printf("\n two string are not equal");
return 0;
}