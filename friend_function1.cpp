#include <bits/stdc++.h>
using namespace std;
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealNumber(Complex, Complex); // definition
    int sumCompxNumber(Complex, Complex);
};
class Complex
{
    int a, b;
    friend int Calculator::sumRealNumber(Complex, Complex);
    friend int Calculator::sumCompxNumber(Complex, Complex);

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printCmpx()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
int Calculator::sumRealNumber(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumCompxNumber(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setData(1, 2);
    o2.setData(3, 5);
    Calculator o3;
    int res = o3.sumRealNumber(o1, o2);
    cout << res << endl;
    res = o3.sumCompxNumber(o1, o2);
    cout << res << endl;

    return 0;
}