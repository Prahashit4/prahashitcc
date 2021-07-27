#include<stdio.h>
#include<conio.h>
main()
{
char str[100];
int len,i;
clrscr();
printf("\n enter the string: ");
gets(str);
len=0;
i=0;
while(str[i]!='\0')
{
len++;
i++;
}
printf("\n lenght of the string is %d",len);
return 0;
}