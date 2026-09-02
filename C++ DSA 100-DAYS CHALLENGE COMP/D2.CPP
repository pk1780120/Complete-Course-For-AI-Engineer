/*#include <iostream>
using namespace std;
int main() {
     int marks[50];//0 to 49 times
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;

     cout<<marks[49]<<endl;

  return 0;
}   */
/*#include <iostream>
using namespace std;
int main() {
       int marks[50]={9,12,5,8};//0 to 49 times
       cout<<marks[0]<<endl;
       cout<<marks[1]<<endl;
       cout<<marks[2]<<endl;
       cout<<marks[3]<<endl;

       cout<<marks[49]<<endl;

    return 0;
}   */
/*#include <iostream>
using namespace std;
int main() {
       int marks[]={10,12,32,23,74};
        cout<<marks[0]<<endl;
       cout<<marks[1]<<endl;
       cout<<marks[2]<<endl;
       cout<<marks[3]<<endl;
       cout<<marks[4]<<endl;
    return 0;
} */
/*#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {1, 2, 3, 4, 5};
     cout << sizeof(marks)/sizeof(int) << endl;
    return 0;
}  */

/*#include <iostream>
using namespace std;
int main() {
    int arr[5]={5,6,8,9,2};
    cout<<"the number of arrays:"<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main() {
    int arr[5]={5,3,7,8,1};
    cout<<"the number of arrays:"<<endl;
    int len =sizeof(arr)/sizeof(int);
    for(int i=0;i<=len-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int arr[25]={5,3,7,8,1};
    cout<<"the number of arrays:"<<endl;
    int n =sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int arr[5];
    int n =sizeof(arr)/sizeof(int);
    cout<<"the number of arrays:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter the length of arrays:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 6, 7, 9, 12};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cout << "assinging val" << arr[i] << " to max\n ";
        }
    }
    cout << "max = " << max << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 6, 7, 9, 12};
    int n = sizeof(arr) / sizeof(int);
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << " min = " << min<< endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
void func(int arr[]){
    arr[0]=1000;
}
void func2(int *ptr){
    ptr[0]=1000;
}
int main() {
    int a=5;
    int *ptr = &a;
    cout<< ptr<<endl;

     int arr[]={1,2,3,4,5};
     int n =sizeof(arr)/sizeof(int);
     //cout << *arr << endl;
    // cout<<*(arr+1)<<endl;
     //cout<<*(arr+2)<<endl;
     func (arr);
     cout<<arr[0];
     //or
     // func2 (arr);
    // cout<<arr[0];

    return 0;
}*/
/*#include <iostream>
using namespace std;
void printArr(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ,";
    }
    cout << endl;
}
int main()
{;
    int n = sizeof(arr) / sizeof(int);
    int arr[] = {1, 2, 3, 4, 5}
    cout << "array size =" << sizeof(arr) << endl;
    printArr(arr, n);
    return 0;
}*/
// LINEAR SEARCH
/*#include <iostream>
using namespace std;
  int linearsearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
         return i;
        }
    }
    return -1;
  }
int main() {
    int arr[]={2,4,6,8,10,12,14,16};
    int n =sizeof(arr)/sizeof(int);
    cout<<linearsearch(arr,n,10)<<endl;
    return 0;
}*/

// REVERCE AN ARRAY by using extra space
/*#include <iostream>
using namespace std;
void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int copyArr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
    printArr(arr, n);
    return 0;
}*/
// WITHOUT USING ANY EXTRA SPACE(by using 2 pointer approach)
/*#include <iostream>
using namespace std;
void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    int start = 0, end = n - 1;
    while (start < end)
    {
        /* int temp = arr[start];
         arr[start] = arr[end];
         arr[end]=temp;*/
// or swap another method in c++
/* swap(arr[start], arr[end]);
 start++;
 end--;
}
printArr(arr, n);
return 0;
}*/

// BINARY SEARCH
// find key array
/*#include <iostream>
using namespace std;
int binsearch(int *arr, int n, int key)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    cout << binsearch(arr, n, 12) << endl;
    return 0;
}*/
// address change in pointer
/*#include <iostream>
using namespace std;
int main() {
    int x=10;
    int *ptr = &x;

    int y=25;
    ptr=&y;
    cout<<*ptr<<endl;//25
    return 0;
}*/

// array ppointer not change any value of address
/*#include <iostream>
using namespace std;
int main() {
  int arr[5 ];
  cout<<arr<<endl;//this is pointer value
  int y = 25;
  arr =&y;//this is not possible in c++
  return 0;
}*/

// pointer arithmatic
// for integer
/*#include <iostream>
using namespace std;
int main() {
  int a=10;
  int *aptr =&a;
  cout << aptr << endl;

  aptr++;// 1 int ++
  cout << aptr<<endl;
  return 0;
}*/
// for character
/*#include <iostream>
using namespace std;
int main() {
   char ch = 'a';
   char *ptr = &ch;   // pointer to char
   cout << "Before increment: " << (void*)ptr << endl;

   ptr = ptr++;     // move by 1 byte
   cout << "After increment : " << (void*)ptr << endl;
   return 0;
}*/
// for using increment and decrement operator for integer
/*#include <iostream>
using namespace std;
int main() {
    int a=5;
    int *ptr=&a;
     cout <<ptr<<endl;//1st

     ptr++;
     cout<<ptr<<endl;

     ptr--;
    cout<<ptr<<endl;//3rd
    return 0;
}*/
// pointer airthmatic
// for using increment and decrement from integer +3 val in normal pointer
/*#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int *ptr=&a;
    cout<<ptr<<endl;

    ptr=ptr+3;
    cout<<(ptr+3)<<endl;

    ptr-3;
    cout<<(ptr-3)<<endl;
    return 0;
}*/
// in case of array pointer
/*#include <iostream>
using namespace std;
void printArr(int *ptr, int n){
   for(int i=0; i<n; i++){
       cout << *(ptr+i)<<endl;
   }
}
int main() {
   int arr[]={1,2,3,4,5};
   int n = sizeof(arr)/sizeof(int);
   printArr(arr , n);
   return 0;
} */

