#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i,n;
int *arr;
clrscr();
printf("\n Enter the number of elements: ");
scanf("%d",&n);
arr = (int*)malloc(n * sizeof(int));
if(arr == NULL)
{
printf("\n memory allocation failed");
exit(0);
}
for(i=0;i<n;i++)
{
printf("\n enter the value %d of the array: ",i);
scanf("%d",&arr[i]);
}
printf("\n the array contains \n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
