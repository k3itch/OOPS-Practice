#include <iostream>
using namespace std;

class Rectangle{
public:
    int l;
    int b;

    Rectangle() { //Default Constructor
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) { //Parameterized Constructor
        l = x;
        b = y;
    }

    Rectangle(Rectangle& r) { //Copy Constructor
        l = r.l;
        b = r.b;
    }
};

int main() {
    Rectangle r1; //Default Constructor
    cout << r1.l << " " << r1.b << endl; 

    Rectangle r2(2, 3); //Parameterized Constructor
    cout << r2.l << " " << r2.b << endl;

    Rectangle r3 = r2; //Copy Constructor
    cout << r3.l << " " << r3.b << endl;
}