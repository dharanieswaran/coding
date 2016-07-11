#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,temp;
char str[100];
gets(str);
i=0;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]-str[j];
str[j]=temp;
i++;
j--;
}
printf("%s",str);
}
