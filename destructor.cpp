#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    Student()
    {
        cout<<"Constructor colled\n";
    }

   ~ Student()
    {
        cout<<"Destructor called\n";
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Student roton;
   
    return 0;
}