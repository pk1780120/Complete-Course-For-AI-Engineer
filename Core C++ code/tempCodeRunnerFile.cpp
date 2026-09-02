#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    cout  << "Enter a string: ";

    string str;
    getline(cin, str);
    out << str;
    out.close();
    cout << "String written to file successfully." << endl;
    return 0;
}