#include <iostream>

using namespace std;

// Function prototype
//type function-name (arguments);
int sum(int a, int b); // Function prototype for sum accepting
 void g(void); //  accepting
int main() {
     int num1, num2;
     cout << "Enter first numbers" << endl;
        cin >> num1;
        cout << "Enter second number" << endl;
        cin >> num2;
        // num1 and num2 are actual parameters
        cout << "The sum of " << sum(num1, num2) << endl;
        g(); // Calling the function g
    return 0;
}

int sum(int a, int b) {
    // a and b are formal parameters will receive the values  from actual parameters num1 and num2
    int c= a + b;
    return c;
} 

void g(void) {
    cout << "hello sir,good morning" << endl;
    // This function does not take any parameters
}
 