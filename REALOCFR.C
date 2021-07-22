#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *str;
clrscr();
str =(char *)malloc(10);
if(str == NULL)
{
printf("\n memory could not be allocated");
exit(1);
}
strcpy(str,"hi");
printf("\n STR = %s",str);
str=(char *)realloc(str,20);
if(str==NULL)
{
printf("\n Memory could not be reallocated");
exit(1);
}
printf("\n STR size modified.\n");
printf("\n STR = %s ",str);
strcpy(str,"hi there");
printf("\n STR = %s",str);
free(str);
return 0;
}