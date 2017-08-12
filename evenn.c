#include<stdio.h>
int main()
{
int r1,r2;
int i;
printf("enter the range");
scanf("%d%d",&r1,&r2);
for(i=r1;i<=r2;i++)
{
  if(i%2==0)
  {
  printf("%d ",i);
  }
}
return 0;
}
