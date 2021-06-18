#include<stdio.h>
unsigned long long power(int num, int pow)
{
    unsigned long long res=1;
    if(pow!=0)
    {
        res*=num;
        pow--;
        power(num,pow);
    }
    else
    return res;
}
int main()
{
    int n,p;
    printf("<<<<<--For calcluating power of a number, please enter required value-->>>>>\n");
    printf("Enter an integer number : ");
    scanf("%d",&n);
    printf("Enter respective power : ");
    scanf("%d",&p);
    printf("*********************************************************************\n");
    printf(" ~~~~~~~~~~~~~~~ %d to the power %d is %llu ~~~~~~~~~~~~~~~\n",n,p,power(n,p));
    printf("*********************************************************************\n");
    return 0;
}