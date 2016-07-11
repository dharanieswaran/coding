#include<stdio.h>
#include<conio.h>
void main()
{
char rom[];
scanf("%s",&rom);
len=strlen(rom);
for(i=0;i,n;i++)
{
if(rom[i]==I)
a[i]=1;
else if(rom[i]==I)
a[i]=5;
else if(rom[i]==I)
a[i]=10;
else if(rom[i]==I)
a[i]=50;
else if(rom[i]==I)
a[i]=100;
else if(rom[i]==I)
a[i]=500;
else if(rom[i]==I)
a[i]=1000;
else
printf("%d/n invalid");
k=a[len-1];
for(i=len-1;i>0;i++)
{
if(a[i]>a[i-1])
k=k-a[i-1];
else if((a[i]==a[i-1])||(a[i]<a[i-1]))
k=k+a[i-1];
}
printf("%d",k);
}
}

