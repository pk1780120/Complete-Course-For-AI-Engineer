/*#include <iostream>
using namespace std;
int main() {
    int X=5, Y=10;
    int *ptr1=&X, *ptr2=&Y;
    ptr2=ptr1;

    cout << "ptr2: " << ptr2 << endl;
    cout << "ptr1: " << ptr1 << endl;
    cout << "&X: " << &X << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    float* a, b;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
   int x;
   int *ptr;
   x = 7;
   ptr=&x;
   cout<<*ptr<<endl;
   return 0;
}*/
/*#include <iostream>
using namespace std;

void multipleby2(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}
int main()
{

    int x = 1, y = 2, z = 3;
    multipleby2(x, y, z);
    cout <<"multple of a*x : "<< x << endl;
    cout <<"multple of b*y : "<< y << endl;
    cout << "multple of c*z : "<< z << endl;
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptr += ch; 

    cout <<" value of:" <<a << endl;
    cout<<"value of:" << ch << endl;

    return 0;
}