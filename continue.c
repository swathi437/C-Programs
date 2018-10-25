#include<stdio.h>
main()
{
int i,n,sum=0;
for(i=0;i<=10;i++)
{
printf("Enter a number:");
scanf("%d",&n);
if(n<0)
{
continue;
}
sum+=n;
}
printf("sum=%d",sum);
}
