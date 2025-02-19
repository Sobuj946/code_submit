#include<bits/stdc++.h>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void set_counter(void);
    void setPrice(void);
    void dispalay(void);
};
void Shop::set_counter(void)
{
    counter=0;
}
void Shop::setPrice(void)
{
    cout<<"Enter item ID :"<<endl;
    cin>>itemId[counter];
    cout<<"Enter item price:"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::dispalay(void)
{
    cout<<"The item number is :"<<counter+1<<endl;
    for(int i=0;i<counter;i++)
    {
        cout<<"The item ID is :"<<itemId[i]<<"the item price is: "<<itemPrice[i]<<endl;
    }
}
int main(){
    Shop s;
    s.set_counter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.dispalay();
    
    return 0;
}