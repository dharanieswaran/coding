#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fact=1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
fact=fact*i;
}
printf("%d /n factorial is",fact);
}
