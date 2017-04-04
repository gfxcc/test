class Solution {
    mutable int a = 4;
public:

    bool operator[] (int num) const {
        a = 2;
        return false;
    }

    bool operator[] (int num) {
        return true;
    }

};

int main() {
    Solution s;
    s[1];
    return 0;
}
