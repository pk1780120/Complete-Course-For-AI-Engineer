#include <iostream>

using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void print_number(void)
    {
        cout << "  your  roll number is : " << roll_number << endl;
    }
};

class test : virtual public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << " the marks obtained in maths are : " << maths << endl;
        cout << " the marks obtained in physics are : " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << " your pt score is : " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << " your total score is : " << total << endl;
    }
};

int main()
{
    result pawan;
    pawan.set_roll_number(211);
    pawan.set_marks(74.8, 57.7);
    pawan.set_score(9);
    pawan.display();

    return 0;
}
