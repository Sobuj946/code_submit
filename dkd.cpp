#include<bits/stdc++.h>
using namespace std;
class Shape {
    public:
        virtual void draw() {
            cout << "Drawing a shape" << endl;
        }
    };
    
    class Circle : public Shape {
    public:
        void draw()  {
            cout << "Drawing a circle" << endl;
        }
    };
    
    class Square : public Shape {
    public:
        void draw() {
            cout << "Drawing a square" << endl;
        }
    };
    
    int main() {
        Shape s;
        s.draw();
        Shape* s1 = new Circle();
        Shape* s2 = new Square();
    
        s1->draw();  // Output: Drawing a circle
        s2->draw();  // Output: Drawing a square
    }
    