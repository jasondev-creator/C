#include <stdio.h>
#include <string.h>
int main () {
char str1[100],str2[100],copy[100],concat[200];
printf("Enter first string:");
scanf("%s",str1);
printf("Enter second string:");
scanf("%s",str2);
printf("\nLength of first string:%d",(int)str len(str1));
printf("\nLength of second string:%d",(int)str len(str2));
strcpy(concat,str1);
strcpy(concat,str2);
printf("\nconcatenated string:%s",concat);
if(strcmp(str1,str2) == 0)
{
printf("\n The strings are equal.");
}
else
{
printf("\n The strings are not equal.");
}
return 0;
}


}