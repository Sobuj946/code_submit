#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int x,y;
    public:
    Complex(){
    }
    // Complex(int a)
    // {
    //     x=y=a;
    // };
    Complex(int real,int imag)
    {
        x=real;
        y=imag;
    }
    friend Complex sum(Complex,Complex);
    friend void show(Complex); 
};
Complex sum(Complex a,Complex b)
{
    Complex c3;
    c3.x=a.x+b.x;
    c3.y=a.y+b.y;
    return c3;
}
void show(Complex c2)
{
    cout<<c2.x<<" + "<<c2.y<<"i"<<endl;
}
int main(){
    // Complex x();
    // Complex y(3);
    Complex z(2 ,4);
    Complex p(4,6);
    Complex q=sum(z,p);

   
    show(q);

    
    return 0;
}