#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is largest number",a);
}
else if(b>c)
{
printf("%d is largest number",b);
}
else
{
printf("%d is largest number",c);
}

return 0;
}
