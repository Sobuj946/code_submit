#include <bits/stdc++.h>
using namespace std;
class Employee
{
    int id;
    static int count;//static count 

public:
    void setData(void)
    {
        cout << "Enter Id:" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The employee is id : " << id << " The number of employee number:" << count << endl;
    }
    static void getCount()//static function 
    {
        // cout<<id; //throws an errors Id is not static data
        cout<<"The count number is :"<<count<<endl;
    }
};
    //count is a static data member of class of Employee
    //static is not a object                                        
int Employee ::count=100;//count change this line
//Default value is always 0
int main()
{
    Employee sobuj, rohan, ronjit;
    //sobuj.id=183; //id and count is a private  variable


    sobuj.setData();
    sobuj.getData();

    Employee ::getCount();

    rohan.setData();
    rohan.getData();

    Employee ::getCount();

    ronjit.setData();
    ronjit.getData();

    Employee ::getCount();
    return 0;
}