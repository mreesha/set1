#include<stdio.h>
int main()
{
char ch;
scanf("%d",&ch);
if((ch>='a'||ch<='z')&&(ch>='0'||ch<='9'))
{
printf("alphabet");
}
else
{
printf("not");
}
return 0;
}
