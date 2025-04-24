#include<bits/stdc++.h>
using namespace std;
class Person
{
   protected:
    int age;
    string name;
    Person(int age,string name)
    {
        this->age=age;
        this->name=name;
    }
    void display()
    {
        cout<<"The person name is:"<<name<<" "<<"The person age is:"<<age<<endl;      
    }
};
class Student:public Person
{   private:
    float grade;
    public:
    Student(int age,string name,float grade):Person( age, name)
    {
        this->grade=grade;
    }
    void display()
    {
        cout<<"The person name is:"<<name<<" "<<"The person age is:"<<age<<endl;     
        cout<<"The person grade is:"<<grade<<endl;
    }
};
int main(){
    Student p(24,"roton",4.3);
    p.display();

    
    return 0;
}