#include <iostream>

using namespace std;
class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "code of this item is " << id << endl;
        cout << " price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr =  new int [34];

    // general store     item
    //  chiken store  item
    //  hardware store  item
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "enter id and price of item" << i + 1 << endl;
        cin >> p >> q;
        ptrtemp->setdata(p, q);
        ptrtemp++;
    }
    ptrtemp = ptr;
    for (i = 0; i < size; i++)
    {
        cout << " enter item number" << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    delete[] ptr;

    return 0;
}