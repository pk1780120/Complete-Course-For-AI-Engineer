#include <iostream>
#include <iomanip> // for manipulators
using namespace std;
int main() {
   // manipulators in c++

    int a = 8, b = 909, c = 7709;
    cout << "the value of a without setw is: " << a << endl;
    cout << "the value of b without setw is: " << b << endl;
    cout << "the value of c without setw is: " << c << endl;

    cout << "the value of a with setw(4) is: " << setw(4) << a << endl;
    cout << "the value of b with setw(4) is: " << setw(4) << b << endl;
    cout << "the value of c with setw(4) is: " << setw(4) << c << endl;
    return 0;
}  