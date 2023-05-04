#include<stdio.h>
#include<string.h>
#include<ctype.h>
int compute(int op1, int op2,char symbol)
{
  switch(symbol)
    {
      case '+':return op1+op2;
      case '-':return op1-op2;
      case '*':return op1*op2;
      case '/':return op1/op2;
      case '%':return op1%op2;
      }
}
int main()
{
int s[30],op1,op2,res;
int top,i;
char postfix[30],symbol;
top=-1;
printf("Enter the postfix expression:");
scanf("%s",postfix);
for(i=0;i<strlen(postfix);i++)
{
    symbol=postfix[i];
    if(isdigit(symbol))
    {
      s[++top]=symbol - '0';
    }
    else
    {
        op2=s[top--];
        op1=s[top--];
        res=compute(op1,op2,symbol);
        s[++top]=res;
      }
}
 res=s[top];
 printf("The result of expression is:%d \n",res);
 return 0;
 }
   
   
   
