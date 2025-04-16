#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
    string name;
    int id;
    Employee(string name,int id)
    {
        this->name=name;
        this->id=id;
    }
};
class Doctor:public Employee
{
    public:
    string specialization;
    Doctor(string name,int id,string specialization):Employee(name,id)
    {
        this->specialization=specialization;
    }
    void display()
    {
        cout<<"Name:"<<name<<"\nId:"<<id<<"\nShifting details:"<<specialization<<endl;
    }
    void prescribeMedication()
    {
        cout<<"Doctor prescribed"<<endl;
    }
};
class Nurse: public Employee
{
    public:
    string shifting;
    Nurse(string name,int id,string shifting):Employee(name,id)
    {
        this->shifting=shifting;
    }
    void display()
    {
        cout<<"Name:"<<name<<"\nId:"<<id<<"\nShifting details:"<<shifting<<endl;
    }
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Doctor d("roton",37489,"health");
    d.display();
    d.prescribeMedication();
    Nurse o("Korim",587,"Night");
    o.display();

    
    return 0;
}