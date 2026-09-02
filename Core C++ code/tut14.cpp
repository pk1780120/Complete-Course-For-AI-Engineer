#include <iostream>

using namespace std;
typedef struct employee
//struct employee
{
    int eid; // 4 bytes
    char favchar;// 1 byte
    float salary;// 4 bytes
} ep;

  union money
{
    /* data */
    int rice;      // 4 bytes
    char car;      // 1 byte
    float pounds;  // 4 bytes
};


 
int main() {
 //enum
    enum meal { breakfast, lunch, dinner };
    meal m1 = lunch;
   /* cout << breakfast << endl; // 0
    cout << lunch << endl;     // 1
    cout << dinner << endl;    // 2*/
    cout << m1 << endl; // 1

 // union is a data type that allows storing different data types in the same memory location.
  /* union money m1;
    m1.rice = 34;
    m1.car = 'c';*/
   // m1.pounds = 45.5;
    //cout << m1.rice << endl;
   // cout << m1.car << endl;

    //stuctures
   //ep pawan;
   //struct employee pawan;
   /* struct employee purnavashi;
    struct employee prathvi;
    pawan.eid = 1;
    pawan.favchar = 'c';
    pawan.salary = 120000.0;
    cout << "the value is" << pawan.eid << endl;
    cout << "the value is" << pawan.favchar << endl;
    cout << "the value is" << pawan.salary << endl; */
     
    return 0;
}