#include <stdio.h>
int main () {
int i,j,prime;
printf("prime numbers: %d\n");
for( i = 2; i <= 100; i++)
{
prime = 1;
for( j = 2;j < 1;e j++)
{
if( i % 2 == 0)
{
prime = 0;
break;
}
}
}
if(prime == 1)
{
printf("%d\n",i);
}
getch();
return 0;
}