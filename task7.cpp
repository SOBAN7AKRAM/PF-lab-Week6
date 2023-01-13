#include <iostream>
using namespace std;
float price(string product,string city,int quantity);
main ()
{
   string product,city;
   int quantity;
   float totalprice,result=0;
   cout<<"Enter the name of the product:";
   cin>>product;
   cout<<"Enter the name of city:";
   cin>>city;
   cout<<"Enter the quantity of the product:";
   cin>>quantity;
   result=price(product,city,quantity);
   cout << "Total price is:"<<result;

}
float price(string product,string city,int quantity)
{
    float totalprice;
    if (city=="Sofia")
    {
        if (product=="coffee")
        {
         totalprice=0.50*quantity;
        }
         else if (product=="water")
         {
            totalprice=0.80*quantity;
         }  
         else if(product=="beer")
         {
            totalprice=1.20*quantity;
         }
         else if (product=="sweets")
         {
            totalprice=1.45*quantity;
         }
         else if (product=="peanuts")
         {
            totalprice=1.60*quantity;
         }
    }
    else if(city=="Plovidiv")
    {
      if (product =="coffee")
      {
         totalprice=0.40*quantity;
      }
      else if (product=="water")
      {
         totalprice=0.70*quantity;
      }
      else if (product=="beer")
      {
         totalprice=1.15*quantity;
      }
      else if (product=="sweets")
      {
         totalprice=1.30*quantity;
      }
      else if (product=="peanuts")
      {
         totalprice=1.50*quantity;
      }
    }
     else if(city=="Varna")
    {
      if (product =="coffee")
      {
         totalprice=(0.45*quantity);
      }
      else if (product=="water")
      {
         totalprice=0.70*quantity;
      }
      else if (product=="beer")
      {
         totalprice=1.10*quantity;
      }
      else if (product=="sweets")
      {
         totalprice=1.35*quantity;
      }
      else if (product=="peanuts")
      {
         totalprice=1.65*quantity;
      }
    }
      return totalprice;
    
}