// pointer arithmatic
// addition & substraction for normal pointer
/*#include <iostream>
using namespace std;
int main() {
   int a = 5;
   int *ptr1= &a;
   int *ptr2 = ptr1 + 3;
 cout << ptr2 << endl;
 cout << ptr1<<endl;

 cout<<ptr2-ptr1<<endl;
   return 0;
}*/
// array pointer
/*#include <iostream>
using namespace std;
int main() {
   int arr[20]={1,2,3,4,5};
   int *ptr1= arr;
   int *ptr2 = ptr1 + 3;//4

   cout<<*ptr2<<endl;
   cout<<*ptr1<<endl;

   cout<<(ptr2-ptr1)<<endl;
   return 0;
}*/
// comarison of two operator
/* #include <iostream>
using namespace std;
int main() {
 int arr[20]={1,2,3,4,5};
 int *ptr1= arr;
 int *ptr2 = ptr1 + 3;

 cout<<(ptr2>ptr1)<<endl;//yes:true:1
 return 0;
}*/
/* #include <iostream>
using namespace std;
int main() {
 int arr[20]={1,2,3,4,5};
 int *ptr1= arr;
 int *ptr2 = ptr1 + 3;

 cout<<(ptr1==arr)<<endl;
 return 0;
}*/

// print SUBARRAYS
/*#include <iostream>
using namespace std;
 void printSubarrays(int *arr, int n){
   for(int start=0;start<n;start++){//n
       for(int end=start; end<n;end++){//n
         //  cout<<"("<<start<<end<<")";
         for(int i=start; i<=end;i++){//n
           cout<<arr[i];
         }
         cout<<" ,";
       }
       cout<<endl;
   }
 }
int main() {
   int arr[5]={1,2,3,4,5};
   int n = 5;
   printSubarrays(arr,n);
   return 0;
}*/
// MAXIMUM SUBARRAY SUM
// BRUTE FORCE APPPROACH
/*#include <iostream>
using namespace std;
  void maxsubarraysum1(int *arr, int n ){
    int maxsum = INT8_MIN;
    for(int st=0;st<n;st++){
        for(int end=st; end<n;end++){
            int currsum=0;
            for(int i=st; i<=end;i++){
                currsum += arr[i];
            }
            cout<<currsum<<", ";
            maxsum=max(maxsum, currsum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum ="<<maxsum<<endl;
  }
int main() {
    int arr[6]={2,-3, 6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);

    maxsubarraysum1(arr, n);
    return 0;
}*/

// OPTMIZATION OF BRUTE FORCE FOR MAX SUBARRAY
/*#include <iostream>
using namespace std;
  void maxsubarraysum2(int *arr, int n ){
    int maxsum = INT8_MIN;
    for(int st=0;st<n;st++){//Start=2
         int currsum=0;
        for(int end=st; end<n;end++){//end=2,3,4,5
            currsum +=arr[end];
            maxsum=max(maxsum, currsum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum ="<<maxsum<<endl;
  }
int main() {
    int arr[6]={2,-3, 6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);

    maxsubarraysum2(arr, n);
    return 0;
}*/
// KADANE ALGORITHM IMPORTANT max subarray
/* #include <iostream>
 using namespace std;
  void maxsubarraysum3(int *arr, int n){
   int maxsum = INT8_MIN;
   int currsum =0;
   for(int i=0;i<n;i++){
       currsum += arr[i];
       maxsum = max(currsum, maxsum);
       if(currsum<0){
           currsum=0;
       }
   }
   cout<<"maximum subarray sum ="<<maxsum<<endl;
  }
 int main() {
   int arr[6]={2,-3, 6,-5,4,2};
   int n=sizeof(arr)/sizeof(int);
   maxsubarraysum3(arr, n);
   return 0;
 }*/

// BUY & SELL STOCKS
/*#include <iostream>
using namespace std;
void maxprofit(int *prices, int n)
{
    int bestbuy[100000];
    bestbuy[0] = INT8_MAX;
    for (int i = 1; i < n; i++)
    {
        bestbuy[i] = min(bestbuy[i - 1], prices[i - 1]);
    }
    int maxprofit = 0;
    for (int i = 0; i < n; i++)
    {
        int currprofit = prices[i] - bestbuy[i];
        maxprofit = max(maxprofit, currprofit);
    }
    cout << "max profit = " << maxprofit << endl;
}
int main()
{
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    maxprofit(prices, n);
    return 0;

}*/
// TRAPPING RAINWATER
#include <iostream>
using namespace std;
int trap(int *heights, int n)
{
    int leftmax[20000], rightmax[20000];
    leftmax[0] = heights[0];
    rightmax[n - 1] = heights[n - 1];
    for (int i = 1; i < n; i++)
    {
        leftmax[i] = max(leftmax[i - 1], heights[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = max(rightmax[i + 1], heights[i + 1]);
    }
    int watertrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int currwater = min(leftmax[i], rightmax[i]) - heights[i];
        if (currwater > 0)
        {
            watertrapped += currwater;
        }
    }
    cout << "water trapped = " << watertrapped << endl;
    return watertrapped;
}
int main()
{
    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(int);
    trap(heights, n);
    return 0;
}