#include <stdio.h>
int main () {
float num1,num2,result;
char operator;
printf("gigchad calculator\n");
printf("-----------------\n");
printf("Enter the values of num1,num2:\n");
scanf("%f %f",&num1,&num2);
printf("Enter your Operators(+,-,*,/):\n");
scanf("%s",&operator);
switch(operator) {
case '+':
result = num1 + num2;
printf("Result of the values:%.2f\n",result);
break;
case '-':
result = num1 - num2;
printf("Result of the values:%.2f\n",result);
break;
case '*':
result = num1 * num2;
printf("Result of the values:%.2f\n",result);
break;
case '/':
if( num2 == 0)
{
printf("Error number is not divisible by zero.\n");
}
else
{
result = num1 / num2;
printf("Result of the values:%.2f\n",result);
}
default:
printf("ERROR INAVALID OPERATOR MAN.\n");
}
getch();
return 0;
}

