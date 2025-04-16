#include<bits/stdc++.h>
using namespace std;
class B;
class A
{
    private:
    int a;
    int b;
    public:
    A():a(2),b(5)
    {

    }
    friend void sum(A,B);

};
class B
{
    int a;
    int b;
    public:
    B():a(4),b(5){

    }
    friend void sum(A,B);
};
void sum(A x,B y)
{
    cout<<x.a+y.a<<"+";
    cout<<x.b+y.b<<"i"<<endl;
}
int main(){
    A a;
    B b;
    sum(a,b);

    
    return 0;
}