#include<stdio.h>
#include<conio.h>
int main()
{
int number;
printf("\nenter the number");
scanf("%d",&number);
if(number>0)
{
printf("given number is positive");
}
else if(number<0)
{
printf("given number is nagative");
}
else
{
printf("given number is zero");
}


return 0;
}
