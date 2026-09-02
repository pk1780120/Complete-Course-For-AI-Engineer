/*#include <iostream>

using namespace std;
 //function defnition
 int printHellopawan(){
    cout<<"hellopawan\n";
    return 3;
 }
 int sum(double a,double b){
    double s =a+b;
    return s;

 }
 int minOfTwo(int a,int b){//parameter
    if(a<b){
    return a;
    } else {
        return b;
    }
 }
  
int main() {
    //function call/invoke 
    cout<<printHellopawan()<<endl;
    cout<<sum(10.99,26.87)<<endl;
     cout<<"minOfTwo"<<minOfTwo(5,3)<<endl;//argument
    return 0;
}*/
//sum using function
/*#include <iostream>

using namespace std;
 int sumN(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    return sum;
 }
int main() {
    cout<<sumN(5)<<endl;
    cout<<sumN(10)<<endl;
    return 0;
}*/
//code-3,factorial
/*#include <iostream>
using namespace std;
int factorialN(int n){
 int fact = 1;
 for(int i=1;i<=n; i++){
    fact*=i;
 }
 return fact;
}
int main() {
   cout<< factorialN(4) << endl;
   cout<<factorialN(5)<<endl; 
    return 0;
}*/
//pass by value
/*#include<iostream>
using namespace std;
int sum(int a,int b){
    a=a+10;
    b=b+10;
    return a+b;
}
int main(){
int a = 5, b = 4;
cout << a << endl;
cout<<sum(a,b)<<endl;

cout <<a<<endl;
cout<<b<<endl;
return 0;
}*/

//code-
/*#include <iostream>

using namespace std;
 void changeX(int x){
    x=2*x;
   cout<<" x ="<<x<<endl; 
 }
int main() {
    int x =5;
    changeX(x);
    cout <<"x ="<<x<<endl;
    return 0;
}*/
//calculate sum of digit of number
/*#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int digsum = 0;   // declare
    while (num > 0) {
        int lastDig = num % 10;
        num /= 10;
        digsum += lastDig;   // use same variable name
    }
    return digsum;
}

int main() {
    cout << "sum = " << sumOfDigits(2356) << endl;
    return 0;
}*/
//binomial coefficient
#include <iostream>

using namespace std;
 int factorial(int n){
 int fact = 1;
 for(int i=1;i<=n; i++){
    fact*=i;
 }
 return fact;
}
int nCr(int n,int r){
    int fact_n =factorial(n);
    int fact_r = factorial(r);
     int fact_nmr=factorial(n-r);
      return fact_n / (fact_r * fact_nmr);
}
int main() {
    int n = 8 ,r=2;
    cout<<nCr(n,r) << endl;
    return 0;
}
