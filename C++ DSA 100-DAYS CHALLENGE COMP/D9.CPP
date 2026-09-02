//RECURSION
/*#include <iostream>

using namespace std;
  int factorial(int n){
    if(n==0){
      return 1;
    }
    return n*factorial(n-1);
  }
int main() {
    int ans = factorial(5);
    cout<<ans<<endl;
    return 0; 
}*/
//print number in decreasing order from 1 to n
/*#include <iostream>

using namespace std;
  void print(int n){
    if(n==0){
         return;
    }
    cout<<n<<" ";//kaam
    print(n-1);//faith,next call
  }
int main() {
    print(5);
  return 0;
}*/
//sum of n natural number
 /*#include <iostream>
  
  using namespace std;
   int sum(int n){
    if(n==1){
      return 1;
    }
    return n + sum(n-1);
   }
  int main() {
    cout<<sum(6)<<endl;
    return 0;
  }*/
 // print nth fibonacci number   
 /*#include <iostream>
 
 using namespace std;
   int fibonacci(int n){
    if(n==0 || n==1){
      return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
   }
 int main() {
   cout<< fibonacci(5);
  return 0;
 }*/
  //checked if array sorted
  /*#include <iostream>
  
  using namespace std;
   bool issorted(int arr[],int n,int i){
    if(i==n-1){
      return true;

    }
    if(arr[i]>arr[i+1]){
      return false;
    }
    return issorted(arr,n,i+1);
   }
  int main() {
    int arr1[5]={1,2,3,4,5};//sorted :1
    int arr2[5]={1,2,4,3,5};//unsorted :0

    cout << issorted(arr2,5,2);
    return 0;
  }*/
 // first occurence 
   /*#include <iostream>
   #include <vector>
   using namespace std;
    int firstoccur(vector<int> arr,int i,int target ){
      if(i == arr.size()){
        return -1;
      }
      if(arr[i] == target){
        return i;

      }
      return firstoccur(arr,i+1,target);
    }

   int main() {
      vector<int> arr = {1,2,3,3,3,4};
      cout << firstoccur(arr,0,3)<<endl;
    return 0;
   }*/
  //last occurence
  /*#include <iostream>
   #include <vector>
   using namespace std;
    int lastoccur(vector<int> arr,int i,int target ){
      if(i == arr.size()){
        return -1;
      }
            int idxfound=  lastoccur(arr,i+1,target);

      if(  idxfound==-1 && arr[i] == target){
        return i;

      }
      return idxfound;
    }

   int main() {
      vector<int> arr = {1,2,3,3,3,4};
      cout << lastoccur(arr,0,3)<<endl;
    return 0;
   }*/
  //print X to the power N
  /*#include <iostream>
  #include <vector>
  using namespace std;
   int pow(int x, int n){
    if(n==0){
      return 1;
    }
    int halfpow = pow(x,n/2);
    int halfpowsquare = halfpow * halfpow;

    if(n % 2 != 0){
      //odd
      return x * halfpowsquare;
    }
    return halfpowsquare;
   }
  int main() {
    cout << pow(2,10)<<endl;
    return 0;
  }*/