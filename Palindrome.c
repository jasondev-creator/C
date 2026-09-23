#include <stdio.h>
int main() {
int n,reversed = 0,sum = 0,remainder,original;
printf("Enter your integer:");
scanf("%d",&n);
original = n;
while (n > 0)
{
remainder = n % 10;
reversed = reversed * 10 + remainder;
n /= 10;
}
printf("sum:%d",sum);
printf("reverse of the digits:%d",reversed);
if(original == reversed)
{
printf("Its an palindrome %d\n",original);
}
else
{
printf("Its not a palindrome %d\n",original);
}
return 0;
}
