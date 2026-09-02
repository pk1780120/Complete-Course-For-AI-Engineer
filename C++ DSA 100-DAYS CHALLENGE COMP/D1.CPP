              /* POINTER */
//address of operator

/*#include <iostream>
using namespace std;
int main() {
     int a=10;
      cout<<&a<<endl;
    return 0;
}*/

//pointer variable

/*#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *ptr=&a;
    float pi=3.14;
    float *ptr2=&pi;
    cout<<*ptr<<"="<<ptr<<endl;
    cout<<*ptr2<<"="<<ptr2<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *ptr=&a;
    float pi=3.14;
    float *ptr2=&pi;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr2)<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<&ptr<<"="<<pptr<<endl;
    return 0;
}*/

//dereferencing operator

//#include <iostream>
//using namespace std;
//int main() {
    /*int a=10;
    cout<<&a<<endl;
    cout<<*(&a)<<endl;*/
    //or
    /*int a=10;
    int *ptr=&a;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=20;
    cout<<a<<endl;
    return 0;
}*/

//null pointer
/*#include <iostream>
using namespace std;
int main() {
    int *ptr=NULL;
    cout<<ptr<<endl;

    cout <<*ptr << endl; //undefined behavior or segmentation fault
    cout<<"bye"<<endl;
    return 0;
}*/

//passng argument

#include <iostream>
using namespace std;
//call by value
/*void changeA(int param){
    param=20;
    cout<<param<<endl;
}*/
// pass by reference using pointer
/*void changeA(int *ptr){
    *ptr=20;
    cout<<*ptr<<endl;
}*/

/*void changeA(int *ptr){
    *ptr=20;
    cout<<ptr<<endl;
}*/
//pass by reference using reference variable
void changeA(int &param){
    param=20;
    cout<<param<<endl;
}

int main() {
    /*int a=10;
    changeA(&a);
    cout<<a<<endl;*/

 /*int a=10;
  int &b =a;
  b=25;
    cout<<a<<endl;
    cout<<b<<endl;*/

    int a=10;
    changeA(a);
    cout<<a<<endl;
    return 0;
}
