#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int a,b;
    public:
    void setData(int val1,int val2)
    {
        a=val1;
        b=val2;
    }
    void setDataBySum(Complex o1,Complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void print()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.setData(1,2);
    c1.print();
    c2.setData(2,4);
    c2.print();
    c3.setDataBySum(c1,c2);
    c3.print();
    return 0;
}