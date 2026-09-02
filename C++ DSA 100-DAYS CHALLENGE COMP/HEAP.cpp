#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;
 /*  class student{
  public:
  string name;
  int rank;

  student(string name,int marks){
    this->name = name;
    this-> rank= rank ;
  }
  //operarato overloading "<"
  bool operator < (const student &obj) const{
       return this->rank < obj.rank;
  }
 };*/

struct comparePair{
  bool operator ()(const  pair<string,int> &p1,const pair<string,int> &p2){
    return p1.second > p2.second;
  }
};
int main()
{

  /* priority_queue<int> pq;
 pq.push(5);
 pq.push(10);
 pq.push(9);
 pq.push(7);
     pq.push(3);

     while(!pq.empty()){
       cout << "top : " << pq.top()<<endl;
       pq.pop();
     }*/

  // decending
  /*priority_queue<int, vector<int>,greater<int>> pq;
  pq.push(5);
  pq.push(10);
  pq.push(9);
  pq.push(7);
      pq.push(3);

      while(!pq.empty()){
        cout << "top : " << pq.top()<<endl;
        pq.pop();
      }*/

  // ascending PQ
  /* priority_queue<string,vector<string>,greater<string>> pq;
   pq.push("hello pedtech_X25");
   pq.push("digital creator");
   pq.push("dsa with C++");
   pq.push("coder");
       pq.push("mitro");

       while(!pq.empty()){
         cout << "top : " << pq.top()<<endl;
         pq.pop();
       }*/

  // DECENDING
  /* priority_queue<string> pq;
 pq.push("hello pedtech_X25");
  pq.push("digital creator");
  pq.push("dsa with C++");
  pq.push("coder");
      pq.push("mitro");

      while(!pq.empty()){
        cout << "top : " << pq.top()<<endl;
        pq.pop();
      }*/

  priority_queue<pair<string, int>, vector<pair<string, int>>, comparePair> pq; // default-maxheap;"first"

  pq.push(make_pair("aman", 500));
  pq.push(make_pair("pawan", 1000));
  pq.push(make_pair("karan", 100));
  while (!pq.empty())
  {
    cout << "top : " << pq.top().first << "," << pq.top().second << endl;
    pq.pop();
  }

  return 0;
}

/*#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;
class Heap
{
  vector<int> vec; // = CBT
public:
  void push(int val)
  {
    // step1
    vec.push_back(val);
    // fix heap
    int x = vec.size() - 1; // childI
    int parI = (x - 1) / 2;

    while (parI >= 0 && vec[x] > vec[parI])
    { // o(logn) for min heap '<'
      swap(vec[x], vec[parI]);
      x = parI;
      parI = (x - 1) / 2;
    }
  }

  void heapify(int parI)
  { // i=parI
    if (parI >= vec.size())
    {
      return;
    }
    int l = 2 * parI + 1;
    int r = 2 * parI + 2;

    int maxIdx = parI;
    if (l < vec.size() && vec[l] > vec[maxIdx])
    { // for min heap '<'
      maxIdx = l;
    }
    if (r < vec.size() && vec[r] > vec[maxIdx])
    { // for min heap '<'
      maxIdx = r;
    }
    swap(vec[parI], vec[maxIdx]);
    if (maxIdx != parI)
    { // swapping with child node
      heapify(maxIdx);
    }
  }
  void pop()
  {
    // step1
    swap(vec[0], vec[vec.size() - 1]);

    // step2
    vec.pop_back();

    // step3
    heapify(0); // o(logn)
  }
  int top()
  {
    return vec[0]; // highest priority elemnt
  }
  bool empty()
  {
    return vec.size() == 0;
  }
};
int main()
{
  Heap heap;

  heap.push(9);
  heap.push(4);
  heap.push(8);
  heap.push(1);
  heap.push(2);
  heap.push(5);

  while (!heap.empty())
  {
    cout << "top = " << heap.top() << endl; // 100
    heap.pop();
  }
  return 0;
}*/ 