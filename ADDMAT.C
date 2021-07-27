#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int i,j,m,n,p,q;
int a[100][100],b[100][100],c[100][100];
clrscr();
printf("\n enter the rows and columns of matrix A:");
scanf("%d%d",&m,&n);
printf("\n enter the rows and columns of matrix B:");
scanf("%d%d",&p,&q);
if((m==q)&&(n==p))
{
printf("\n enter the elements of matrix A:\n ");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}}
printf("\n enter the elements of matrix B:\n ");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}}
printf("\n sum = \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}}
else
{
printf("\n addition is not possible");
}
return 0;
}