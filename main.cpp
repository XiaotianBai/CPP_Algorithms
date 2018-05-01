#include <iostream>
#include "vector"
#include "unordered_set"
#include "quicksort.h"
using namespace std;


class A {
public:
    A() { cout << "1"; }

    A(const A &obj) { cout << "2"; }
};

class B : virtual A {
public:
    B() { cout << "3"; }

    B(const B &obj) { cout << "4"; }
};

class C : virtual A {
public:
    C() { cout << "5"; }

    C(const C &obj) { cout << "6"; }
};

class D : public B, public C {
public:
    D() { cout << "7"; }

    D(const D &obj) { cout << "8"; }

    ~D() {}
};

class X {
private:
    int i;
    int *pi;
public:
    X()
            : pi(new int) {}

    X(const X &copy)   // <-- copy ctor
            : i(copy.i), pi(new int(*copy.pi))  // <-- note this line in particular!
    {}
};

int const s = 9;

int x[100];

int main() {
    vector<int> v{7, 8, 6, 5, 44, 8, 3, 2};
    vector<int> v1(v.begin(), v.begin());
//    quicksort :: qsort(v, 0, 7);
//    for(vector<int> :: iterator i = v.begin(); i != v.end(); ++i) {
//        cout<<*i;
//    }
    for (vector<int>::iterator i = v1.begin(); i != v1.end(); ++i) {
        cout << *i;
    }
}