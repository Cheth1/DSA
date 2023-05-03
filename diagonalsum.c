#include<stdio.h>
int main()
{
int n,m,i,j,sum,a[10][10];
printf("Enter the size of column and row of a matrix: ");
scanf("%d%d",&n,&m);
printf("Enter the matrix elements: \n");
for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
    scanf("%d",&a[i][j]);
  }
}
sum=0;
for(i=0;i<m;i++)
{

for(j=0;j<m;j++)
{
  if(i==j)
  { 
    sum=sum+a[i][j];
  }
}
}
printf("The sum of diagonal elements is %d\n",sum);
}

