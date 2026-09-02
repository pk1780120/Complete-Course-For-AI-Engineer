 #include <iostream>
 
 using namespace std;
  int fib(int n) {
     if (n < 2) {
         return n ;
     }
     return fib(n - 2) + fib(n - 1);
    }
 int main() {
        // Fibonacci series
        // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
        // fib(0) = 0
        // fib(1) = 1
        // fib(n) = fib(n-2) + fib(n-1)
        int a;
        cout << "Enter a number" << endl; 
        cin >> a;
        cout << " the term in Fibonacci sequence at position  " << a << " is " << fib(a) << endl;

    
    return 0;
 }