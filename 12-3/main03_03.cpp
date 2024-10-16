#include <iostream>
#include "work03_03.h"  // or "work03_03.h" depending on which version you want to test
using namespace std;

int main() {
    Dept com(10);
    com.read();
    int n = countPass(com);
    cout << "60점 이상은 " << n << "명";
}
