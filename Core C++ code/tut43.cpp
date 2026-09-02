#include <iostream>

using namespace std;
 class base1{
public:
void greet(){
    cout << "how are you?" << endl;

}
 };
 class base2{
public:
void greet(){
    cout << "kaise ho?" << endl;
}
 };

 class derived : public base1, public base2{
    int a;
    public:
    void greet(){
        base2::greet();
    }
 };

 class b{
    public:
    void say(){
        cout<<"hello pawan"<<endl;
    }
 };
  class d: public b{
    public:
    void say(){
        cout<<"hello my dear papa"<<endl;
    }
};
int main() {
    //ambibuity 1 
   /* base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet();*/


    //ambibuity 2
   b b;
   b.say();

   d d;
   d.say(); 
    return 0;
}        