#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int *i = &arr[2], *j = &arr[6];
    int d = j-i;
    cout<<d;
    //return 0;
}
