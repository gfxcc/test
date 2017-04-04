
void f(int&& val) {
    int& t = val;
    t = 1;

}

void ff(int& val) {

    val = 1;
}

int main() {

    f(1);
    return 0;
}
