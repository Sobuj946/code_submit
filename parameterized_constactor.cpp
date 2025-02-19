#include<bits/stdc++.h>
using namespace std;
class Myclass
{
    int x;
    public:
    Myclass(int value)
    {
        x=value;
        cout<<"The value is :"<<x<<endl;
    }
};
int main(){
    Myclass obj(10);
    
    return 0;
}