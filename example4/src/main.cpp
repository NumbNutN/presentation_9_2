#include <bits/stdc++.h>

int a =0;
std::vector<int> v;

#define BACKWARD_HAS_DW 1
#include "backward.h"

namespace backward {
backward::SignalHandling sh;
};

void func(){

    static int cnt=0;
    if(cnt++==10){
        a++;
        v[10] = 1;
    }

}

int main() {

    while(true){
        func();
        // delay 0.1s
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return 0;
}