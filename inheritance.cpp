#include<bits/stdc++.h>
using namespace std;
class Base_class{
    public:
    void parent()
    {
        cout<<"Parent class call\n";
    }
};
class Derive_class:public Base_class{
    public:
    void child(){
        cout<<"inherit to base class\n";
    }
};
int main(){
    Derive_class o1;
    o1.parent();
    o1.child();
    
    return 0;
}