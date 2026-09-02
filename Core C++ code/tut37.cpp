
// derived class syntax
/*class {{derived-class -name} } : {{visibility - mode}}
{
class members/method/etc
}
note:
1. default visibility mode is private
2. public visibility mode: public members of the base class becomes public members of the derived class
3. pivate visibility mode: public members of the base class becomes private members of the derived class
4. private members are never inherted
*/
/*#include <iostream>

using namespace std;

// base class
class employee
{
    int id;

public:
    float salary;

public:
    employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    employee() {}

    int getId() // getter function banaya
    {
        return id;
    }
};

// creating a programmer class derived from employee base class
class programmer : public employee
{
public:
    int languagecode;

    programmer(int inpId) : employee(inpId) // base class constructor call
    {
        languagecode = 9;
    }

    void getdata()
    {
        cout << getId() << endl; // id ko direct access nahi, getter use kiya
    }
};

int main()
{
    employee pawan(1), aman(2);
    cout << pawan.salary << endl;
    cout << aman.salary << endl;

    programmer skillF(10);
    cout << skillF.languagecode << endl;
    cout << skillF.getId() << endl; // id ke liye getter function call
    skillF.getdata();

    return 0;
}*/
         //<--- OR----> 
// CODE 02 SAME 
#include <iostream>
using namespace std;

// Base class
class employee {
private:
    int id;

public:
    float salary;

    // Constructor
    employee(int inpId) {
        id = inpId;
        salary = 34.0;
    }

    employee() {}  // Default constructor

    int getId() {
        return id;
    }
};

// Derived class
class programmer : public employee {
public:
    int languagecode;

    // Constructor calling base class constructor
    programmer(int inpId) : employee(inpId) {
        languagecode = 9;
    }

    void getdata() {
        cout << "ID: " << getId() << endl;
        cout << "Language Code: " << languagecode << endl;
    }
};

int main() {
    // Creating employee objects
    employee pawan(1), aman(2);
    cout << "Pawan Salary: " << pawan.salary << endl;
    cout << "Aman Salary: " << aman.salary << endl;

    // Creating programmer object
    programmer skillF(10);
    cout << "Programmer Language Code: " << skillF.languagecode << endl;
    cout << "Programmer ID: " << skillF.getId() << endl;
    skillF.getdata();

    return 0;
}

