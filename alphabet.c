#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
scanf("%c",&ch);
if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z'))
{
printf("%d char is alphabet");
}
else
{
printf("%d char is not alphabet");
}
}
