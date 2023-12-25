#include <iostream>
using namespace std;

class Fruit { //Class - Fruit
public:
    string name;
    string color;
};

class Student { //Class - Student
public:
    string name;
    int roll_no;
};

int main() {
    Fruit apple; //first method
    apple.name = "Apple";
    apple.color = "Red";
    cout << apple.name << " " << apple.color << endl;

    Student *Ashish = new Student();
    Ashish->name = "Ashish";
    Ashish->roll_no = 23;

    cout << Ashish->name << " " << Ashish->roll_no << endl;
    return 0;
}