#include<stdio.h>
int fact(int n);
int main()
{
    int x,s;
    printf("Enter a number :");
    scanf("%d",&x);
    printf("The sum of n natural numbers is %d",fact(x));
    return 0;
}
int fact(int n)
{
    
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}