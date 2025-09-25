#include <iostream>
using namespace std;


class Test {
protected:
    int a;
public:
    void setA(int x) {
        a = x;
    }
    void showA() {
        cout << "Value of a = " << a << endl;
    }
};
class SubTest : public Test {
protected:
    int b;
public:
    void setB(int y) {
        b = y;
    }
    void showB() {
        cout << "Value of b = " << b << endl;
    }
};
class FinalTest : public SubTest {
    int c;
public:
    void setC(int z) {
        c = z;
    }
    void showC() {
        cout << "Value of c = " << c << endl;
    }
};

int main() {
    FinalTest obj;
    obj.setA(10);   
    obj.setB(20);   
    obj.setC(30);   

    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}

