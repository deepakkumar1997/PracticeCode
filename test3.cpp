#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int temp1 =0 , temp2 = 0;
    int a=0, b=0, res =0;
    int arr[10] = {1,4,6,-2,3,-9,0,-3,5,1};
    int i, n = *(&arr+1)-arr;
    for(i = 0; i<n; ++i){
        temp1 = arr[i]+temp1;
    if(temp2<temp1){
        temp2 = temp1;
        a =res;
        b = i;
    }
    if(temp1<0){
        temp1 =0;
        res = i+1;
    
    }
    }
    cout<<(b-a+1);
    return 0;
}
