#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    // constructor declaration
    complex(void);
    void printnumber()
    {
        cout << " your number is " << a << " + " << b << " i " << endl;
    }
};

complex ::complex(void) //---> this is a default construtor as it takes no parameters
{
    a = 10;
    b = 20;
    cout << "hello world" << endl;
}
int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}