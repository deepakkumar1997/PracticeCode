#include<bits/stdc++.h>
using namespace std;
int main()
{
    static int i = 0;
    if(i<10){
        cout<<++i<<" ";
        main();
    }
    return 0;
}
