#include <stdio.h>
int main(){
int a;
int b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
if ( a > b)
{
    printf("Is Greater Than%d",a);
}
else{
    printf("Is Greater Than %d",b);
}
return 0;
}
