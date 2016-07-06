#include<stdio.h>
void main()
{
int n,r=0,j;
scanf("%d",n);
while(n>=1)
{
j=n%10;
r=r*10+j;
n=n/10;
}
printf("%d",r);
getch();
}
