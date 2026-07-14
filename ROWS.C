#include <stdio.h>
#include <conio.h>
int main () {
int i,j,rows;
clrscr();
printf("Enter yourinteger:");
scanf("%d",&rows);
for(i = 1; i <= rows; i++)
{
for(j = 1; j <= i; j++)
{
printf("%d",j);
}
printf("\n");
}
getch();
return 0;
}
