#include <iostream>

using namespace std;
template <class t>
class pawan
{
public:
    t data;
    pawan(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void pawan<t>::display()
{
    cout << data;
}

void func(int a){
    cout<<"i am first func()"<<a<<endl;
}
template <class t>
void func(t a){
    cout<<"i am templatised func()"<< a<<endl;
}

template <class t>
void func1(t a){
    cout<<"i am templatised func()"<< a<<endl;
}



int main()
{
    /* pawan<float> h(5.7);
    pawan<char> h('c');
     pawan<int> h(96);
    cout << h.data << endl;
    h.display();*/

   // func(4);//exact match takes the highest priority
    func1(4);//exact match takes the highest priorit
    return 0;
}