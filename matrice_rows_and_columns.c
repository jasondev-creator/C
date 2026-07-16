#include <stdio.h>
int main () {
int i,j,rows,columns;
printf("Enter your integer:");
scanf("%d %d", &rows, &columns);
for(i = 0; i <= rows; i ++)
{
for(j = 0; j <= columns; j++)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}
