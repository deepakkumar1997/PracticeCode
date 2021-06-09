#include<stdio.h>
void factorialPointer(int n,int *p)
{
    int i;
    *p=1;
    for(i=1;i<=n;i++)
    {
        *p*=i;
    }
}
int main()
{
    int var,fact;
    printf("Enter an integer to find its factorial : ");
    scanf("%d",&var);
    factorialPointer(var,&fact);
    printf("Factorial of %d is %d \n",var,fact);
    return 0;
}