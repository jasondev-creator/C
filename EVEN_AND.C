#include <stdio.h>
#include <conio.h>
int main () {
int i;
printf("EVEN NUMBERS:\n");
for(i = 1; i <= 20; i++)
{
if( i % 2 == 0 )
{
printf("%d\n",i);
}
}
printf("ODD NUMBERS: \n");
for(i = 1; i <= 20; i++)
{
if(i % 2 != 0)
{
printf("%d\n",i);
}
}
getch();
return 0;
}