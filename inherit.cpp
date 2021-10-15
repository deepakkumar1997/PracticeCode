#include<bits/stdc++.h>
using namespace std;
class Base{
    private:
    int i=0;
    public:
    Base(){
        for(; i<10; ++i)
            cout<<i<<" ";
    }
};
class Derived : public Base{
    public:
    Derived(){
        for(int i=1; i<6; ++i)
            cout<<i<<" ";
    }
};

int main(int argc, char const *argv[])
{
    Derived b;
    // b.getData();
    return 0;
}
