#include<stdio.h>
#include<conio.h>
void main()
{
int num,rev=0;
scanf("%d",&num);
while(num!=0)
{
rev=rev*10;
rev=rev+num%10;
num=num/10;
}
if(rev==num)
{
printf("%d /n num is palindrome");
}
else
{
printf("%d /n num is not palindrome");
}
}

