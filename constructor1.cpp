#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int a,b;
    public:
    void PrintComplex()
    {
        cout<<"The complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }
    Complex(void);//constructor declaration
    /*Constructor is a special member function with the same name as of the class .
    It is used to initialize the objects of its class.
    It is automatically invoked whenever an object is created
    */
    
};
Complex::Complex(void)// This is a default constructor it takes no parameter
{
    a=10;
    b=10;
    // cout<<"hello world\n";//this cout is run
}
int main(){
    Complex c1,c2;
    c1.PrintComplex();
    c2.PrintComplex();
    
    return 0;
}
/*
Charateristics of constructor
1.It should be declared in the public section of the class
2.They are automatically invoked whenever the object created
3They cannot return value and do not have return types
4.It can have default arguments
5.We cannot refer to their address
6.

*/