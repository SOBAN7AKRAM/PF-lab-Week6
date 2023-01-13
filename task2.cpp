#include <iostream>
using namespace std;
float discount(int purchase,string days,string month);
main()
{
   int purchase;
   int total;
   string days,month;
   cout <<"Enter Price:";
   cin>>purchase;
   cout<<"Enter month:";
   cin>>month;
   cout<<"Enter days:";
   cin>>days;
   total=discount(purchase,days,month);
   cout<<"Total Price is:"<<total;
}
float discount(int purchase,string days,string month)
{
    float payable=purchase;
    if (days=="sunday" && (month=="october" || month =="august" || month=="march"))
    {
       
        payable=purchase-(purchase*10)/100;
         
       
    }
    if (days=="sunday" && (month=="november" || month=="december") )
     {
         payable=purchase-(purchase*5)/100; 
     }
    return payable;
}