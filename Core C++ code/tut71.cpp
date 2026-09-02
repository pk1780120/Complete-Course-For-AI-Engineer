
#include <iostream>
#include <vector>
using namespace std;

template <class t>
void display(vector<t> &v)
{
    cout << "displaying this vector" << endl;
    // void display(vector<int> &v)

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    /* vector<int> vec1;//zero length integer vector
     int element, size;

     cout << "Enter the size of your vector: " << endl;
     cin >> size;
     for (int i = 0; i < size; i++)
     {

         cout << "Enter an element to add to this vector: " << endl;
         cin >> element;
         vec1.push_back(element);
     }
     // vec1.pop_back();
     display(vec1);

  vector<int>::iterator iter = vec1.begin();
     vec1.insert(iter + 1, 5, 566);
     display(vec1);*/

    // ways to create a vector
    int element, size = 5;
    // vector<int> vec1;
    // vector<char> vec2(4);   // 4-element character vector
    // vec2.push_back('5');
    // display(vec2);

    // vector<char> vec3(vec2); // 4-element character vectorv from vec2
    // display(vec3);

    vector<int> vec4(6, 13); // 6-element  vector of 3s
    display(vec4);
    cout << vec4.size();

    return 0;
}
