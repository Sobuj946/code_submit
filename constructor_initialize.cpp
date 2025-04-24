#include<bits/stdc++.h>
using namespace std;
class Student
{
    //If the data member is constant access to the this constant 
    //value and this constructor value function create
    private:
    const int examfee;
    const int admissionfee;
    int id;
    public:
    Student(int x,int y,int z):examfee(x),admissionfee(y)
    {
        cout<<"Exam Fee:"<<examfee<<endl;
        cout<<"Admission Fee:"<<admissionfee<<endl;
        id=z;
        cout<<"ID is:"<<z<<endl;
    }
};
class student1:private Student
{
    public:
    int discountfee;//inheritance student class and value pass
    student1(int x,int y,int z,int k):Student(x,y,z),discountfee(k)
    {
        cout<<"Discount fee:"<<discountfee<<endl;
    }
};
int main(){
    Student s(1200,3000,2276);
    student1(5,4,5,2);
    
    return 0;
}