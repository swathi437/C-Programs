#include<stdio.h>
main()
{
int a,b,c;
printf("Enter the values of a:\n");
scanf("%d",&a);
printf("Enter the values of b:\n");
scanf("%d",&b);
printf("Enter the values of c:\n");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("a is largest");
}
else
{
if(b>a&&b>c)
{
printf("b is largest");
}
else
{
printf("c is largest");
}
}
}

