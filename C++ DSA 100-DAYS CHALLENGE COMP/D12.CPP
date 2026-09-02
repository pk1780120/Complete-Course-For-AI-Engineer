/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
 void printarr(int arr[],int n){
    f or(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
  void changearr(int arr[],int n,int i){
     if(i== n){
        printarr(arr,n);
        return;
     }
     arr[i]=i+1;
     changearr(arr,n,i+1);
     arr[i] -= 2;
  }
int main()
{
  int arr[5]={0};
  int n =5;
  changearr(arr,n,0);
  printarr(arr,n);
    return 0;
}*/

// subsets
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
  void printsubsets(string str,string subset){
    if(str.size()==0){
        cout<<subset <<"\n";
        return;
    }
    char ch = str[0];
    //yes choice
    printsubsets(str.substr(1,str.size()-1),subset+ch);

    //no choice
   printsubsets(str.substr(1,str.size()-1),subset);

  }
int main() {
    string str = "abc";
    string subset =" ";
    printsubsets(str,subset);
    return 0;
}*/
// permutations
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
void permutations(string str,string ans){
  int n =str.size();
  if(n==0){
   cout << ans<<"\n";
   return;
  }

 for(int i=0; i<str.size();i++){
  char ch =str[i];
  string nextstr = str.substr(0,i)+ str.substr(i+1,n-i-1);
    permutations(nextstr ,ans + ch);
}
}
int main()
{
string str = "abc";
string ans = " ";
 permutations(str,ans);
return 0;
}*/
// queeens
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printboard(vector<vector<char>> board)
{
  int n = board.size();

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << "---------\n";
}
  bool issafe(vector<vector<char>>board , int row,int col){
    int n=board.size();
    //horizontal
    for(int j=0;j<n;j++){
      if(board[row][j]=='Q'){
        return false;
      }
    }
    //vertical
    for(int i=0;i<row;i++){
      if(board[i][col]=='Q'){
        return false;
      }
    }
    //daigonal left
    for(int i=row,j=col;i>=0  && j>=0;i--,j--){
      if(board[i][j]=='Q'){
        return false;
      }
    }
    //diagonal right
    for(int i=row,j=col;i>=0 && j<n;i--,j++){
       if(board[i][j]=='Q'){
        return false;
      }
    }
    return true;
  }
void nqueens(vector<vector<char>>board , int row)
{
  int n = board.size();
  if (row == n)
  {
    printboard(board);
    return;
  }
  for (int j = 0; j < n; j++)
  {
    if(issafe(board,row,j)){
    board[row][j] = 'Q';
    nqueens(board, row + 1);
    board[row][j] = '.';
  }
}
}
int main()
{
  vector<vector<char>> board;
  int n = 4;

  for (int i = 0; i < n; i++)
  {
    vector<char> newrow;
    for (int j = 0; j < n; j++)
    {
      newrow.push_back('.');
    }
    board.push_back(newrow);
  }
  nqueens(board, 0);
  return 0;
}   */
// count of all solution
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printboard(vector<vector<char>> board)
{
  int n = board.size();

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << "---------\n";
}
  bool issafe(vector<vector<char>>board , int row,int col){
    int n=board.size();
    //horizontal
    for(int j=0;j<n;j++){
      if(board[row][j]=='Q'){
        return false;
      }
    }
    //vertical
    for(int i=0;i<row;i++){
      if(board[i][col]=='Q'){
        return false;
      }
    }
    //daigonal left
    for(int i=row,j=col;i>=0  && j>=0;i--,j--){
      if(board[i][j]=='Q'){
        return false;
      }
    }
    //diagonal right
    for(int i=row,j=col;i>=0 && j<n;i--,j++){
       if(board[i][j]=='Q'){
        return false;
      }
    }
    return true;
  }
  int nqueens(vector<vector<char>>board , int row)
{
  int n = board.size();
  if (row == n)
  {
    printboard(board);
    return 1;
  }
  int count =0;
  for (int j = 0; j < n; j++)
  {
    if(issafe(board,row,j)){
    board[row][j] = 'Q';
   count += nqueens(board, row + 1);
    board[row][j] = '.';
  }
}
return count;//no of possible solution at each level
}
int main()
{
  vector<vector<char>> board;
  int n = 5;

  for (int i = 0; i < n; i++)
  {
    vector<char> newrow;
    for (int j = 0; j < n; j++)
    {
      newrow.push_back('.');
    }
    board.push_back(newrow);
  }
    int count =nqueens(board, 0);
     cout<<"count :"<<count<<endl;
  return 0;
}  */
// grid ways
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
int gridways(int r, int c, int n, int m, string ans)
{
  if (r == n - 1 && c == m - 1)
  { // bc for dest
    cout << ans << "\n ";
    return 1;
  }
  if (r >= n || c >= m)
  {
    return 0;
  }
  // right
  int val1 = gridways(r, c + 1, n, m, ans + "r");
  // left
  int val2 = gridways(r + 1, c, n, m, ans + "d");
  return val1 + val2;
}
int main()
{
  int n = 3;
  int m = 3;
  string ans = " "; 
  cout << gridways(0, 0, n, m, ans);
  return 0;
}*/ 
//sudoku

#include <iostream>
#include <string>
#include <vector>
using namespace std;
 void printsudoku(int sudoku[][9]){
  for(int i=0;i<9;i++){
    for(int j=0;j< 9;j++){
      cout<<sudoku[i][j]<<" ";
    }
    cout<<endl;
  }
}
    bool issafe(int sudoku[9][9],int row,int col, int digit){
      //vertical
      for(int i=0;i<=8;i++){
        if(sudoku[i][col]== digit){
          return false;
        }
      }
      //horizntal
        for(int j=0;j<=8;j++){
        if(sudoku[row][j]== digit){
          return false;
        }
      }
      //3*3 grid 
        int startrow = (row/3)*3;
        int startcol =(col/3)*3;
        for(int i=startrow;i<=startrow+2;i++){
          for(int j=startcol;j<startcol+2;j++){
            if(sudoku[i][j]==digit){
              return false;
            }
          }
        }
  return true;
    }
    bool sudokusolver(int sudoku[9][9],int row,int col){
      if(row == 9){
        //sudoku solve
        printsudoku(sudoku);
        return true;
      }
      int nextrow = row;
      int nextcol =col+1;
      if(col+1 == 9){
        nextrow = row+1;
        nextcol = 0;
      }
      if(sudoku[row][col] !=0){
         return sudokusolver(sudoku,nextrow,nextcol);
      }
      for(int digit=1;digit<=9;digit++){
        if(issafe(sudoku,row,col,digit)){
          sudoku[row][col]=digit;
          if(sudokusolver(sudoku,nextrow,nextcol)){
            return true;
          }
          sudoku[row][col]=0;
        }
      }
      return false;
     }
int main() {
  int sudoku[9][9]={  {0,0,8,0,0,0,0,0,0},
                      {4,9,0,1,5,7,0,0,2},
                      {0,0,3,0,0,4,1,9,0},
                      {1,8,5,0,6,0,0,2,0},
                      {0,0,0,0,2,0,0,6,0},
                      {9,6,0,4,0,5,3,0,0},
                      {0,3,0,0,7,2,0,0,4},
                      {0,4,9,0,3,0,0,5,7},
                      {8,2,7,0,0,9,0,1,3} 
                    };
        sudokusolver(sudoku,0,0);
  return 0;
}
