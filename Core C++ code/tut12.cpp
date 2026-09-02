#include <iostream>

using namespace std;
 
int main() {
    //what is a pointer?----> data type which holds the address of other data types
    int a=3;
    int* b=&a; // b is a pointer to a
    //& ----> (address of) operator
    cout << "Address of a " << &a << endl; // prints the address of a
    cout << "Address of a " << b << endl; 

    // *---> ( value at)  dereference operator
    cout << " the Value at address b is " << *b << endl; 
    //pointer to pointer
    int** c = &b; // c is a pointer to b
    cout << "Address of b " << &b << endl; // prints the address of b
    cout << "Address of b " << c << endl; // prints the address of b
    cout << " the Value at address c is " << *c << endl; // prints the value at address c, which is the address of b
    cout << " the Value at address value_at(value_at(c)) is " << **c << endl; // prints the value at address c, which is the value of a
    return 0;
}