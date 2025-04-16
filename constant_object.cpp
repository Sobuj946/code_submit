#include<bits/stdc++.h>
using namespace std;
class MyclassDemo{
    public:
    void display1()const;
    void display2();
};
void MyclassDemo::display1()const{
    cout<<"I am a constant object called\n";
    //constant function call this function
}
void MyclassDemo::display2(){
    cout<<"I am a non-constant object called\n";
    //non-constant object call this function
}
int main(){
    const MyclassDemo d;
    //constant object always call the constant function 
    //and non-constant function always call non-constant function
    d.display1();
    MyclassDemo o;
    o.display2();
    
    return 0;
}