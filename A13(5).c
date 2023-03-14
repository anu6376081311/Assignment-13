#include<stdio.h>
int digit(int x);
int main()
{
int x;
printf("Enter a number :");
scanf("%d",&x);
printf("The sum of digits is %d",digit(x));
return 0;
}
int digit(int n)
{
    if(n==1)
    return 1;
    return n%10 + digit(n/10);
}