#include<stdio.h>
int main()
{
int i,j,m,n,p,q,k,a[10][10],b[10][10];
static int c[10][10];
printf("Enter the size of column and row of first matrix: ");
scanf("%d%d",&n,&m);
printf("Enter the  first matrix elements");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
}
printf("Enter the size of column and row of matrix");
scanf("%d%d",&p,&q);
printf("Enter the matrix elements");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
}
if(m==p)
{
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<m;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("Multiplication of matrix \n");
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
printf("%d \t",c[i][j]);
printf("\n");
}
}
}
else
printf("Multiplication not possible");
return 0;
}





