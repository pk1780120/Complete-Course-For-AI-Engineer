#include <iostream>

using namespace std;
  inline int product(int a, int b) {
    return a * b;
}
 float moneyrecieved(int currentmoney, float factor = 1.04) {
    return currentmoney * factor;
    
}
//int strlen(const char *str) 
    

int main() {
    int a, b;
   /* cout << "Enter the value of a and b "<< endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b) << endl;*/
     int money= 100000;
     cout << "if you have " << money << "rs in bank account, you will recieve " << moneyrecieved(money)<<"rs after 1 year" << endl;
        cout << "for vip: if you have " << money << "rs in bank account, you will recieve " << moneyrecieved(money, 1.1)<<"rs after 1 year" << endl;
     return 0;
}