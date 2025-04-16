//default constactor
#include<bits/stdc++.h>
using namespace std;
class Myclass
{
    public:
    int a,b;
    Myclass()
    {
        a=0;
        b=0;
        cout<<"default constactor\n";
    }
   
    Myclass(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};
Myclass::Myclass(int x)
//overloading constructor same function
// and different parameter
{
    x=a;
    b=0;
   
}
int main(){
    Myclass M(2,4);
    Myclass m;        // default constructor
    Myclass m2(5);  
    M.display();      // Output: 1 2
    m.display();      // Output: 0 0
    m2.display();    
    
    return 0;
}