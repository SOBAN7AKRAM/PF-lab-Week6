#include <iostream>
using namespace std;
main()
{
    int number;
    string brand;
    cout <<"Enter Price:";
    cin>>number;
    cout<<"Enter brand:";
    cin>>brand;
    if (number<=1500 && brand=="outfitters")
    {
        cout<<"Good";
    }
    else
    {
        cout<<"NOT Good";
    }
}