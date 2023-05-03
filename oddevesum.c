#include<stdio.h>
int main()
{
int a[10],n,i,esum,osum;
printf("Enter the size of the array : ");
scanf("%d",&n);
printf("Enter the array elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
esum=0;
osum=0;
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
esum=esum+a[i];
}
else
{
osum=osum+a[i];
}
}
printf("The even sum : %d\n",esum);
printf("The odd sum : %d\n",osum);
return 0;
}

