#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculator
{
    int a, b;

public:
    void getdataSimple()
    {

        cout << " enter the value of a : " << endl;
        cin >> a;
        cout << " enter the value of b : " << endl;
        cin >> b;
    }
    void performoperationsSimple()
    {
        cout << " the value of  a+b : " << a + b << endl;
        cout << " the value of a-b : " << a - b << endl;
        cout << " the value of a*b : " << a * b << endl;
        cout << " the value of a/b : " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getdataScientific()
    {

        cout << " enter the value of a : " << endl;
        cin >> a;
        cout << " enter the value of b : " << endl;
        cin >> b;
    }
    void performoperationsScientific()
    {
        cout << " the value of  sin(a) : " << sin(a) << endl;
        cout << " the value of  cos(a) : " << cos(a) << endl;
        cout << " the value of  tan(a) : " << tan(a) << endl;
        cout << " the value of  exp(a) : " << exp(a) << endl;

        cout << " the value of  sin(b) : " << sin(b) << endl;
        cout << " the value of  cos(b) : " << cos(b) << endl;
        cout << " the value of  tan(b) : " << tan(b) << endl;
        cout << " the value of  exp(b) : " << exp(b) << endl;
    }
};

class hybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};

int main()
{
    // simplecalculator calc;
    // scientificCalculator calc;
    // calc.getdata();
    // calc.performoperations();
    hybridCalculator calc;
    calc.getdataScientific();
    cout << "ScientificCalculator" << endl;
    calc.performoperationsScientific();
    calc.getdataSimple();
    cout << "SimpleCalculator" << endl;
    calc.performoperationsSimple();
    return 0;
}