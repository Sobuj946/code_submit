#include<bits/stdc++.h>
using namespace std;
class Myclass
{
    int *x;
    public:
    Myclass(int value);
    Myclass();
    ~Myclass();
    void display();
    
};
Myclass::Myclass(int value)
{
    x=new int (value);
    cout<<"The value is :"<<x<<endl;
}
Myclass::~Myclass()
{
    delete x;
    cout<<*x<<endl;
    cout<<"Destructor :memory released!"<<endl;
}
Myclass::Myclass()
{
    cout<<"Default constructor is called\n";
}
void Myclass::display()
{
    cout<<"display the function\n";
}
int main(){
    Myclass obj(10);
    Myclass o;
    o.display();
    return 0;
}