#include <iostream>
using namespace std;
void log(const char* msg);
int multiple(int a, int b){
    log("multiple");
    return a*b;
}
int main(){

}

// clang++ link1.cc
// link1.cc:(.text+0x19): undefined reference to `log(char const*)' Why do we get link error even if we don't use multiple at all?

// becuase multiple can be used in other files other than this file. We can make `multiple` function only shown to this function by adding `static` to its declaration.