// MERGE SORT
/*#include <iostream>
#include <vector>

using namespace std;
 void merge(int arr[],int si,int mid,int ei){
    vector<int> temp;
    int i = si;
    int j = mid +1;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }
   while(i <=mid){
    temp.push_back(arr[i++]);
   }
   while(j <= ei){
    temp.push_back(arr[j++]);
   }
   //vector -> org arr
   for(int idx=si,x=0;idx<=ei;idx++){//org arr
    arr[idx] =temp[x++];
   }
 }
 void mergesort(int arr[],int si, int ei){//o(nlogn)
    if(si >= ei){
        return ;
    }
    int mid = si + (ei - si)/2;
    mergesort(arr,si,mid);//left half
    mergesort(arr,mid+1,ei);//right half
    merge(arr,si,mid,ei);//conquer
 }
 void printarr(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
 }
int main() {
    int arr[6] ={6,3,7,5,2,4};
    int n =6;
    mergesort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}*/
// QUICK SORT
/*#include <iostream>
#include <vector>
using namespace std;
  void printarr(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
 }
 int partition(int arr[],int si,int ei){
    int i = si -1;
    int pivot = arr[ei];
    for (int j=si; j<ei;j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    //pivotidx=i
    return i;
 }
 void quicksort(int arr[],int si,int ei){
    if(si >= ei){
        return;
    }
    int pivotidx = partition(arr,si,ei);
    quicksort(arr,si,pivotidx-1);
    quicksort(arr,pivotidx+1,ei);
 }
int main() {
     int arr[6] ={6,3,7,5,2,4};
    int n =6;
    quicksort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}*/
// SEARCH IN ROTATED SEARCH
#include <iostream>
#include <vector>
using namespace std;
int search(int arr[], int si, int ei, int tar)
{
    if (si > ei)
    {
        return -1;
    }
    int mid = si + (ei - si) / 2;
    if (arr[mid] == tar)
    {
        return mid;
    }
    if (arr[si] <= arr[mid])
    { // l1
        if (arr[si] <= tar && tar <= arr[mid])
        {
            // left half
            return search(arr, si, mid - 1, tar);
        }
        else
        {
            // right half
            return search(arr, mid + 1, ei, tar);
        }
    }
    else
    {
        // l2
        if (arr[mid] <= tar && tar <= arr[ei])
        {
            // right half
            return search(arr, mid + 1, ei, tar);
        }
        else
        {
            // left half
            return search(arr, si, mid - 1, tar);
        }
    }
}
int main()
{
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    cout << "idx:" << search(arr, 0, n - 1, 2) << endl;
    return 0;
}
