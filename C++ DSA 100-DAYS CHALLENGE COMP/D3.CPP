//SORTED ARRAY ASCENDING ORDER
/*#include <iostream>
using namespace std;
   void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
 void  bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){//descending order ke liye only < sign lagana hai
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr,n);
 }
int main() {
    int arr[5]={5,4,1,3,2};
    bubblesort(arr,5);
    return 0;
} */

//if arr are alreadysort given
/*#include <iostream>
using namespace std;
   void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
 void  bubblesort(int arr[],int n){
    bool isswap=false;
    for(int i=0;i<n-1;i++){
        cout<<"outer loop";
        for(int j=0;j<n-i-1;j++){
            cout<<"inner loop";
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if(!isswap){//already sorted
            return; 
        }
    }
    print(arr, n);
 }
int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    bubblesort(arr,10);
    cout<<endl;
    return 0;
} */
//selection sort

/*#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionsort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minidx = i;

        // Loop to find the minimum element in the remaining array
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minidx]) {//descending order ke liye only < sign lagana hai
                minidx = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[i], arr[minidx]);
    }

    // Print the sorted array
    print(arr, n);
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    selectionsort(arr, 5);
    return 0;
}*/

//INSERTION SORT
 /*#include <iostream> 
 using namespace std;
  
void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
  void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){//descending order ke liye only < sign lagana hai
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);
  }
 int main() {
    int arr[5]={5,4,1,3,2};
    insertionsort(arr,5);
    return 0;
 }*/

 // COUNTING SORT
 /*#include <iostream>
 using namespace std;
 void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
  void countsort(int arr[], int n){
    int freq[100000]={0};//range
    int minval=INT8_MAX,maxval=INT8_MIN;
    for(int i=0;i<n;i++){
        minval = min(minval,arr[i]);
        maxval =max(maxval,arr[i]);
    }
    //1st step-o(n)
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    //2nd step-o(range)=max-min
    for(int i=minval,j=0;i<=maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);
  }
 int main() {
    int arr[8]={1,4,1,3,2,4,3,7};
    countsort(arr,8);
    return 0;
 }*/
  // INBUILT SORT
/*#include <iostream>
#include <algorithm>   // sort(), min(), max()
#include <climits>     // INT_MAX, INT_MIN
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countsort(int arr[], int n) {
    int freq[100000] = {0}; // range
    int minval = INT_MAX, maxval = INT_MIN;

    // find min and max value
    for(int i = 0; i < n; i++) {
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }

    // count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // reconstruct sorted array
    for(int i = minval, j = 0; i <= maxval; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}

int main() {
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};

    // sort part of array (index 2 to 4) in descending order
    sort(arr + 2, arr + 5, greater<int>());

    print(arr, 8);
    return 0;
}*/



