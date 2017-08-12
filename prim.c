#include<stdio.h>
int main()
{
int n,i,m;
int prim=0;
printf("enter the number >2");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
prim=1;
}
}
if(prim==0)
{
printf("given number is prime ");
}
else
{
printf("given number is not prime");
}
return 0;
}
