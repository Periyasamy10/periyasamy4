#include<stdio.h>
void main()
{
int n,i,fact=1;

printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("The factorial of a given number is:%d",fact);
return 0;
}
