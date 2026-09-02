// #include <iostream>
// using namespace std;
// int main()
// {
//     // binary arthmetic operator
//     // int a = 5;
//     // int b = 2;
//     // cout << "+:" << (a + b) << endl;
//     // cout << "-:" << (a - b) << endl;
//     // cout << "*:" << (a * b) << endl;
//     // cout << "/:" << (a / b) << endl;
//     // cout << "%:" << (a % b) << endl;

//     //unary
//     int a=3;
//     //post increment
//     a--;//a=a-1
//      cout<<"post:"<<a<<endl;
//      --a;//a=a-1
//       cout<<"pre:"<<a<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     //user define binary;
//     int a, b;
//     cout << "enter the num of a:" << endl;
//     cin >> a;
//     cout << "enter the num of b:" << endl;
//     cin >> b;
//     cout << "+:" << (a + b) << endl;
//     cout << "-:" << (a - b) << endl;
//     cout << "*:" << (a * b) << endl;
//     cout << "/:" << (a / b) << endl;
//     cout << "%:" << (a % b) << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int a=50;
//     a+=5;//a=50+5=55
//  cout<<a<<endl;
//  a-=20;//a=55-20=35
//  cout<<a<<endl;
//  a*=2;//a=35*2=70
//  cout<<a<<endl;
//  a/=10;//a=70/10=7
//  cout<<a<<endl;
//  a%=3;//a=7%3=1
//  cout<<a<<endl;

// return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 2;
    // cout << (a == b) << endl;
    // cout << (a != b) << endl;
    // cout << (a > b) << endl;
    // cout << (a >= b) << endl;
    // cout << (a < b) << endl;
    // cout << (a <= b) << endl;

    //cout<<((a>b)&&(a>b))<<endl;//and-&
    //cout<<((a>b)||(a>b))<<endl;//or-|
    //cout<<((a<b)||(a>=b))<<endl;
    cout<<(!(a>b))<<endl;
    return 0;
}