#include <iostream>
using namespace std;

class Parent{
public:
    virtual void print() {
        cout << "parent class print function with virtual keyword" << endl;
    }
    void show() {
        cout << "parent class show function" << endl;
    }
};

class child : public Parent {
public:
    void print() {
        cout << "child class print function" << endl;
    }
    void show() {
        cout << "child class show function" << endl;
    }
};

int main() {
    Parent *p;
    child c;
    p = &c;
    p->print();
    p->show();
}