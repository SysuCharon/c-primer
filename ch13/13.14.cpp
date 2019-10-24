#include <iostream>

using namespace std;

class Num {
public:
    int num;
    Num() {num = 0;}
    Num(const Num& n) {
        num = n.num + 1;
    }
};

void f1(Num n) {
    cout << n.num << endl;
}

void f2(const Num& n) {
    cout << n.num << endl;
}

int main() {
    Num a, b = a, c = b;
    f1(a);
    f1(b);
    f1(c);

    f2(a);
    f2(b);
    f2(c);
}
