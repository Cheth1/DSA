#include<stdio.h>
int main()
{
int a[10],i,j,n,flag;
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter the Array elements :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The prime  numbers are:");
for(i=0;i<n;i++)
  {
  flag=0;
  for(j=2;j<a[i];j++)
    {
  if(a[i]%j==0)
  { 
  flag=1;
  break;
}
}
if(flag==0)
printf("%d \n",a[i]);
}
printf("\n");
return 0; 
}


