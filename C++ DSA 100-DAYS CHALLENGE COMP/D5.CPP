// STRING
/*#include <iostream>
using namespace std;
   char ch1=  'a';
   char ch2=  'x';
      char ch3=  '%';
           char ch4=  '9';
                char ch5='5';

int main() {
    cout<< ch1;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    char ch='A';
    cout<<(int)ch <<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    char ch='f';
    int pos=ch-'a';
    cout<< pos <<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    char arr[5] = { 'a','b', 'c', 'd','e'};
    cout << arr << endl;

   return 0;
}*/

/*"apna college"//string literals
  "hello world"//string literals
   "a"         //string literals*/

/*#include <iostream>
 #include <cstring>
using namespace std;

int main()
{
    char work [50] = { 'c','o', 'd', 'e','\0'};
    cout << strlen(work)<< endl;
   return 0;
}

  /*#include <iostream>
  #include <cstring>
   using namespace std;
   int main() {
       char word[30];
        cin >> word;//ignore white spaces
    cout<<"your word was:"<< word<<endl;
   cout<<"length : " << strlen(word)<<endl;*/

/*char sentence[30];
 cin.getline(sentence,30,'*');
  cout<<"your word was:"<< sentence<<endl;
 cout<<"length : " << strlen(sentence)<<endl;

  return 0;
 }
// CONVERT UPPER CASE
/*#include <iostream>
#include <cstring>
using namespace std;
 void toupper(char word[],  int n){
  for(int i=0;i<n;i++){
      char ch = word[i];
      if(ch>='A' && ch<='Z'){
          continue;
      } else {  // lowercase
          word[i]=ch -'a'+'A';

      }
  }
 }
int main() {
  char word []="ApPle";
  toupper(word,strlen(word));
  cout<<word<<endl;
  return 0;
}*/

// REVERSE A CHAR ARRAY
/*#include <iostream>
#include <cstring>
using namespace std;
 void reverse(char word[],int n){
     int st=0, end=n-1;
     while(st <end){
         swap(word[st++],word[end--]);
         st++;
         end--;

     }
 }
int main() {
 char word[]="code";
 reverse(word,strlen(word));
 cout<<"reverse= "<< word<<endl;
 return 0;
}*/
// valid palindrome
/*#include <iostream>
#include <cstring>
using namespace std;
 bool ispalindrone(char str[],int n){
    int st  =0, end=n-1;
    while(st<end){
        if(str[st++] != str[end--]){
            cout<<"not valid palindrome";
            return false;
        }
    }
    cout<<"valid palindrome";
    return true;
 }
int main() {
    char word[]="racecar";
    ispalindrone(word,strlen(word));
    return 0;
}*/
//  CSTRING
// STRING COPY FUNCTION
/*#include <iostream>
#include <cstring>
using namespace std;
int main() {
  char str1[100];
  char str2[100]="hello world";
 // strcpy(str1,"apna code");
     strcpy(str1,str2);
  cout<<str1;
  return 0;
}*/
// strcat -2
/*#include <iostream>
 #include <cstring>
using namespace std;

int main() {
    char str1[100]="hello";
   char str2[100]="pawan";
      strcat(str1,str2);
   cout<<str1;
   return 0;
}*/
// str cmp-3
/*#include <iostream>
  #include <cstring>
 using namespace std;

 int main() {
     char str1[100]="abc";
    char str2[100]="pawan";
    cout<<strcmp(str1,str2);
    return 0;
 }*/

// string in c++ ooops input
/*#include <iostream>
#include<string>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}*/

// for each loop
/*#include <iostream>
    #include <string>
using namespace std;

int main() {
    string str ="apna copde";
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<"-";
    }
    cout << "\n";
    return 0;
}*/
// mamber function
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "i love coding in c++ && webdev";
    // cout<<str.length()<<"\n";

    // cout <<str[9] ;
    // cout<<str.at(6);

    // cout<<str.substr(5,5)<<endl;

    cout << str.find("c++") << endl;

    return 0;
}*/
// VALID ANAGRAM
/*#include <iostream>
#include  <string>
using namespace std;
 bool isanagram(string str1, string str2){
    if (str1.length() != str2.length()){
       cout<<"not valid anagrams"<<endl;
       return false;
    }
    int count[26] ={0};
   for(int i =0; i<str1.length();i++) {
       int idx = str1[i]-'a';
       count[idx]++;
   }
   for(int i=0;i<str2.length();i++) {
       int idx =str2[idx]-'a';
       if(count[idx]==0){
           cout<<"not valid anagrams"<<endl;
           return false;
       }
       count[idx]--;
   }
    cout<<"valid anagrams"<<endl;
           true;
}
int main() {
   string str1="anagram";
   string str2="nagaram";
  isanagram(str1,str2);
   return 0;
}*/
// operator uses in string
#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    string str1 = "cat";
    string str2 = "dog";
    cout << (str1 = str2)<<endl;
    cout << (str1 != str2)<<endl;
      cout<<(str1 < str2)<<endl;
      cout<<(str1 > str2)<<endl;  
    return 0;
}