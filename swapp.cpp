#include<stdio.h>
#include<conio.h>
int main()
{int n1,n2;
float result;
char ch;
printf("enter first number:");
scanf("%d",&n1);
printf("enter second number:");
scanf("%d",&n2);
printf("choose operation to perform(+,-,*,/,%):");
scanf("%c",&ch);
result=0;
switch(ch)
{case '+':
result=n1+n2;
break;
case '-':
result=n1-n2;
break;
case'*':
result=n1*n2;
break;
case'/':
result=n1/n2;
break;
case'%':
result=n1%n2;
break;
default:
printf("invalid operation.\n");
}
printf("result: %d %c %d=%f\n",n1,ch,n2,result);
return 0;
}
