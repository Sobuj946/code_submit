#include<bits/stdc++.h>
using namespace std;
class item{
    
    int a,b;
  public:
    void getdata(int x,int y);
    void displaydata(void);
};
void item::getdata(int x,int y)
{
    a=x;
    b=y;
}
void item::displaydata()
{
    cout<<a<<" "<<b;
}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    item a;
    a.getdata(2,3);
    a.displaydata();
    
    return 0;
}