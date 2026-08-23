#include <stdio.h>
#include <string.h>
int main () {
char str1[100],str2[100],copy[100],concat[200];
printf("Enter the first string:");
scanf("%s",str1);
printf("Enter the second string:");
scanf("%s",str2);
// length
printf("length of the first string:%d\n",(int)strlen(str1));
printf("length of the second string:%d\n ",(int)strlen(str2));
// copy
strcpy(copy,str1);
printf("copy of the string:%s\n",copy);
// concat 
strcpy(concat,str1);
strcat(concat,str2);
printf("concat of the string:%s\n",concat
);
// compare
if(strcmp(str1,str2) == 0)
{
printf("the string are equal.\n");
}
else
{
printf("the strings are not equal.\n");
}
return 0;
}


