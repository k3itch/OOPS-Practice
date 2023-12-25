#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "Parent Class" << endl;
    }
};

class Child1: public Parent {
public:
    Child1() {
        cout << "Child1 Class" << endl;
    }
};

class Child2: public Parent {
public:
    Child2() {
        cout << "Child2 Class" << endl;
    }
};

int main() {
    Parent p;
    Child1 c1;
    Child2 c2;
}