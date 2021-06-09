#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int var;
    printf("Enter an integer to find its factorial : ");
    scanf("%d",&var);
    printf("Factorial of %d is %d\n",var,factorial(var));
    return 0;
}