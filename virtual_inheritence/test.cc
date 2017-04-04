
class A {
    private:
        int a;
    public:
        void f() {
            //cout << 1 << endl;

        }

};

class B : public A {
    public:
        int d;
        virtual void g() {
            //cout << 2 << endl;

        }

};


class C : public A {
    public:
        virtual void f() {
            //cout << 3 << endl;

        }
        virtual void g() {
            //cout << 33 << endl;

        }

};

class D : public virtual B, public virtual C {
    public:
        void f() {
           // cout << 4 << endl;

        }
        void g() {
         //   cout << 44 << endl;

        }

};

int main() {


    return sizeof(D);

}

