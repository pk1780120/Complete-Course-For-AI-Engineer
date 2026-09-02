#include <iostream>

using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << " the value of base1 is " << base1int << endl;
        cout << " the value of base2 is " << base2int << endl;
        cout << " the sum of these values is " << base1int + base2int << endl;
    }
};
int main()
{
    derived pawan;
    pawan.set_base1int(211);
    pawan.set_base2int(209);
    pawan.show();
    return 0;
}














