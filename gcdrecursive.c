#include<stdio.h>
int gcd(int,int);
void main() 
{
  int m,n,hcf,lcm,temp=0;
  printf("Enter two integers:\n");
  scanf("%d%d",&m,&n);
  if (m<n)
  {
      temp=m;
      m=n;
      n=temp;
  }
  hcf=gcd(m,n);
  lcm=(m*n)/hcf;
  printf("\n The GCD of 2 numbers is %d  :\n",hcf);
  printf("\n The lcm of e numbers is  %d :\n",lcm);
  return;
  }
int gcd(int m,int n)
{
if(n==0)
  return m;
else
  return (n,m%n);
}
