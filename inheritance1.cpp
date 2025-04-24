#include<bits/stdc++.h>
using namespace std;
class Animal
{
    public:
   void makeSound()
    {
        cout<<"Sound for every Animal!\n";
    }

};
class Dog:public Animal
{
    public:
    void makeSound()
    {
        cout<<"Dog sound is woof!";
    }
    void lageCount()
    {
        cout<<"Four lage have a dog!\n";
    }
};
int main(){

    Animal a;
    a.makeSound();
    Dog d;
    d.makeSound();
    d.lageCount();
    
    
    return 0;
}