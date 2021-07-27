#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,j,m,n,h,p,q;
int a[10][10],b[10][10],c[10][10];
clrscr();
printf("\n product of two matries");
printf("\n enter the rows and columns of matrix A:");
scanf("%d%d",&m,&n);
printf("\n enter the elements of matrix A: \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("enter the element a%d%d:",i,j);
scanf("%d",&a[i][j]);
}}
printf("\n enter the rows and columns of matrix B:");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("\n product is not possible");
}
else
{
printf("\n enter the elements of matrix B: \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("enter the element b%d%d:",i,j);
scanf("%d",&b[i][j]);
}}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(h=0;h<p;h++)
{
c[i][j]=c[i][j]+a[i][h]*b[h][j];
}}}
printf("\n the product : \n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
}
return 0;
}



