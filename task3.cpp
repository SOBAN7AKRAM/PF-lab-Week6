#include <iostream>
using namespace std;
string title(int age , char gender);
main ()
{
    int age;
    char gender;
    string result;
    cout<<"Enter gender:";
    cin>>gender;
    cout <<"Enter age:";
    cin >>age;
    result=title(age,gender);
    cout <<"Title is:"<<result;


}
string title(int age , char gender)
{
   string titles;
    if (gender=='m')
    {
       if (age<=16)
       {
        titles="Mr";
       }
       if (age >16)
       {
        titles ="Master";
       }
    }
    else if (gender=='f')
    {
        if (age<=16)
        {
            titles="Ms.";
        }
        if (age>16)
        {
            titles="Miss";
        }
    }
    return titles;

}