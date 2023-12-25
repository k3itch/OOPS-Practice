#include <iostream>
using namespace std;

class Rectangle {
public:
    int l, b;

    Rectangle(){
        l = 0;
        b = 0;
    }

    ~Rectangle() {
        
    };
};

int main() {
    Rectangle r1;

    cout << r1.l << " " << r1.b << endl;
}