#include <iostream>
using namespace std;
int main()
{
/*//1.binary airthmetic operator
    int first, second;
    cin >> first >> second;
    cout << "+ =" << (first+second) << endl;//add
    cout << "- =" << (first-second) << endl;//subtract
    cout << "* =" << (first*second) << endl;//multiply
    cout << "/ =" << (first/second) << endl;//divide
    cout << "% =" << (first%second) << endl;//reminder
*/

/*//unary operator
//when use same variable then update no change
int age=5;
//post increment 
age++;//age=age+1
cout<<"age = "<<age<<endl;//6
//post decrement
age--;//age=age-1
cout<<"age = "<<age<<endl;//5

//pre increment 
++age;//age=age+1
cout<<"age = "<<age<<endl;//6
//pree decrement
--age;//age=age-1
cout<<"age = "<<age<<endl;//5


//when use different variable then update  change
//pre increment:update then use
// int marks=5;
// int isadult=++marks;//6
// cout<<"marks = "<<marks<<endl;//6
// cout<<"isadult= "<<isadult<<endl;//6

//post increment:use then update
// int marks=5;
// int isadult=marks++;//6
// cout<<"marks = "<<marks<<endl;//6
// cout<<"isadult= "<<isadult<<endl;//5


//when use different variable then update  change
//pre decrement:update then use
// int marks=5;
// int isadult=--marks;//4
// cout<<"marks = "<<marks<<endl;//4
// cout<<"isadult= "<<isadult<<endl;//4

//post decrement:use then update
// int marks=5;
// int isadult=marks--;//4
// cout<<"marks = "<<marks<<endl;//4
// cout<<"isadult= "<<isadult<<endl;//5*/


/*//assignment operator or compound assignment operator
int a;
cin>>a;
a+=5;//a=a+5:15
cout<<a<<endl;
a-=5;//a=a-5:10
cout<<a<<endl;
a*=5;//a=a*5:50
cout<<a<<endl;
a/=5;//a=a/5:10
cout<<a<<endl;*/

/*//relational operator:true-1 or  false-0
int a,b;
cin>>a>>b;
cout<<"true:1/false:0 ="<<(a<b)<<endl;
cout<<"true:1/false:0 ="<<(a<=b)<<endl;
cout<<"true:1/false:0 ="<<(a>b)<<endl;
cout<<"true:1/false:0 ="<<(a>=b)<<endl;
cout<<"true:1/false:0 ="<<(a==b)<<endl;
cout<<"true:1/false:0 ="<<(a!=b)<<endl;*/

//logical operator:true-1 and false-0
cout<<((3>4) && (5<9))<<endl;//both condition true then return true neither false return:o/p-false(0)
cout<<((3<4) || (5<9))<<endl;//one/both condition true then return true neither false:o/p-true(1)
cout<<(!(3<4))<<endl;//if true then return false neither false then return true
    return 0;
}
