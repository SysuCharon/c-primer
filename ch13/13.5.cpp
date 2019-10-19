#include <iostream>
#include <string>

using namespace std;

class HasStr {
public:
    HasStr(const string& str = string()): ps(new string(str)), i(0) {}
    HasStr(const HasStr& rhs): ps(new string(*(rhs.getPs()))), i(rhs.getInt()) {}
    string* getPs() const {
        return ps;
    }
    int getInt() const {
        return i;
    }
private:
    string *ps;
    int i;
};

int main() {
    HasStr a("aaa"), b = a;
    cout << "a i:" << a.getInt() << " str: " << *(a.getPs()) <<
        " str addr:" << a.getPs() << endl;
    cout << "b i:" << b.getInt() << " str: " << *(b.getPs()) <<
        " str addr:" << b.getPs() << endl;
    return 0;
}
