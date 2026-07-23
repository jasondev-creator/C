include <stdio.h>
int main () {
int n,i,flag = 0;
printf("Enter your prime number:\n");
scanf("%d",&n);
if(n == 0 || n == 1)
{
flag = 1;
}
for( i = 2; i <= n; i++)
{
if (n % i == 0)
{
flag = 1;
break;

}
}
if(flag == 0)
printf("%d is not a palindrome",n);
else
{
printf("%d is a palindrome ",n);
}
return 0;
}