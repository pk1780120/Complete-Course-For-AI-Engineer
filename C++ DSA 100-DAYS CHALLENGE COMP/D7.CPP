/*#include <iostream>

using namespace std;

int main() {
    //bitwise and operator
    cout<<(3&5)<<endl;
    return 0;
}*/
/*#include <iostream>

using namespace std;
 void oddoreven(int num){
    if(!(num & 1)){
        cout<<"even"<<endl;

    } else{
        cout << "odd "<<endl;
    }
 }
int main() {
    oddoreven(5);
    oddoreven(8);
    return 0;
}*/
// get ith bit
/*#include <iostream>
using namespace std;
  int getithbit(int num,int i){
    int bitmask = 1<<i;
    if(!(num & bitmask)){
        return 0;
    } else {
        return 1;
    }
  }
int main() {
    cout<< getithbit(6,2);
    return 0;
}*/
// set ith bit
/*#include <iostream>
using namespace std;
   int setithbit(int num, int i){
    int bitmask = 1 << i;
    return (num | bitmask);
   }
int main() {
    cout <<setithbit(6,3) << endl;
    return 0;
}*/
// clear ith bit
/*#include <iostream>
using namespace std;
  int clearithbit(int num,int i){
      int bitmask= ~(1<<i);
      return num & bitmask;
  }
int main() {
   cout << clearithbit( 6,1);
  return 0;
}*/
// ispwerof2
/*#include <iostream>
using namespace std;
int ispowerof2(int num)
{
    if (!(num & (num - 1)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << ispowerof2(4) << endl;
        cout << ispowerof2(16) << endl;
    cout << ispowerof2(13) << endl;
    cout << ispowerof2(7) << endl;

    return 0;
}*/

//practice question
  /*#include <iostream>
  using namespace std;
   void updateithbit(int num, int i, int val){
    num = num & ~(1<<i);//clear ith bit
    num = num |(val << i);
    cout << num << endl;
   }
    int main(){
  updateithbit(7,3,1);
    
    return 0;
  }*/
 //practice qs
  /*#include <iostream>
  using namespace std;
    void clearibits(int num,int i){
        int bitmask=(~0)<<i;
        num = num & bitmask;
        cout << num<<endl;
    }
  int main() {
     clearibits(15,2);
    return 0;
  }*/
 //count set bits
 /*#include <iostream>
 using namespace std;
   int countsetbits(int num){
    int count=0;
    while(num > 0){
        int lastdig = num & 1;
        count += lastdig;
        num = num>>1;
    }
    cout << count << endl;
    return count;
   }
 int main() {
    countsetbits(7);
    return 0;
 }*/
//fast exponentiation
  #include <iostream>
  
  using namespace std;
   void fastexpo(int x,int n){
    int ans = 1;
    while(n>0){
        int lastbit = n & 1;
        if(lastbit){
            ans = ans * x;
        }
        x = x*x;
        n = n>>1;
    }
    cout<<ans <<endl;
   }
  int main() {
    fastexpo(3,5);
    return 0;
  }