#include<stdio.h>
unsigned long long power(int num,int pow)
{
    unsigned long long res=1;
    while(pow!=0)
    {
        res*=num;
        pow--;
    }
    return res;
}
int main()
{
    int n,p;
    printf("Enter an integer : ");
    scanf("%d",&n);
    printf("Enter power value of number : ");
    scanf("%d",&p);
    printf("Value of %d to the power %d is %llu\n",n,p,power(n,p));
    return 0;
}
