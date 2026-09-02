#include <iostream>

using namespace std;
 
 class employee 
 {
    private:
        int a ,b ,c;
        public:
        int d,e;
        void SetData(int a1,int b1, int c1);
        void getdata(){
        cout <<"the value of a is " << a << endl;
        cout <<"the value of b is " << b << endl;
        cout <<"the value of c is " << c << endl;
        cout <<"the value of d is " << d << endl;
        cout <<"the value of e is " << e << endl;
        }
 };
  void employee::SetData(int a1, int b1, int c1) {
        a = a1;
        b = b1;
        c = c1;
    }
int main() {
   employee pawan;
  // pawan.a=134; ---> a is private, cannot be accessed directly
    pawan.d = 34;
    pawan.e = 56;
    pawan.SetData(1, 2, 3);
    pawan.getdata(); 
    return 0;
}