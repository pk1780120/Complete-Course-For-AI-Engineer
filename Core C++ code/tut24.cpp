#include <iostream>

using namespace std;
//   count is the Static data members of the class employee
class employee {
    int id;
     static int count;
public:
    void setData(void) {
        cout << "Enter id: "<<endl;
         cin >> id; 
        count++;
      }
    void getData(void)
     {
        cout <<" the id of this employee"<<id<<"and this is employee number"<<count<< endl;
    } 
      static void getCount(void) {
        cout << "The value of count is: " << count << endl;
      }
};
int employee :: count=1000; // static data member initialization; 
int main() {
    employee pawan,purnvashi,prithvi;
    //pawan.id = 1;
    // pawan.count = 1; // Error:cannot do this as id and 'count' is private
    pawan.setData();
    pawan.getData();
   employee::getCount(); // Accessing static member function using class name
   
   purnvashi.setData();
    purnvashi.getData();
    employee::getCount(); // Accessing static member function using class name

    prithvi.setData();
    prithvi.getData();
    employee::getCount(); // Accessing static member function using class name
    return 0;
}