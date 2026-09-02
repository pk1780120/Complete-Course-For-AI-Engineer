#include <iostream>

using namespace std;
/*float funcaverage(int a, int b)
{
    float avg = (a + b)/2.0;
    return avg;
}
float funcaverage2(int a, float b){
 float avg = (a+b)/2.0 ;
return avg;
};*/

template <class t>
void swapp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

template <class t1, class t2>
float funcaverage(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    // a = funcaverage2(5, 2.4);
    a = funcaverage(5, 2);
    printf("the average of these number is %.3f\n", a);
    int x = 5, y = 7;
    swapp(x, y);
    cout << x << endl<< y <<endl ;
    return 0;
}