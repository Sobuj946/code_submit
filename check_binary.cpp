#include <bits/stdc++.h>
using namespace std;
class Binary
{
    string s;

public:
    void read(void);
    void check_binary();
    void ones_complement(void);
    void display();
};
void Binary::read(void)
{
    cout << "Enter Number:" << endl;
    cin >> s;
} 
void Binary::check_binary(void)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Incorrect Binary Number." << endl;
            exit(0);
        }
    }
    cout << "Binary Number.\n";
}
void Binary::ones_complement(void)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void Binary::display()
{
    cout << "Display the binary Number:\n";
    cout << s << endl;
}
int main()
{
    Binary b;
    b.read();
    b.check_binary();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}