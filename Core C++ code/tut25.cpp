#include <iostream>

using namespace std;
 class employee
 {
 private:
    int id;
    int salary;
 public:
    void setid(void) {
         salary = 1000;
        cout << "Enter the id of the employee: " << endl;
        cin >> id;
    }
    void getid(void) {
        cout << "The id of the employee is: " << id << endl;
    }
};

int main() {
    //employee pawan, purnvashi, prithvi,pranav;
    // pawan.setid();
    // pawan.getid();
    employee fb[4];
     for (int i = 0; i <4; i++)
     {
        fb[i].setid();
        fb[i].getid();
     }
    return 0;
}