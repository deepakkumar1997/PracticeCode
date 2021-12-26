#include<stdio.h>
int myhackFunc(int );
int main()
{
    int i,j;
    for(i=0; i<=10; i++){
        for(j<=4; j++; j=0){
            for(i=j;i<=j; i++){
                j= myhackFunc(j);
            }
        }
    }
    printf("%d",j);
}
int myhackFunc(int i){
    static int hacker = 0;
    hacker = hacker + i*i+i-i/i;
    if(hacker>=i*i+i){
        return(hacker+i-i*i);
    }
    else{
        return(hacker+i*i+i);
    }
}