//Inheritance Demonstration
#include <iostream>
using namespace std;

class Parent {
    int x = 1; //private by default 
public:
    int y = 2;
protected:
    int z = 3;
};

class Child1 : private Parent {
    void get() {
        //cout << y << " " << z;
    }
};

class Child2 : public Parent {
   void get() {
        cout << y << " " << z;
    }
};

class Child3 : protected Parent {
    void get() {
        cout << y << " " << z;
    }
};

int main() {
    Parent p;
}