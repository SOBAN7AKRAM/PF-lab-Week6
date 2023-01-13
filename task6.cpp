#include <iostream>
using namespace std;
float lowestprice(int km,string time);
main ()
{
    string time;
    int km;
    float result;
    cout <<"Enter km:";
    cin>>km;
    cout <<"Enter time:";
    cin>> time;
    result=lowestprice(km,time);
    cout <<"lowest price is:"<<result;

}
float lowestprice(int km,string time)
{
   float price;
   if (km>=100)
   {
      if (time=="day" || time=="night")
      {price=0.06*km;}
   }
   else if (km>=20 && km<100)
   {
       if (time=="day" || time=="night")
       { price=0.09*km;}
   }
   else if (km<20)
   {
       if (time=="day")
       {
        price=(0.79*km)+0.70;
       }
       else if (time=="night")
       {
        price=(0.90*km)+0.70;
       }
   }
   return price;
 }
