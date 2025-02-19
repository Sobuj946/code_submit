#include<bits/stdc++.h>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setData(void)
    {
        cout<<"Enter the employee id:";
        cin>>id;
    }
    void getData()
    {
        cout<<"The employee id is :"<<id<<endl;
    }
};
int main(){
    Employee fb[100];
    for(int i=1;i<=3;i++)
    {
        fb[i].setData();
        fb[i].getData();
    }
    
    return 0;
}