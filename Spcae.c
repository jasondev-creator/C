#include <stdio.h>
int main () {
int i,j,space;
for(i = 1; i <= 5;i++)
{
for(space = 5; space >= i; space --)
{
printf("space\t");
}
}
for(j = 1; j <= i;j ++)
{
printf("\n");
}
return 0;
}