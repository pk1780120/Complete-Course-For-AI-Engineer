#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    // constructor declaration
    complex(int , int);
    void printnumber()
    {
        cout << " your number is " << a << " + " << b << " i " << endl;
    }
};

complex ::complex(int x , int y) //---> this is a parameeeetrized construtor it takes 2 parameters
{
    a = x;
    b = y;
   // cout << "hello world" << endl;
}
int main()
{
    //implicit call

    complex a(4,6);

    //explicit call
    complex b = complex(5, 7);
    a.printnumber();
     b.printnumber();
    return 0;
} 