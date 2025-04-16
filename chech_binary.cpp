#include<bits/stdc++.h>
using namespace std;
class Binary{
    string s;
    public:
    void read()
    {
        cout<<"Enter the number:"<<endl;
        cin>>s;
    }
    void check_bin()
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0'&&s[i]!='1')
            {
                cout<<"\nIncorrect binary numbr format\n";
                exit(0);
            }
        }
    }
    void one()
    {
        check_bin();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                s[i]='1';
            }
            else {
                s[i]='0';
            }
        }
    }
    void display()
    {
        one();
        cout<<"The 1's complement of the above binary number is:";
        cout<<s;
    }
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Binary b;
    b.read();
    // b.check_bin();
    // b.one();
    b.display();
    
    return 0;
}