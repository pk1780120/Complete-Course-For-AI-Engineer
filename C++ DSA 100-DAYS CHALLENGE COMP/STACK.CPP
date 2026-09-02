/*#include <iostream>
#include <vector>

using namespace std;
 //create stack using vector
  class stack{
    vector<int> vec;
    public:
    void push(int val){//0(1)
        vec.push_back(val);
    }
    void pop(){//0(1)
    if(isempty()){
     cout<<"stack is empty.\n";
     return;
    }
        vec.pop_back();

    }
    int top(){//0(1)
        if(isempty()){
            cout<<"stack is empty.\n";
            return -1;
        }
        int lastidx = vec.size()-1;
        return vec[lastidx];

    }
     bool isempty(){
     return vec.size()==0;

      }
    };
 int main() {
    stack s;
  s.push(3);
  s.push(2);
      s.push(1);

      while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
      }
    return 0;
}*/
// class template
/*#include <iostream>
#include <vector>
#include<vector>
using namespace std;
 //create stack using vector
    template< class T>
    class stack{
        vector<T> vec;
    public:
    void push(T val){//0(1)
        vec.push_back(val);
    }
    void pop(){//0(1)
    if(isempty()){
     cout<<"stack is empty.\n";
     return;
    }
        vec.pop_back();

    }
    T top(){//0(1)
        int lastidx = vec.size()-1;
        return vec[lastidx];

    }
     bool isempty(){
     return vec.size()==0;

      }
    };
 int main() {
    stack<string> s;
      s.push("coding");
      s.push("learn");
      s.push("for internship");

      while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
      }
      cout<<endl;
    return 0;
}*/
/*#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

// create stack using linkedlist
template<class T>
class node {
public:
    T data;
    node* next;   // node<T>* next; but aapke pattern ko same rakha
    node(T val) {
        data = val;
        next = NULL;
    }
};

template<class T>
class stack {
    node<T>* head;

public:
    stack() {
        head = NULL;   // FIXED: head NULL; -> head = NULL;
    }

    void push(T val) {
        node<T>* newnode = new node<T>(val);
        if (head == NULL) {
            head = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void pop() {
        if (head == NULL) {
            cout << "Stack Underflow\n";
            return;
        }
        node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top() {
        if (head == NULL) {
            cout << "Stack is empty\n";
            return -1;  // safe return
        }
        return head->data;
    }

    bool isempty() {
        return head == NULL;
    }
};

int main() {
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isempty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}*/
// stack in stl
/*#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

// create stack using linkedlist
template<class T>
class node {
public:
   T data;
   node* next;   // node<T>* next; but aapke pattern ko same rakha
   node(T val) {
       data = val;
       next = NULL;
   }
};

template<class T>
class Stack {
   node<T>* head;

public:
   Stack() {
       head = NULL;   // FIXED: head NULL; -> head = NULL;
   }

   void push(T val) {
       node<T>* newnode = new node<T>(val);
       if (head == NULL) {
           head = newnode;
       } else {
           newnode->next = head;
           head = newnode;
       }
   }

   void pop() {
       if (head == NULL) {
           cout << "Stack Underflow\n";
           return;
       }
       node<T>* temp = head;
       head = head->next;
       temp->next = NULL;
       delete temp;
   }

   T top() {
       if (head == NULL) {
           cout << "Stack is empty\n";
           return -1;  // safe return
       }
       return head->data;
   }

   bool isempty() {
       return head == NULL;
   }
};

int main() {
   //STL stack IN SMALL LETTER
   stack<int> s;

   s.push(3);
   s.push(2);
   s.push(1);

   while (!s.empty()) {
       cout << s.top() << " ";
       s.pop();
   }
   cout << endl;

   return 0;
}*/
// push at buttom
/*#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// Function to push element at bottom of stack
void pushAtBottom(stack<int> &s, int val) {

    // If stack is empty, push the value
    if (s.empty()) {
        s.push(val);
        return;
    }

    // Otherwise, store top and pop it
    int temp = s.top();
    s.pop();

    // Recursive call
    pushAtBottom(s, val);

    // Push stored element back
    s.push(temp);
}
   string reversestring(string str){
    string ans;
    stack<char> s;

    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }
    return ans;
   }
   void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s,temp);
   }

   void printstack(stack<int> s){
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
  void stockspanproblem(vector<int> stock, vector<int> span){
    stack<int> s;
    s.push(0);
    span[0]= 1;
    for(int i=1;i<stock.size();i++){
        int currprice = stock[i];
        while(!s.empty() && currprice >= stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span[i]=i+1;

        } else {
            int prevhigh = s.top();
            span[i] = i-prevhigh;
        }
    }
    for(int i=0; i<span.size();i++){
        cout << span[i]<< " ";
    }
    cout << endl;
  }
int main() {
    //string str = "abcd";
    //cout << "reverse = "<<reversestring(str)<<endl;

  //  stack<int> s;
   // s.push(3);
  //  s.push(2);
   // s.push(1);
   //printstack(s);

   //reverse(s);
  // printstack(s);

//stock value span
    vector<int> stock ={100,80,60,70,60,85,100};
    vector<int> span = {0,0,0,0,0,0,0};

     stockspanproblem(stock,span);
    return 0;
}*/
//
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
void nextgreater(vector<int> arr, vector<int> ans)
{
    stack<int> s;
    int idx = arr.size() - 1;
    ans[idx] = -1;
    s.push(arr[idx]);

    for (idx = idx - 1; idx >= 0; idx--)
    {
        int curr = arr[idx];
        while (!s.empty() && curr >= s.top())
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[idx] = -1;
        }
        else
        {
            ans[idx] = s.top();
        }
        s.push(curr);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
  bool isvalid(string str){
    stack<char> s;
    for(int i=0; i<str.size();i++){
        char ch =str[i];
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        } else {
            if(s.empty()){
                return false;
            }
            //match
            int top = s.top();
            if((top =='(' && ch == ')')||(top =='['&&ch ==']')||(top == '{'&& ch =='}')){
          s.pop();
            }else{
                return false;
            }
        }

    }
    return s.empty();
  }
   bool isduplicated(string str){
    stack<char> s;

    for(int i=0;i<str.size(); i++){
        char ch = str[i];
        if(ch != ')'){//non- closing
            s.push(ch);
        }  else {//closing
            if(s.top() == '(' ){
                return true;//duplicate
            }
            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
   }
     void printarr(vector<int> vec){
        for(int i=0; i<vec.size(); i++){
            cout << vec[i] << " ";
        }
        cout<<endl;
     }
    void maxareahistogram(vector<int> height){
        int n = height.size();
        vector<int> nsl(n);
        vector<int> nsr(n);
        stack<int> s;
        //next smaller left
        nsl[0] = -1;
        s.push(0);
        for(int i=1; i<height.size(); i++){
            int curr = height [i];
            while(!s.empty() && curr <= height[s.top()]){
                s.pop();
            }
            if(s.empty()){
                nsl[i]= -1;
            }else {
                nsl[i]= s.top();
            }
            s.push(i);
            }
            printarr(nsl);
            while(!s.empty()){
                s.pop();
            }
            //next smaller right
        s.push(n-1);
        nsr[n-1]=n;
        for(int i=n-2;i>=0;i--){
            int curr = height[i];
            while(!s.empty() && curr <= height[s.top()]){
                s.pop();
            }
            if(s.empty()){
                nsr[i] =n;
            } else {
                nsr[i] = s.top();
            }
            s.push(i);
        }
          int  maxarea= 0;
          for(int i=0;i<n;i++){
               int ht = height[i];
    int width = nsr[i] - nsl[i]-1;
    int  area = ht * width;
    maxarea = max(area,maxarea);
          }
          cout<<"max area of histogram :"<<maxarea <<endl;
            }
int main()
{
  //  vector<int> arr = {6, 8, 0, 1, 3};
   // vector<int> ans = {0, 0, 0, 0, 0};
   // nextgreater(arr, ans);

  // string str1 = "{[}])";//invalid : false
   //string str2 = "([{}])";//valod : true 
     //cout<<isvalid(str1)<<endl;//0
    // cout<<isvalid(str2)<<endl;//1

    
   //string str1 = "((a+b))";//valid : true
  // string str2 = "((a+b)+(c+d))";//invalod : false 
      // cout<<isduplicated(str1)<<endl;//1
     // cout<<isduplicated(str2)<<endl;//0 

        vector<int> height = {2, 1, 5, 6,2, 3};
    maxareahistogram(height);
    return 0;
}
