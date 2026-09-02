// linkedlist
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
    // destructor
    ~node()
    {
        // cout<<"~node destrutor for data ="<<data <<endl;
        if (next != NULL)
        {

            delete next;
            next = NULL;
        }
    }
};
class list
{
    node *head;
    node *tail;

public:
    // constructer
    list()
    {
        head = NULL;
        tail = NULL;
    }
    // destructor
    ~list()
    {
        // cout<<" destructor of ~list\n";
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val)
    {
        node *newnode = new node(val); // dynamic hoga not static
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back(int val)
    {
        node *newnode = new node(val); // dynamic hoga not static
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void printlist()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void insert(int val, int pos)
    {
        node *newnode = new node(val);
        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "position is invalid\n";
                return;
            }
            temp = temp->next;
        }
        // temp is at pos-1 i.e prev/left
        newnode->next = temp->next;
        temp->next = newnode;
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << " ll is empty\n";
            return;
        }
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    int searchitr(int key)
    {
        node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
    int helper(node *h, int key)
    {
        if (h == NULL)
        {
            return -1;
        }
        if (h->data == key)
        {
            return 0;
        }
        int idx = helper(h->next, key);
        if (idx == -1)
        {
            return -1;
        }
        return idx + 1;
    }
    int searchrec(int key)
    {
        return helper(head, key);
    }
    void reverse(){
        node* curr = head;
        node* prev = NULL;
        tail = head;
        while(curr != NULL){
            node* next = curr->next;
            curr->next = prev;
            //updataions for next itr
            prev = curr;
            curr = next;
        }
        head = prev;
    }
     int getsize(){
        int sz  =0;
        node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            sz++;
        }
        return sz;
     }
     void removenth(int n){
        int size = getsize();
        node* prev = head;
        for(int i=1;i<(size-n);i++){
            prev = prev->next;
        }
        node* todel = prev->next;
        cout << "going to delete : "<<todel->data<<endl;
        prev->next = prev->next->next;
     }

};
int main()
{
    list ll; // parametrized nhi hai agar rhta pair of parathesis lagta
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
   ll.printlist(); // 1->2->3->null

    /*ll.push_back(4);
    ll.push_back(5);
    ll.printlist(); // 1->2->3->4->5->null

    ll.insert(100,2);
    ll.printlist();*/

// ll.pop_front();
// ll.printlist();//2->3 null

// ll.pop_back();
// ll.printlist();

// cout<<ll.searchitr(5)<<endl;

// cout << ll.searchrec(4) << endl;

// ll.reverse();
// ll.printlist();

// ll.removenth(2);
// ll.printlist();
// return 0;
//}

//
/*#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class list
{
public:
    node *head;
    node *tail;
    list()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        node *newnode = new node(val); // dynamic hoga not static
        if (tail == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back(int val)
    {
        node *newnode = new node(val); // dynamic hoga not static
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            return;
        }
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
};
void printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
bool iscycle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "cycle exists\n";
            return true;
        }
    }
    cout << "cycle doesn't exists\n";
    return false;
}
void removecycle(node *head)
{
    // detect cycle
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            cout << "cycle exists :\n";
            break;
        }
    }
    if (!iscycle)
    {
        cout << "cycle doesn't exist :\n";
        return;
    }
    slow = head;
    if (slow == fast)
    { // special case:tail -> head
        while (fast->next != slow)
        {
            fast = fast->next;
        }
        fast->next = NULL; // remove cycle
    }
    else
    {
        node *prev = fast;
        while (slow != fast)
        {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL; // REMOVE CYCLE
    }
}
node *splitatmid(node *head)
{
    node *slow = head;
    node *fast = head;
    node *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL; // SPLIT at middle
    }
    return slow; // slow = righthead
}
node *merge(node *left, node *right)
{
    list ans;
    node *i = left;
    node *j = right;
    while (i != NULL)
    {
        if (i->data <= j->data)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        else
        {
            ans.push_back(i->data);
            i = i->next;
        }
    }
    while (i != NULL)
    {
        ans.push_back(i->data);
        i = i->next;
    }
    while (j != NULL)
    {
        ans.push_back(i->data);
        i = i->next;
    }
    return ans.head;
}
node *mergesort(node* head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *righthead = splitatmid(head);

    node *left = mergesort(head);       // left head
    node *right = mergesort(righthead); // right head

    return merge(left, right); // head of sorted ll
}

node *reverse(node* head)
{
    node *prev = NULL;
    node *curr = head;
    node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev; // prev is head of reversed ll
}
   node* zigzag(node* head)
{
    node *righthead = splitatmid(head);
    node *rightheadrev = reverse(righthead);
    // alternate merging: 1st head = head; 2nd head = rightheadrev
    node *left = head;
    node *right = rightheadrev;
    node *tail = right;
    while (left != NULL && right != NULL)
    {
        node *nextleft = left->next;
        node *nextright = right->next;

        left->next = right;
        right->next = nextleft;

        tail = right;

        left = nextleft;
        right = nextright;
    }
    if (right != NULL)
    {
        tail->next = right;
    }
    return head;
}
int main()
{
    list ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.tail->next = ll.head;
    // iscycle(ll.head);

    // removecycle(ll.head);
    // printlist(ll.head);

    // ll.push_front(1);
    // ll.push_front(2);
    // ll.push_front(3);
    // ll.push_front(4);
    // ll.push_front(5);
    printlist(ll.head);

    // ll.head = mergesort(ll.head );
    // printlist(ll.head);

    ll.head = zigzag(ll.head);
    printlist(ll.head);
    return 0;
} */

//DOUBLY LINKED LIST
  #include <iostream>
  
  using namespace std;
   class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data= val;
        prev =next =NULL;
    }
   };
   class doublylist{
    public:
    node* head;
    node* tail;
    doublylist(){
        head = tail=NULL;

    }
    void push_front(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail=newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
        }
    }
    void printlist(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->data << " <=>";
            temp = temp->next;
        }
        cout<<"nullpointer\n";
    }
   };
  int main() {
    doublylist   dbll;
      dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    return 0;
  }