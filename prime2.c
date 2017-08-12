#include<stdio.h>
int main()
{
int r1,r2,i,m,j;
int prim;
printf("enter the range");
scanf("%d%d",&r1,&r2);
for(i=r1;i<=r2;i++)
{
prim=0;
m=i/2;
for(j=2;j<=m;j++)
 {
 if(i%j==0)
  {
    prim=1;
   }
 }
if(prim==0)
{
printf("%d",i);
}

}

return 0;
}
