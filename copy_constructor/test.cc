class Pet {
    public:
        Pet(){}
        void set() {
            p_name = 3;

        }
    private:
        int p_name;

};

class Cat : public Pet {


};

int main() {
    Cat c, d;
    c.set();
    d = c;
    return 0;

}
