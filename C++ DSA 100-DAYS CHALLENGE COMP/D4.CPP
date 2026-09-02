/*#include <iostream>
using namespace std;

int main() {
    int stu[3][3]={{100,100,100},{85,74,89},{63,72,65}};
    cout<<"stu"<<stu[2][2]<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int arr[3][4];
    int n=3,m=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

// SPIRAL MATRIX
/*#include <iostream>
using namespace std;
     void spiralmatrix(int mat[][4], int n, int m){
        int srow=0,scol =0;
        int erow=n-1,ecol=m-1;
        while(srow <= erow && scol<=ecol){//odd matrix
       // top
       for(int j=scol;j<=ecol;j++){
        cout<<mat[srow][j]<<" ";
       }
       // right
       for(int i=srow+1;i<=erow;i++){
        cout<<mat[i][ecol]<<" ";
       }
       // bottom
       for(int j=ecol-1;j>=scol;j--){
        if(srow == erow){//middle
            break;
        }
        cout<<mat[erow][j]<<" ";
       }
       // left
       for(int i=erow-1;i>=srow+1;i--){
        if(scol == ecol){//middle
            break;
        }
        cout<<mat[i][scol]<<" ";
       }
       srow++;scol++;
       erow--;ecol--;
     }
     cout<<endl;
    }
    int main(){
int matrix[4][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}};
  spiralmatrix(matrix,4,4);

    return 0;
}*/
// COPY
/*#include <iostream>
using namespace std;
     void spiralmatrix(int mat[][4], int n, int m){
        int srow=0,scol =0;
        int erow=n-1,ecol=m-1;
        while(srow <= erow && scol<=ecol){//odd matrix
       // top
       for(int j=scol;j<=ecol;j++){
        cout<<mat[srow][j]<<" ";
       }
       // right
       for(int i=srow+1;i<=erow;i++){
        cout<<mat[i][ecol]<<" ";
       }
       // bottom
       for(int j=ecol-1;j>=scol;j--){
        if(srow == erow){//middle
            break;
        }
        cout<<mat[erow][j]<<" ";
       }
       // left
       for(int i=erow-1;i>=srow+1;i--){
        if(scol == ecol){//middle
            break;
        }
        cout<<mat[i][scol]<<" ";
       }
       srow++;scol++;
       erow--;ecol--;
     }
     cout<<endl;
    }
    int main(){
int matrix[4][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}};
  spiralmatrix(matrix,4,4);

    int matrix2[5][4]={{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16},
                      {17,18,19,20}};
  spiralmatrix(matrix2,5,4);

    return 0;
}*/
// DAIGONAL SUM
/*#include <iostream>
using namespace std;
int diagonalsum(int mat[][3], int n)
{ // t.c=o(n)
    int sum = 0;
    // pd : j=i
    // sd:j=n-i-1
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
        if (i != n - i - 1)
        {
            sum += mat[i][n - i - 1];
        }
    }
    cout << "sum =" << sum << endl;
    return sum;
}
int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};


    int matrix2[3][3] = {{1, 2, 3},
                        {4,5, 6},
                        {7,8,9}};
    diagonalsum(matrix2, 3);
    return 0;
}*/

// m*n maethod to find target value

/*#include <iostream>
using namespace std;

class solution{
  public:

    bool searchinrow(int arr[][4], int target, int row, int n){
        int st = 0, end = n - 1;

        while(st <= end){
            int mid = st + (end - st) / 2;

            if(target == arr[row][mid]){
                return true;
            }
            else if(target > arr[row][mid]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return false;
    }

    bool searchmatrix(int arr[][4], int target, int m, int n){
        int strow = 0, endrow = m - 1;

        while(strow <= endrow){
            int midrow = strow + (endrow - strow) / 2;

            // target iss row ke andar lie karta hai
            if(target >= arr[midrow][0] && target <= arr[midrow][n-1]){
                return searchinrow(arr, target, midrow, n);
            }
            // right / down
            else if(target > arr[midrow][n-1]){
                strow = midrow + 1;
            }
            // left / up
            else{
                endrow = midrow - 1;
            }
        }
        return false;
    }
};

int main(){
    int arr[3][4] = {
        {1, 2,3, 5},
        {10,11,16,20},
        {23, 30, 34, 60}
    };

    int target = 34;

    solution obj;

    if(obj.searchmatrix(arr, target, 3, 4)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}*/


/// STAIRE CASE METHOD
   /*#include <iostream>
   using namespace std;
    bool search(int mat[][4], int n,int m, int key){
        int i=0, j=m-1;
        //o(n+m)
        while(i<n && j>=0){
            if(mat[i][j] == key){
                cout<<" found at cell :("<<i<<","<<j<<")\n";
                return true;
         
            }else if(mat[i][j] > key){
                //left
                j--;

            }else {
                //down
                i++;
            }
        }
        cout<<" key not found:"<<endl;
        return false;
    }
   int main() {
        int matrix[4][4]={{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    search(matrix,4,4,33);
    return 0;
   } */

   //MATRIX POINTER
   /*#include <iostream>
   using namespace std;
    
   int main() {
        int mat[4][4]={{ 2,3, 4},{5,6,7,8},
        {9,10,11,12},
        {13, 14, 15, 16}};
    cout <<mat<<" ="<<&mat[0][0]<<endl; 
    cout<<mat+1<<"!="<<&mat[0][1]<<endl;
        cout<<mat+1<<"="<<&mat[1][0]<<endl;

    return 0;
   }*/

   #include <iostream>
   using namespace std;
    void func(int mat[][4],int n,int m){
    /*cout <<"0th row ptr "<<mat<<endl; 
    cout<<" 1st row ptr"<<mat+1<<endl;
    cout<<"2nd row ptr"<<mat+2<<endl;*/

    /*cout <<"0th row  value "<<*(mat)<<endl; 
    cout<<" 1st row  value"<<*(mat+1)<<endl;
    cout<<"2nd row value"<<*(mat+2)<<endl;*/
    cout<<*(*(mat + 2)+2)<<endl;
    }
     
    void func2(int (*mat)[4],int n,int m){

    }
   int main() {
        int mat[4][4]={ { 2,3, 4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13, 14, 15, 16}}; 
        func(mat,4,4)  ;              
    return 0;
   }