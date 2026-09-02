#include <iostream>

using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printdataBase1(void)
    {
        cout << "the value of data1 is" << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printdataBase2(void)
    {
        cout << "the value of data2 is" << data2 << endl;
    }
};

class derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    derived( int a, int b,  int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called" << endl;
    }
    void printdataderived(void)
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    derived pawan(1, 2, 3, 4);
    pawan.printdataBase1();
    pawan.printdataBase2();
    pawan.printdataderived();
    return 0;
}