#include <stdio.h>
int main() {
int a = 0;
int b = 1;
int next;
int i;
for(i = 0; i <=5; i++)
{
next = a + b;
printf("%d",next);
a = b;
b = next;
}
return 0;
}
