#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
    int NID;
    float balance;
    public:
    void getData(int a,float b);
    friend void Show(Student);
};
void Show(Student s)
{
    cout<<"NID:"<<s.NID<<endl;
    cout<<"Balace:"<<s.balance<<endl;
}
void Student::getData(int a,float b)
{
    NID=a;
    balance=b;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Student s;
    s.getData(452425,3467537.84);
    Show(s);
    
    return 0;
}