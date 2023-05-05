#include<stdio.h>
#include<stdlib.h>
void push(int*,int);
void pop(int*,int);
void display(int*,int);
int top=-1;
int main()
{
int n,*s,ch;
printf("Enter the size of stack:");
scanf("%d",&n);
s=(int*)malloc(n* sizeof (int));
while(1)
{
printf(".....MENU......\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
  case 1:push(s,n);
  break;
  case 2:pop(s,n);
  break;
  case 3:display(s,n);
  break;
  case 4:exit(0);
  default:printf("Enter your choice:");
  }
  }
  return 0;
  }
  
void push(int s[],int n)
{
  if(top==n-1)
  {
    printf("Stack overflow\n");
    return;
  }
  printf("Enter the element to insert: ");
  scanf("%d",&s[++top]);
  return;
}
  
void pop(int s[],int)
  {
  if(top==-1)
  {
    printf("stack is underflow\n");
    return;
  }
  printf("The deleted element is %d",s[top--]);
  return;
 }
  
void display(int s[],int n)
  {
  int i;
  if(top==-1)
  {
  
  printf("Stack is underflow\n");
  return;
  }
  printf("The stack elements are:\n");
  for(i=top;i>-1;i--)
  printf("%d\n",s[i]);
  return;
  }

  
  
