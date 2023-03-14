#include<stdio.h>
int hcf(int a,int b);
int main()
{
int a,b;
printf("Enter two number :");
scanf("%d %d",&a,&b);
printf("The the hcf is %d",hcf(b,a%b));
return 0;
}
int hcf(int a,int b)
{
    if(b==0)
    return a;
     hcf(b,a%b);
}