#include <stdio.h>
int main () {
int jason_mood;
scanf("%d",jason_mood);
switch(jason_mood)
{
case 1:
printf("boring ahh moment");
break;
case 2:
printf("coding time");
break;
case 3:
printf("study time");
break;
case 4:
printf("workout and jogging");
break;
default:
printf("hmm jason");
}
getch();
return 0;
}