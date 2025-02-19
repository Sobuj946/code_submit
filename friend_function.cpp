#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
    friend Complex sumComplex(Complex o1,Complex o2);
    void setData(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
   void printCmpx()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1,Complex o2)
{   Complex o3;
  o3.setData((o1.a+o2.a),(o1.b+o2.b));
  return o3;
};

int main(){
    Complex o1,o2,sum;
    o1.setData(1,2);
    o1.printCmpx();

    o2.setData(4,5);
    o2.printCmpx();
    sum=sumComplex(o1,o2);
    sum.printCmpx();
    return 0;
}