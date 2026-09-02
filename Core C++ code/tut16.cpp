#include <iostream>

using namespace std;
int sum(int a, int b) {
    int c= a + b;
    return c;
}
      //this will not swap the values of a and b
    int swap(int x, int y) {//temp     x   y
    int temp = x;          //  5     5   6
    x = y;                  // 5     6   6
    y = temp;              //  5     6   5
  }
     //call by reference using pointers
    //this will swap the values of a and b
    void swappointer(int *x, int *y) { //temp   x   y
    int temp = *x;                     //  5    5   6
    *x = *y;                           //  5    6   6
    *y = temp;                        //   5    6   5
}
//call by reference using reference variables
    //this will swap the values of a and b
    void swapreferencevar(int &x, int &y) { //temp   x   y
    int temp = x;                     //  5    5   6
    x = y;                           //   5    6   6
    y = temp;                        //   5    6   5
}
 int main() {
    int a = 5, b = 6;
    // cout << "the sum of 5 and 6 is " << sum(a, b) << endl;
    cout << "the value of a is " << a<<"and the value of b is"<<b << endl;

    // swap(a, b); // This will not swap the values of a and b
    //swappointer(&a, &b); // This will swap the values of a and b uasing pointers
     swapreferencevar(a, b); // This will swap the values of a and b using reference variables
    cout << "the value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}