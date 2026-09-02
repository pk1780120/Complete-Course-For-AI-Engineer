//1-D DYNAMIC MEMORY ALLOCATION
/*#include <iostream>
using namespace std;
int main() {
    int size;
    cin>>size;
   int *arr= new int[size];
   int x=1;
   for(int i=0;i<size;i++){
    arr[i]=x;
    cout<<arr[i]<<" ";
    x++;
   }
   cout<<endl;
    return 0;
}*/

// static memory allocation
 /* #include <iostream>
  
  using namespace std;
   void func(){
     int arr[100]={1,2,3,4,5};
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   return; 
   }
  int main() {
    func();
    cout<<" ";
    return 0;
  }*/
 // dynamic memory allocation
   /*#include <iostream>
   using namespace std;
   void funcint(){
    int *ptr=new int;
    *ptr=5;
    cout<<*ptr;
    delete ptr;
   }
     void funcarrr(){
         int size;
    cin>>size;
   int *ptr= new int[size];
   int x=1;
   for(int i=0;i<size;i++){
    ptr[i]=x;
    cout<<ptr[i]<<" ";
    x++;
   }  
   cout<<endl;
   delete[] ptr;//free
     }
   int main() {
        funcint();
    return 0;
   }*/
  
   //memory leek
    /* #include <iostream>
   using namespace std;
     void funcarr(){
         int size;
    cin>>size;
   int *ptr= new int[size];
   int x=1;
   for(int i=0;i<size;i++){
    ptr[i]=x;
    cout<<ptr[i]<<" ";
    x++;
   }  
   cout<<endl;
     }
   int main() {
        funcarr();
    return 0;*/
//memory leek
   /*#include <iostream>
   using namespace std;
    int *func(){
        int *ptr = new int;
        *ptr =1200;
        cout<<"ptr points to : "<<*ptr << endl;

        return ptr;
    }
   int main() {
        int *x = func();
        cout << *x << endl;
    return 0;
   }*/
  //2-D DYNAMIC MEMORY ALLOCATION in arrays row wise
   /*#include <iostream>
   using namespace std;
    
   int main() {
        int rows, cols;
        cout << "enter rows :";
        cin >> rows;
        cout << "enter cols :";
        cin >> cols;
        int* *matrix= new int*[rows];
        for(int i=0; i<rows;i++){
            matrix[i] = new int[cols];  
    
        }
        //data store
        int x=1;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                matrix[i][j]=x++;
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<matrix[2][2]<<endl;
        cout<<*(*(matrix+2)+2)<<endl;
    return 0;
   }*/

   //STL - STANDARD  TEMPLATE LIBRARY OF C++
  //1-D VECTORS
  /*#include <iostream>  
  #include <vector>  
  using namespace std;
   
  int main() {
    //vector<int> vec1 {1,2,3,4};
        vector<int> vec1(10,-1) ;
    cout << vec1.size() << endl;
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";

    }
    cout<<endl;
    return 0;
  }*/
 // implementation in memory
    /*#include <iostream>
    #include <vector>
    using namespace std;
     
    int main() {
        vector<int> vec ={1,2,3};
        cout << " size : "<< vec.size()<<endl;
        cout<< "capacity : "<<vec.capacity()<<endl;

        vec.push_back(4);
        cout << " size : "<< vec.size()<<endl;//4
        cout<< "capacity : "<<vec.capacity()<<endl;//4
        return 0;
    }*/
   /* #include <iostream>
    #include <vector>
    using namespace std;
     
    int main() {
        vector<int> vec;
        cout << " size : "<< vec.size()<<endl;
        cout<< "capacity : "<<vec.capacity()<<endl;

        vec.push_back(4);
        cout << " size : "<< vec.size()<<endl;//1
        cout<< "capacity : "<<vec.capacity()<<endl;//1

        vec.pop_back();
        cout << " size : "<< vec.size()<<endl;//0
         cout<< "capacity : "<<vec.capacity()<<endl;//1

        return 0;
    }*/
    //pair sum linear leetcode
     /*#include <iostream>
     #include <vector>
     using namespace std;
     vector<int> pairsum(vector<int> arr,int target){ 
        int st=0, end=arr.size()-1;
        int currsum=0;
        vector<int> ans;
        while(st < end){
            currsum=arr[st]+arr[end];
            if(currsum  == target){
                ans.push_back(st);
                ans.push_back(end);
                return ans;
            }else if(currsum > target){
                end--;
            } else {
                st++;
            }
        }
         return ans;
           }
     int main() {
        vector<int> vec ={2,7,11,15};
        int target=9;
        vector<int> ans =pairsum(vec,target);
        cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;
        return 0;
     }*/
    //2-D VECTORS 
    /*#include <iostream>
     #include <vector>
    using namespace std;
     
    int main() {
        vector <vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
        for (int i=0; i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }*/
   //only  possible in vector not in array matrix
     /*#include <iostream>
     #include <vector>
    using namespace std;
     
    int main() {
        vector <vector<int>> matrix = {{1,2,3},{4,5},{6}};
        for (int i=0; i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    } */
   //practice questions
     #include <iostream>
     #include <vector>
    using namespace std;
     
    int main() {
        vector<int> vec;
        for(int i=0;i<5;i++){
            vec.push_back(i);
        }
        cout<< vec.size()<<endl;
        cout<<vec.capacity()<<endl;
        return 0;
    }