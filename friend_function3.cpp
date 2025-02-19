#include<bits/stdc++.h>
using namespace std;
class Y;
class X{
    int data;
    public:
    friend void add(X,Y);
    void setData(int value)
    {
        data=value;
    }
};
class Y{
    int num;
    public:
    friend void add(X,Y);
    void setData(int value)
    {
        num=value;
    }
};
void add(X o1,Y o2)
{
    cout<<"summing data of X and Y gives me"<<o1.data+o2.num<<endl;
};
int main(){
X a1;
Y b2;
a1.setData(4);
b2.setData(8);
add(a1,b2);
    
    return 0;
}