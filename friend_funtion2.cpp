#include<bits/stdc++.h>
using namespace std;
class Complex;//forward declaration
/*Why Forward Declaration?
The forward declaration of the Complex class in the code is necessary because the Calculator class references Complex before it is fully defined.

Detailed Explanation
The Calculator class has two member functions:
int sumRealNumber(Complex, Complex);
int sumCompxNumber(Complex, Complex);
These functions take Complex objects as parameters.
At this point, the compiler does not know what Complex is, which would result in a compilation error.
A forward declaration (class Complex;) informs the compiler that Complex is a valid class, even though its full definition will come later.
This allows the Calculator class to declare functions that use Complex as a parameter.
Why Not Just Define Complex First?
We could define Complex before Calculator, but the Calculator class needs to access private members of Complex using friend functions:

friend int Calculator::sumRealNumber(Complex, Complex);
friend int Calculator::sumCompxNumber(Complex, Complex);
If Complex were defined first, the compiler would not yet recognize Calculator::sumRealNumber and Calculator::sumCompxNumber, leading to an error.
So, we need both:
A forward declaration of Complex before defining Calculator.
A full definition of Complex after defining Calculator.*/
class Calculator{
    public:
    int add(int a,int b)
    {
        return (a+b);
    }
    //individually declaring function as frieds 
    int sumRealNumber(Complex,Complex);
    int sumCompxNumber(Complex,Complex);
};
class Complex{
    int a,b;
    public:
    friend int Calculator::sumRealNumber(Complex,Complex);
    friend int Calculator::sumCompxNumber(Complex,Complex);
    void setData(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void ComplexPrint()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int Calculator::sumRealNumber(Complex o1,Complex o2)
{
    return (o1.a+o2.a);
}
int Calculator::sumCompxNumber(Complex o1,Complex o2)
{
    return (o1.b+o2.b);
}
int main(){
    Complex o1,o2,sum;
    o1.setData(1,2);
    o1.ComplexPrint();

    o2.setData(4,5);
    o2.ComplexPrint();
    Calculator o3;
    int real=o3.sumRealNumber(o1,o2);
    cout<<real<<endl;
    int compx=o3.sumCompxNumber(o1,o2);
    sum.setData(real,compx);
    sum.ComplexPrint();
    cout<<real<<endl;
    cout<<compx<<endl;
    return 0;
}