#include <iostream>
#include <string>

using namespace std;

class HasStr {
public:
    HasStr(const string& str = string())
        : ps(new string(str)), i(0), use(new int(1)) {}
    ~HasStr() {
        if (use == 0) {
            delete ps;
        }
    }
    HasStr(const HasStr& rhs): ps(rhs.ps), i(rhs.i), use(rhs.use) {}
    HasStr& operator=(const HasStr& rhs) {
        --(*use);
        ps = rhs.ps;
        i = rhs.i;
        use = rhs.use;
        ++(*use);
    }
    string* getPs() const {
        return ps;
    }
    int getInt() const {
        return i;
    }

    int getUse() const {
        return *use;
    }
private:
    string *ps;
    int i;
    int *use;
};

int main() {
    HasStr a("aaa"), b, c;
    cout << "a i:" << a.getInt() << " str: " << *(a.getPs()) <<
        " str addr:" << a.getPs() << " use_count: " << a.getUse() << endl;
    cout << "b i:" << b.getInt() << " str: " << *(b.getPs()) <<
        " str addr:" << b.getPs() << " use_count: " << b.getUse() << endl;

    c = b;
    b = a;
    cout << "a i:" << a.getInt() << " str: " << *(a.getPs()) <<
        " str addr:" << a.getPs() << " use_count: " << a.getUse() << endl;
    cout << "b i:" << b.getInt() << " str: " << *(b.getPs()) <<
        " str addr:" << b.getPs() << " use_count: " << b.getUse() << endl;
    cout << "c i:" << c.getInt() << " str: " << *(c.getPs()) <<
        " str addr:" << c.getPs() << " use_count: " << c.getUse() << endl;
    return 0;
}
