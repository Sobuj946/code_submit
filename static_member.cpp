#include<bits/stdc++.h>
using namespace std;
class item{
    static int count;
    int number;
    public:
    void getData(int n)
    {
        number=n;
        count++;
    }
    void showcount()
    {
        cout<<"Count:"<<count<<endl;
    }
};
int item::count;
int main(){
    item a,b,c;
    a.showcount();
    b.showcount();
    c.showcount();
    cout<<"After reading data:\n";
    a.getData(1);
    b.getData(4);
    c.getData(3);
    a.showcount();
    b.showcount();
    c.showcount();
    
    return 0;
}