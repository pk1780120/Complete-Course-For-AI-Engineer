
/* #include <iostream>
#include <cstring>
using namespace std;

int main() {
    char st[50];
    cin>>st;
    int l =strlen(st);
    for(int i =0;i<=l/2;i++){
        char temp = st[i];
        st[i]= st[l-1-i];
        st[l-1-i]=temp;
    }
    cout<<st<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
   int arr[3];
   int sum=0;
   for(int i=0;i<3;i++){
       cin>>arr[i];
       sum+=arr[i];
   }
  cout<<sum<<endl;

   return 0;
}*/

// maximum number of array

/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    cout << "Maximum element in array = " << maxVal << endl;
    return 0;
}*/
// print key found of array

/*#include <iostream>
using namespace std;

int main()
{
    int a[10], lower_bound, upper_bound, mid, key, n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements in sorted order: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter value to find: ";
    cin >> key;

    lower_bound = 0;
    upper_bound = n - 1;
    bool found = false;

    while (lower_bound <= upper_bound)
    {
        mid = (lower_bound + upper_bound) / 2;

         if (a[mid] == key)
        {
            cout << "Key found at index " << mid << endl;
            found = true;
            break;
        }
        else if (a[mid] < key)
        {
            lower_bound = mid + 1;
        }
        else
        {
            upper_bound = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Key not found" << endl;
    }

    return 0;
}*/
/*#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* one = new Node();
    Node* two = new Node();
    Node* three = new Node();

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    two->next = three;
    three->next = NULL;

    Node* head = one;

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}*/

//  Bubble Sort Program in C++

/*#include <iostream>
using namespace std;

// Bubble Sort Function
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[5] = {5, 9, 1, 8, 4};
    int n = 5;

    cout << "Original Array: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}*/
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


        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minidx]) {
                minidx = j;
            }
        }

        swap(arr[i], arr[minidx]);
    }

    print(arr, n);
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    selectionsort(arr, 5);
    return 0;
}*/
// MERGE SORT
#include <iostream>
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
}
