#include <iostream>
#include <iomanip> // for manipulators
using namespace std;
int main() {
 //oprator precedence in c++
    int a = 1, b = 1;
    int c = ((((a*b)+b)-5)+87);

    cout<<c;

    return 0;
}