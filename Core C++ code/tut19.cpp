#include <iostream>

using namespace std;
int sum(int a, int b) {
    cout << "using function with 2 arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c) {
    cout << "using function with 3 arguments" << endl;
    return a + b + c;
}
//calculate the  volume of a cylinder
int volume(double r, int h) {
    return 3.14 * r * r * h;
}
 // calculate the volume of a cube
int volume(int a) {
    return a * a * a;
}
// calculate the rectangle box
int volume(int l, int b, int h) {
    return l * b * h;
}
int main() {
    cout << "Sum of 3 and 6 " << sum(3, 6) << endl;
    cout << "Sum of 3, 7 and 6 " << sum(3, 7, 6) << endl;
    cout << "Volume of cylinder with radius 3 and height 7: " << volume(3, 7) << endl;
    cout << "Volume of cube with side 4: " << volume(4) << endl;
    cout << "Volume of rectangle box with length 3, breadth 4 and height 5: " << volume(3, 4, 5) << endl;

    
    return 0;
}