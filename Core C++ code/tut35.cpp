#include <iostream>

using namespace std;
int count = 0;
 class  num{
  public:
  num(){
    count++;
    cout<<"this is the time when constructor is called for object number"<< count << endl;
  
}
 ~num(){
 count--;
    cout<<"this is the time when destructor is called for object number"<< count << endl;   
    }
 };
int main() {
   count++;
    cout<<"we are inside our main function" << endl; 
    cout<<"creating first objects n1"<<endl;
    num n1;
    {
      
      cout<<"entering this block"<<endl;
      cout<<"creating two more objects"<<endl;
      num n2, n3;
      cout<<"exitig this block"<<endl;  
    }
    cout<<"back to main"<< endl;
    return 0;
} 