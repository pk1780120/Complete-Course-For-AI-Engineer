#include <iostream>
using namespace std;
int main() {
    /*cout << "Hello world" << endl;
    float x = 455;
    float & y = x;
    cout << x << endl;
    cout << y << endl;*/
 int a=45;
 float b=45.5;

  cout << " the value of a is " << (float)a << endl;
  cout << " the value of a is " << float(a) << endl;

    cout << " the value of b is " << (int)b << endl;
    cout << " the value of b is " << int(b) << endl;

    int c =int(b);

    cout << "the expression is " << a+b << endl;
    cout << "the expression is " << a+int(b) << endl;
    cout << "the expression is " << a+(int)b << endl;
    return 0;
}