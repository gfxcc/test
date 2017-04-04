#include <stdexcept>
#include <cassert>
#include <vector>
#include <iostream>
using namespace std;


template <typename E>
class VecExpression {
    public:
        //E& operator()()       { return static_cast<E&>(*this); }
        //const E& operator()() const { return static_cast<const E&>(*this); }

        int operator[](size_t i) const {
            return static_cast<const E&>(*this)[i];
        }
        size_t size() const {
            return static_cast<const E&>(*this).size();
        }

};

class Vec : public VecExpression<Vec> {
    public:

        Vec(const vector<int>& vec) : elements(vec) {}
        int operator[](size_t i) {
            return elements[i];
        }

        template <typename E>
            Vec(const VecExpression<E>& vec) : elements(vec.size()) {
                int a = vec.size();
                for (size_t i = 0; i < vec.size(); i++) {
                    elements[i] = vec[i];
                }
            }

        size_t size() {
            return elements.size();
        }
    private:
        vector<int> elements;
};

template <typename E1, typename E2>
class VecSum : public VecExpression<VecSum<E1, E2>> {
    public:
        VecSum(E1& u, E2& v) : _u(u), _v(v) {
            assert(_u.size() == _v.size());
        }

        int operator[](size_t i) const {
            return _u[i] + _v[i];
        }
        size_t size() const {
            return _u.size();
        }

    private:
        E1& _u;
        E2& _v;
};

template <typename E1, typename E2>
const VecSum<E1,E2> operator+(E1& u, E2& v) {
    return VecSum<E1, E2>(u, v);
}


int main() {
    vector<int> v1 = {1,2,3}, v2 = {2,3,4}, v3 = {4,5,6};

    Vec m1(v1), m2(v2), m3(v3);
    Vec res = m1 + m2 + m3;
    return 0;
}
