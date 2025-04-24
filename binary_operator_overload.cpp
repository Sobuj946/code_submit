#include<bits/stdc++.h>
using namespace std;
class A{
    int x;
    public:
    A(){

    }
    A(int a)
    {
        x=a;
    }
    void print()
    {
        cout<<x<<endl;
    }
    void operator +(A);
    
};
void A:: operator+(A p)
{
    int m=x+p.x;
    cout<<m<<endl;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    A a1(10),a2(10);
    a1+a2;
    return 0;
}