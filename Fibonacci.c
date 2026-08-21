#include <stdio.h>
int main() {
int a = 0;
int b = 1;
int next;
int i;
int terms;
printf("number of terms:\n");
scanf("%d",&terms);
terms = a + b;
for(i = 0; i <=20; i++)
{
printf(" %d\t",a);
next = a + b ;
a = b;
b = next;
}
return 0;
}