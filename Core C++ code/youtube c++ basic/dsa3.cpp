#include <iostream>

using namespace std;

int main()
{
    // code1 -if-else
    /* int n=45;
     if (n>=0){
         cout << "n is a positive number";
     }else{
         cout << "n is a negative number";
     }*/

    // or code-odd and even
    /* int n;
     cout<<"enter number:";
     cin >> n;
     if(n%2 == 0){
      cout << "even\n";
     cout<<"bye\n";
     }else{
      cout<<"odd\n";
     }*/

    // code2 -if-else-if-else conditonal statement
    /*int marks ;
     cout << "Enter your marks: ";
     cin >> marks;
     if (marks >= 90){
         cout << "A+\n";
     }else if (marks >= 80 && marks < 90){
         cout << "A\n";

         }else{
             cout << "B\n";
         }*/

    // code3 -character lowercase or uppercase
    /*char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z'){
        cout << ch << " is a lowercase letter\n";
        }else {
            cout << " is an uppercase letter\n";
        }*/

    // code4 ascii value of character
    /*char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch>=65 && ch<=90){
        cout << "uppercase letter\n";
        }else{
            cout << "lowercase letter\n";
        }*/

    // code5 -turnary operator
    // int n=-67 ;
    // cout << (n>=0 ? "n is a positive number" : "n is a negative number")<< endl;

    // code6 -loops
    /*int count=1;
     while (count<=10){
         cout << count << endl;
         count++;
      }*/

    // or code
    /*int n=20;
    int count = 1;
    while (count<=n){
        cout << count << endl;
        count++;
    }
    cout<<endl;*/

    // code7 -for loop
    /*int n=20;
    for (int i=1; i<=n;i++){
        cout << i << " ";
    }
    cout << endl;*/

    // code8 -print sum of numbers from 1 to n
    /*int n=10;
    int sum=0;
    for (int i=1; i<=n;i++){
        sum+=i;
    }

    cout << "Sum =" << sum << endl;*/

    // code9 -using break statement
    /*int n=10;
    int sum=0;
    for (int i=1; i<=n;i++){
        sum+=i;
        if (i==5){
            break;
     cout<<"sum="<<sum<<endl;
        }
    }*/

    // code10 -sum of all odd numbers from 1 to n
    /*int n=50;
     int oddsum = 0;
     for (int i=1; i<=n;i++){
         if (i%2 !=0){
          oddsum+=i;
         }
     }
     cout<<" odd sum ="<< oddsum<<endl;*/

    // code11 -check if a number is prime or not
    /* int n=9;
     bool isPrime = true;
     for (int i=2; i*i<=n-1;i++){
         if (n%i==0){
             isPrime = false;
             break;
         }
     }
     if (isPrime == true){
         cout << n << " is a prime number\n";
     }else{
         cout <<  " is not a prime number\n";
     }*/

    // code12 -nested loops
    /* int n=10;
     for (int i=1; i<=n;i++){
         int m =10;
         for (int j=1; j<=m;j++){
             cout << "* ";
         }
         cout << endl;
     }*/
    return 0;
}