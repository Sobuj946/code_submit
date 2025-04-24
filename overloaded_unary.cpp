#include<bits/stdc++.h>
using namespace std;
class Test{
    string sobuj,ronjit;
    string s;
    public:
    Test():sobuj("sobuj"),ronjit("ronjit"){}
    void operator ++()
    {
        s=sobuj+ronjit;
    }
    void print()
    {
        cout<<"Num="<<s<<endl;
    }
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Test t;
    ++t;
    t.print();
    
    return 0;
}