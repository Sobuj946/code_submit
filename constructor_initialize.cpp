#include<bits/stdc++.h>
using namespace std;
class Student
{
    //If the data member is constant access to the this constant 
    //value and this constructor value function create
    public:
    const int examfee;
    const int admissionfee;
    int id;
    Student(int x,int y,int z):examfee(x),admissionfee(y)
    {
        cout<<"Exam Fee:"<<examfee<<endl;
        cout<<"Admission Fee:"<<admissionfee<<endl;
        id=z;
        cout<<"ID is:"<<z<<endl;
    }
};
int main(){
    Student s(1200,3000,2276);

    
    return 0;
}