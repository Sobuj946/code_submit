#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int x; 
    A(int a)//parametirizd 
    {
        /*shallo copy deep copy
        default constructor
        copy constractor
        destractor 
        -> meaning destroy memory
        resources cleanup: 
        autometic invocation
        :
        prevention of resource leaks:
        maintain code itegrity:
        syntax:
        destructor
        class myclass{
        public:A
        mysclass(){
        
        }
        }
        destructor characteristics
        constractor meaning memory allocation
        */
        x=a;//copyconstructor
    }
    A(A &i){//copy constructor
        x=i.x;
    }
};
int main(){

A a1(20);//colling the parameterized
A a2(a1);//copy the constructor
cout<<a2.x<<endl;
    
    return 0;
}