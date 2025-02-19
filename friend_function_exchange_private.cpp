#include <bits/stdc++.h>
using namespace std;
class C2;
class C1
{
    int a;

public:
    friend void exchange(C1 &, C2 &);
    void setaData(int n1)
    {
        a = n1;
    }
    void print()
    {
        cout << "The value before the value c1 is" << a << endl;
    }
    void display()
    {
        cout << "The value after the value c1 " << a << endl;
    }
};
class C2
{
    int b;

public:
    friend void exchange(C1 &, C2 &);
    void setaData(int n1)
    {
        b = n1;
    }
    void print()
    {
        cout << "The value before the value c2 " << b << endl;
    }
    void display()
    {
        cout << "The value after the value c1 " << b << endl;
    }
};
void exchange(C1 &o1, C2 &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main()
{
    C1 o1;
    o1.setaData(4);
    o1.print();
    C2 o2;
    o2.setaData(5);
    o2.print();
    exchange(o1, o2);
    cout << "After the value change will be :"<<endl;
    o1.display();
    o2.display();
    return 0;
}