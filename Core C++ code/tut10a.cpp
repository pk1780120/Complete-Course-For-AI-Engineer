#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    char operation;
    cout << "Enter value of num1"<<endl;
    cin >> num1;
    cout << "Enter value of num2"<<endl;
    cin >> num2;
    cout << "Enter operator (+, -, *, /) ";
    cin >> operation;
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            
        case '-':
            cout << "Result: " << num1 - num2 << endl;
        
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error" << endl;
            }
            break;
        default:
            cout << " Invalid operator" << endl;
    }
          return 0;
}