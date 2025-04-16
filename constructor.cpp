#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    Student(int x, string s) // parametrized constructor
    {
        id = x;
        name = s;
    }
    Student()
    {
        cout << "Called  the default constuctor\n";
    }
    void display()
    {
        cout << id << " " << name;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Student roton;
    Student sobuj(1243, "Sobuj");
    sobuj.display();
    return 0;
}