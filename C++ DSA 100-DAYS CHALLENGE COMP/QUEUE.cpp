// linked list by using queue
/*#include <iostream>
using namespace std;
  class node {
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
  };
  class queue{
    node* head;
    node* tail;
    public:
    queue(){
        head = tail = NULL;
    }
    void push(int data){
        node* newnode = new node(data);
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop(){
        if(empty()){
            cout<<"queue is empty\n";
            return;
        }
        node* temp = head;
        head = head->next;
        delete temp;

    }
    int front(){
           if(empty()){
            cout<<"queue is empty\n";
            return -1;
        }
        return head-> data;
    }
    bool empty(){
        return head == NULL;
    }
  };
int main() {
    queue q;
  q.push(1);
  q.push(2);
  q.push(3);
     while(!q.empty()){
            cout<<q.front()<<"\n";
            q.pop();
        }
    return 0;
}*/
// circular queue
/*#include <iostream>
using namespace std;
 class queue {
   int *arr;
   int capcity;
   int currsize;

   int f,r;
   public:
   queue(int capacity ){
       this->capcity = capcity;
     arr = new int[capacity];
     currsize = 0;
     f =0;
      r= -1;
   }
   void push(int data){
       if(currsize == capcity){
           cout << " queue is full\n";
           return;
       }
       r=(r+1)% capcity;
       arr[r]= data;
       currsize++;
   }
   void pop(){
       if(empty()){
           cout <<"queue is empty\n";
           return;
       }
       f = (f+1) % capcity;
       currsize--;
   }
   int front(){
       if(empty()){
           cout << "queue is empty\n";
           return -1;
       }
       return arr[f];
   }
   bool empty(){
       return currsize == 0;
   }
   void printrear(){
       cout <<arr[r]<<endl;
   }
 };
int main() {
   queue q(4);

   q. push(1);
   q. push(2);
   q. push(3);
   q. push(4);
   q. push(5);
  cout <<q.front( )<< endl;
  q.pop();
  cout <<q.front( )<< endl;
  q.push(5);
  cout <<q.front( )<< endl;
  q.printrear();
   return 0;
}*/
// using stl queue
/*#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}*/
// using 2 stack
/*#include <iostream>
#include <stack>
using namespace std;
  class queue {
    stack<int> s1;
    stack<int> s2;
 public:
 void push(int data){
    while(!s1.empty()){
        s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop(){
        s1.pop();
    }
    int front(){
        return s1.top();
    }
    bool empty(){
        return s1.empty();
    }
 };
int main() {
    //queue using 2 stacks
    queue q;
    q. push(1);
    q. push(2);
    q. push(3);
    while(!q.empty()){
   cout <<q.front( )<< endl;
   q.pop();
    }
    return 0;
}*/
// using 2queues
/*#include <iostream>
#include <queue>
using namespace std;

class stack {
    queue<int> q1;
    queue<int> q2;
public:
    void push(int data) {
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop() {
        if(!q1.empty())
            q1.pop();
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()) {
        cout << s.top() << endl; // print
        s.pop();                 // pop inside loop
    }

    return 0;
}*/
// non repeating letter
/*#include <iostream>
#include <queue>
using namespace std;
 void firstnonrepeat(string str){
    queue<char> q;
    int freq[26]={0};
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        q.push(ch);
        freq[ch-'a']++;
        while(!q.empty() && freq[q.front()-'a']>1){
        q.pop();
    }
    if(q.empty()){
        cout<<"-1\n";
    } else{
        cout<<q.front()<< "\n";
    }
    }
 }
int main() {
    string str = "aabccxb";
    firstnonrepeat(str);
    return 0;
}*/
// interleave 2 queues
/*#include <iostream>
#include <queue>
using namespace std;
 void interleave(queue<int> &org){
  int n=org.size();
  queue<int> first;
    for(int i=0; i<n/2; i++){
      first.push(org.front());
      org.pop();
 }
 while(!first.empty()){
  org.push(first.front());
  first.pop();
  org.push(org.front());
  org.pop();
 }
}
int main() {
  queue<int> org;
  for(int i=1; i<=10;i++){
      org.push(i);
  }
  interleave(org);
  for(int i=1; i<=10; i++){
      cout<<org.front()<<" ";
      org.pop();
  }
  cout<<endl;
  return 0;
}*/
// queue reversal
/*#include <iostream>
#include <stack>
#include <queue>
using namespace std;
 void reverse(queue<int> &q){
  stack<int> s;
  while(!q.empty()){
      s.push(q.front());
      q.pop();
  }
  while(!s.empty()){
      q.push(s.top());
      s.pop();
  }
 }
int main() {
  queue<int> q;
  for(int i=1;i<=5;i++){
      q.push(i);
  }
  reverse(q);
   for(int i=1;i<=5;i++){
   cout<<q.front()<<" ";
   q.pop();
  }
  cout<<endl;
  return 0;
}*/

// deque  double ended  queue
/*#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> deq;

    deq.push_front(2);
    deq.push_front(1);

    deq.push_back(3);
    deq.push_back(4);

    deq.pop_front();
    deq.pop_back();

    cout << deq.front(); // 2
    cout << deq.back();  // 3
    return 0;
}*/
//deque  using queue
/*#include <iostream>
#include <deque>
using namespace std;
class queue {
    deque<int> deq;
    public:
    void push(int data){
        deq.push_back(data);
    }
    void pop(){ 
        deq.pop_front();
    }
    int front(){
        return deq.front();
    }
    bool empty(){
        return deq.empty();
    }
};

int main() {
   queue q;
  
   for(int i=1;i<=5;i++){
    q.push(i);
   }
   for(int i=1; i<=5;i++){
     cout<< q.front()<< endl;
     q.pop();
   }
    return 0;
}*/
//stack using deque
 #include <iostream>
  #include <deque>
 using namespace std;
   class stack {
    deque<int> deq;
    public:
    void push(int data){
        deq.push_front(data);
    }
    void pop(){
        deq.pop_front();
    }
    int top(){
        return deq.front();
    }
   };
 int main() {
     stack s;
  
   for(int i=1;i<=5;i++){
    s.push(i);
   }
   for(int i=1; i<=5;i++){
     cout<< s.top()<< endl;
     s.pop();
   }
    return 0;
 }
  

