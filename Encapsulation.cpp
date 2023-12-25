#include <iostream>
using namespace std;

class ABC {
    int x; //private by default
public:
    void set(int n) {
        x = n;
    }
    int get() {
       return x; 
    }
};

int main() {
    ABC obj1;
    obj1.set(3); //set the obj1's propety to 3
    cout << obj1.get() << endl;

    ABC obj2;
    cout << obj2.get() << endl;
}