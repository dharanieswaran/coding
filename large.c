#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a>c)
{
printf("%d /n a is greater");
}
else if(b>c)
printf("%d /n b is greater");
else
printf("%d /n c is greater");
}
