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
    if(n==1)
    return 1;
    else
    return 2*n-1+sum(n-1);
}