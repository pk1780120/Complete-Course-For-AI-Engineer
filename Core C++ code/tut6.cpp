#include <iostream>
using namespace std;

int main() {
    int a=4, b=2;

    cout<<"operators in c++"<<endl;
    cout<<" Operators"<<endl;
    //arithmetic operators:

    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
    cout<<"the value of a%b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
  cout<<endl;

    //assignment operators:
    cout<<"the value of a+=b is "<<(a+=b)<<endl;
    cout<<"the value of a-=b is "<<(a-=b)<<endl;
  cout<<endl;

    // comparison operators:
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<endl;

    // logical operators:
    cout<<"the value of logical and operator (a==b) && (a<b) is "<<((a==b) && (a<b))<<endl;
    cout<<"the value of logical  or operator (a==b) || (a<b) is "<<((a==b) || (a<b))<<endl;
    cout<<"the value of logical not operator !(a==b) is "<<(!(a==b))<<endl;
 
    return 0; 
}  
     