#include <iostream>

using namespace std;
class baseclass
{
public:
    int var_base;
    void display()
    {
        cout << " displaying base class variable var_base " << var_base << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << " displaying base class variable var_base " << var_base << endl;
        cout << " displaying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived; // pointing base class poiter to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer-> var_derived = 314;//error dega
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    derivedclass *derived_class_poiter;
    derived_class_poiter = &obj_derived;
    derived_class_poiter->var_base = 90;
    derived_class_poiter->var_derived = 89;
    derived_class_poiter->display();

    return 0;
}