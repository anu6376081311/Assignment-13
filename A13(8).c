#include<stdio.h>
int fterm(int x);
int main()
{
int x;
printf("Enter a number :");
scanf("%d",&x);
for(int i=0;i<x;i++)
{
    printf("%d, ", fterm(i));
}
return 0;
}
int fterm(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
    return 1;
    }
    else {
    return fterm(n-1)+fterm(n-2);
    }
    
}