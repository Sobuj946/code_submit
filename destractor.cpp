#include<bits/stdc++.h>
using namespace std;
class Myclass
{
    int *x;
    public:
    Myclass(int value)
    {
        x=new int (value);
        cout<<"The value is :"<<x<<endl;
    }
    
    ~Myclass()
    {
        delete x;
        cout<<*x<<endl;
        cout<<"Destructor :memory released!"<<endl;
    }
};
int main(){
    Myclass obj(10);
    
    return 0;
}