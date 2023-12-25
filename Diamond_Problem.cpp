//Diamond Problem

//              parent
//              /     \
//         child1     child2
//            /         \
//    grandchild1      grandchild2
//           \          /
//            \        /
//          greatgrandchild

#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "parent class" << endl;
    }
};

class child1 : public Parent {
public:
    child1() {
        cout << "Child1 class" << endl;
    }
};

class child2 : public Parent {
public:
    child2() {
        cout << "child2 class" << endl;
    }
};

class grandchild1 : public child1 {
public:
    grandchild1() {
        cout << "grandchild1 class" << endl;
    }
};

class grandchild2 : public child2 {
public:
    grandchild2() {
        cout << "grandchild2 class" << endl;
    }
};

class greatgrandchild : public grandchild1, public grandchild2 {
public:
    greatgrandchild() {
        cout << "greatgrandchild class" << endl;
    }
};

int main() {
    greatgrandchild gg;
}

