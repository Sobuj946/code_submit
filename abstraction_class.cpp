#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
    int number;
    string colour;
    public:
    virtual void show(string s)=0;//
    protected:
    int getNumber(void);
    string getColour();
};
int Vehicle:: getNumber()
{
    cout<<"Enter the car number:";
    cin>>number;
    cin.ignore();
    return number;
}
string Vehicle:: getColour()
{
    cout<<"Enter the car colour:";

    getline(cin,colour);
    
    return colour;
}
class TLV:public Vehicle
{
    public:
   void show(string s) override{
        int number=getNumber();
        string colour=getColour();
        cout<<"The car number is:"<<number<<endl;
        cout<<"The car colour is:"<<colour<<endl;
        cout<<"The car string is:"<<s<<endl;

    }
    
};

int main(){
    Vehicle *a=new TLV();
    a->show("hi");
    TLV b;
    b.show("hello");
    Vehicle * car=new TLV();
    cout<<car<<endl;
    Vehicle * car1=new TLV();
    cout<<car1<<endl;
    Vehicle *carC;
    TLV car2;
    carC=&car2;
    cout<<carC<<endl;   
    return 0;
}