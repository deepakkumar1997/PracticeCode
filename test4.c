#include<stdio.h>

int lShift(int a, int b){
    return a<<b;
}
int andOpr(int a, int b){
    return a&b;
}
int negation(int a){
    return ~a;
}
int main(int argc, char const *argv[])
{
    unsigned n=7;
    int i=3,j=2;
    unsigned x=4;
    unsigned t = lShift(10, j) - 10;
    unsigned temp = andOpr((andOpr(n, lShift(t,i))), negation(lShift(x,i)));
    printf("%d", negation(temp));
    return 0;
}
