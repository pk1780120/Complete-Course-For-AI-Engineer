// constant and macros
// #include <iostream>
// using namespace std;
// int main()
// {
//     const int num=25;
//     int num2=25;
//      num2=35;//update kar diye but
//      num=35;//same changes are not allows in num because
// when we create expression must be modifiable lvalue .i.e  left value normal value
// nhi hia jise define hai with constant after this whole program never we updated
//      //constant  normal variable ke liye use not allow but
// when in future create game development like freefire,pubg,....etc
//(in these game use physics,maths laws many many times)
// const float PI;
// PI=3.14;//not allowed
//  return 0;
// }

// now declare contant
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      const float PI = 3.14;
//      const float g=9.8;//when constant create then we give initialized value
//      cout <<PI <<endl;
//      cout<<g<<endl;
//  return 0;
//  }

// #include<iostream>
// #define X 25
// using namespace std;
// int main()
// {
//     const int Y=35;
//     cout<<X<<endl;//25
//     cout<<Y<<endl;
// return 0;
// }

// #include<iostream>
// #define ll long long
// using namespace std;
// int main()
// {
// ll x;
// ll y=25;//declare these type of variable
// cout<<y;
// return 0;
// }

// type casting
// implicit
// #include<iostream>
// using namespace std;
// int main()
// {
//   cout<<(10/3)<<endl;//3
//   cout<<(10/3.0)<<endl;//automatic double assign ho gya
// cout<<('A'+1)<<endl;
// cout<<('Z'-0)<<endl;
// cout<<('z'-0)<<endl;
//   return 0;
// }

// explicit converssion
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     cout<<(int)('a')<<endl;
//     float PI =3.14;
//     cout<<(int)(PI)<<endl;
//     cout<<((float)10/3)<<endl;//3.333
//     cout<<(char)('A'+1)<<endl;
//  return 0;
//  }

// //practice question
// //q1.predict output of cout<<(bool)+3;
// #include<iostream>
// using namespace std;
// int main()
// {
// cout<<((bool)3 +2)<<endl; //bool means true(1)/false(0)
// //(bool)5=1,(bool)10=1,(bool)(-10)=1 except (bool)0=0
//  cout<<(23.5+2+'A')<<endl;
//     return 0;
// }

// operator in c++
// #include <iostream>
// using namespace std;
// int main()
// {
      // binary operator
      //  int a = 35;
      //  int b = 5;
      //  cout << "enter the number of sum:" << (a + b) << endl;
      //  cout << "enter the number of sub:" << (a - b) << endl;
      //  cout << "enter the number of mul:" << (a * b) << endl;
      //  cout << "enter the number of div:" << (a / b) << endl;
      //  cout << "enter the number of modulo:" << (a % b) << endl;

      // unary operator
      // int a = 3;
      // // post increment
      // a++; // 4
      // cout << a << endl;
      // a--;
      // cout << a<<endl;

      // // pre decrement
      // ++a;
      // cout << a << endl;
      // a--;
      // cout << a << endl;

      //post
//       int a=3;
//      // int b=a--;//--a
//       int b=a++;//++a
//       cout<<a<<endl;
//       cout<<b<<endl;
      
//assignment operator
// int a=10;
// a+=5;//a=a+5=>15
// cout<<a<<endl;//15
// a-=5;
// cout<<a<<endl;
// a*=5;
// cout<<a<<endl;
// a/=5;
// cout<<a<<endl;
// a%=5;
// cout<<a<<endl;

//relational operators->T/F(TRUE-1/FALSE-0)
// int a=3;
// int b=5;
// cout<<(a>b)<<endl;
// cout<<(a>=b)<<endl;
// cout<<(a<b)<<endl;
// cout<<(a<=b)<<endl;
// cout<<(a==b)<<endl;
// cout<<(a!=b)<<endl;

//logical operator
// int a=3;
// int b=5;
// cout<<((a<b) && (a<b))<<endl;
// cout<<((a<b) || (a<b))<<endl;
// cout<<(!(a==b))<<endl; 
//        return 0;
// }
#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Arithmetic Operations"<<endl;

    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    cout << "Modulus = " << a % b << endl;

    return 0;
}
