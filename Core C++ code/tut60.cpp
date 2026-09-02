#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "pawan bhai";
    //ofstream out("sample60.txt");
    //out << st;
    

    string st2;
    ifstream in("sample60b.txt");
    //in>>st2;
    getline(in, st2);
    cout << st2 << endl;
    

    return 0;
}
