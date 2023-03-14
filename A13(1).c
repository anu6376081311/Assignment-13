#include<stdio.h>
int sum(int n);
int main()
{
    int x,s;
    printf("Enter a number :");
    scanf("%d",&x);
    s=sum(x);
    printf("The sum of n natural numbers is %d",s);
    return 0;
}
int sum(int n)
{
    int Sum=0;
    if(n==1)
    return 1;
    Sum =Sum+sum(n-1);
    return (Sum+n);
}