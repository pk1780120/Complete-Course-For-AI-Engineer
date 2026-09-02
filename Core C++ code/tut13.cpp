#include <iostream>

using namespace std;
 
int main() {
    //array example
    int marks[5] = { 10, 20, 30, 40, 50 };

    int mathsMarks[4];
    mathsMarks[0] = 19;
    mathsMarks[1] = 29;
    mathsMarks[2] = 39;
    mathsMarks[3] = 49;

    cout << " these are mathMarks " << endl;
    cout << mathsMarks[0] << endl;
    cout << mathsMarks[1] << endl;
    cout << mathsMarks[2] << endl;
    cout << mathsMarks[3] << endl;
    //you can change the value of an array element
    marks[2]= 55;
    cout << " these are marks " << endl;
    cout << marks [0] << endl;
    cout << marks [1] << endl;
    cout << marks [2] << endl;
    cout << marks [3] << endl;
    cout << marks [4] << endl;

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout << " the value of marks "<<i<<" is "<< marks [i] << endl;
    }
    //pointer and array
    int *p = marks;
    cout<<*(p++)<<endl; // prints 10

    cout<<*p<<endl; // prints 20
    cout<<*(++p)<<endl; // prints 30

   // cout<<" the value of *p is "<<*p<<endl; 
   // cout<<" the value of *(p+1) is "<<*(p+1)<<endl;
   // cout<<" the value of *(p+2) is "<<*(p+2)<<endl;
   // cout<<" the value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
} 