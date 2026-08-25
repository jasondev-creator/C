#include <stdio.h>
int main () {
int marks[5];
int i,sum = 0;
float average;
printf("Enter the 5 elememts:\n");
for( i = 0; i < 5; i++)
{
scanf("%d",&marks[i]);
sum = sum + marks[i];
}
average = sum / 5.0;
printf("Average of the sum:%.2f\n",average);
return 0;
}