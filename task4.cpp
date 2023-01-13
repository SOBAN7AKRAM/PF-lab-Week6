#include <iostream>
using namespace std;
string checkspeed(float speed);
main()
{
    int speed;
    string result;
    cout <<"Enter speed:";
    cin>>speed;
    result=checkspeed(speed);
    cout << "Your speed is :"<<result;
}
string checkspeed(float speed)
{
    string review;
    if (speed<=10)
    {
        review ="slow";
    }
    else if (speed>10 && speed<=50)
    {
        review="average";
    }
    else if (speed>50 && speed<=150)
    {
        review="fast";
    }
    else if (speed>150 && speed<=1000)
    {
        review="ultra fast";
    }
    else if (speed>1000)
    {
        review="extremely fast";
    }
    return review;

}