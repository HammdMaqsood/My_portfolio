#include<stdio.h>
long factorial(int n);
int main()
{
    int n;
    printf("Enter Number to find factorial = ");
    scanf("%d",&n);
    printf("\nThe Factorial Of given number is = %i",factorial(n));
}
long factorial(int n)
{
    if(n==1)return 1;
    else
    {
        return n*factorial(n-1);
    }
}



