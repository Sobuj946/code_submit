#include<bits/stdc++.h>
using namespace std;
class Myclass
{
    int x;
    public:
    Myclass(int value)//parameter 
    {
        x=value;
    }
    Myclass(const Myclass &obj)
    {
        x=obj.x;
    }
    int getX()
    {
        return x;
    }
};
int main(){
    Myclass obj1(10);
    Myclass obj2=obj1;
    cout<<obj1.getX()<<" "<<obj2.getX()<<endl;
    
    return 0;
}