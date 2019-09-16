#include <iostream>
using namespace std;

typedef string Type;
Type initVal();

class E {
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};

Type initVal() {
    string res = "fuck";
    return res;
}

E::Type E::setVal(E::Type param) {
    val = param + initVal();
    return val;
}

E::Type E::initVal() {
    return 1.00;
}

int main() {
    E e;
    cout << e.setVal(2.1) << endl;
}
