#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
   int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(2);
    list1.push_back(12);
    list1.push_back(14);
    list1.push_back(13);
    list1.push_back(16);
    display(list1);

    // removing  elements from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(14);

    // sorting the list
    // list1.sort();
    // display(list1);

    // reversing the list
    list1.reverse();
    display(list1);

    list<int> list2(3); // empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();

    *iter = 25;
    iter++;

    *iter = 15;
    iter++;

    *iter = 42;
    iter++;

    display(list2);
    // list1.sort();
    // list2.sort();
    list1.merge(list2);
    cout << "list 1 after merging:";
    display(list1);

    /** list<int>::iterator iter;
     iter = list1.begin();
     cout << *iter << " ";
     iter++;
     cout << *iter << " ";
     iter++;
     cout << *iter << " ";
     iter++;
     cout << *iter << " ";
     iter++;
  cout<<*iter<<" ";*/
    return 0;
}