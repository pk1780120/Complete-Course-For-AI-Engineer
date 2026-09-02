#include <iostream>
using namespace std;
int c=45; // global variable

int main() {
   /*int a,b,c; // local variable

    cout << "enter the value of a:"<<endl;
    cin >> a;
    cout << "enter the value of b:"<<endl;
    cin >> b;
    c = a + b; // local variable c shadows global variable c
    cout << "the sum is: " << c << endl;
    cout << "the global variable c is: " << ::c << endl; // accessing global variable using scope resolution operator*/
    float d = 34.4F; // local variable
    long double e = 34.4L; // local variable
    cout <<"the value of d is"<< d << endl << "the value of e is" << e << endl;
    cout << "the size of 34.4 is " << sizeof (34.4)<< endl;
    cout << "the size of 34.4f is " << sizeof (34.4f) << endl;
    cout << "the size of 34.4F is " << sizeof (34.4F) << endl;
    cout << "the size of 34.4l is " << sizeof (34.4l) << endl;
    cout << "the size of 34.4L is " << sizeof (34.4L) << endl;
    return 0;
}