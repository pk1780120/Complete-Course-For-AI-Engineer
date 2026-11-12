/*#include <iostream>
#define PI 3.14 //macros-symbolic constant
using namespace std;
int main()
{
    cout<<PI;

    return 0;
}*/

/*// data type
#include <iostream>
using namespace std;
int main()
{
    int age = 25;
    float marks = 200.8;
    char grade = 'A';
    bool ISADULT = true;
    double cgpa = 8.5555;
    cout << "size of int:=" << sizeof(int) << endl;
    cout << "size of float:=" << sizeof(float) << endl;
    cout << "size of char:=" << sizeof(char) << endl;
    cout << "size of bool:=" << sizeof(bool) << endl;
    cout << "size of double:=" << sizeof(double) << endl;

    return 0;
} */

/*// float vs double
// setprecision for size increase after decimal
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float PI = 3.14459939233877;//gave o/p: different  values after decimal
    double PI2 = 3.14459939233877;//gave o/p:after decimal same values
    cout << setprecision(14) << "PI" << PI << endl;
    cout << setprecision(14) << "PI2" << PI2 << endl;

    return 0;
}*/

/*//wap to print sum of 2 numbers
#include <iostream>
using namespace std;
int main() {
    int first_no,second_no;
    cin>>first_no>>second_no; 
    int sum=first_no+second_no;
    int product=first_no*second_no;
    cout<<"sum ="<<sum;
    cout<<"prod ="<<product;

return 0;
}*/

/*//wap to print avg marks 3 -subjects
#include <iostream>
using namespace std;
int main() {
    int math_marks,physics_marks,chemestry_marks;
    cin>>math_marks>>physics_marks>>chemestry_marks;
    int AVG_MARKS=(math_marks+physics_marks+chemestry_marks)/3;
    cout<<"AVG MARKS="<<AVG_MARKS;
return 0;
}*/