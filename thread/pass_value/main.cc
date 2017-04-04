//
//  main.cpp
//  Test
//
//  Created by caoyong on 3/29/17.
//  Copyright © 2017 caoyong. All rights reserved.
//

#include <iostream>
//#include <iterator>
//#include <vector>
#include <string>
//#include <algorithm>
//#include <numeric>
//#include <queue>
//#include <map>
#include <thread>
//#include "/usr/local/yonglib/print_helper.h"


using namespace std;

void f(const string& str) {
    while (true) {
        cout << &str << endl;
        //std::this_thread::sleep_for (std::chrono::seconds(1));
    }
}

void start() {
    char ary[100];
    ary[0] = 'H'; ary[1] = '\0';
    cout << &ary << endl;
    string s = "H";
    thread my_thread(f, ary);
    my_thread.detach();
    //std::this_thread::sleep_for (std::chrono::seconds(2));
}


int main() {

    //f("1");
    start();
    while (1) {
        //std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    return 0;
}






