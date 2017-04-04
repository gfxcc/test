
#include <vector>

template <int sz>
class Container {
    int a[sz];
    public:
    void f() {}
};


using namespace std;
int main () {
    Container<2> a;
    Container<3> b;

    a.f();b.f();
}

