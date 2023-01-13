#include <iostream>
using namespace std;
void calculator(float budget,string category,float number);
main()
{
    float budget;
    int number;
    string category;
    cout<<"Enter budget:";
    cin>>budget;
    cout<<"Enter category:";
    cin>>category;
    cout<<"Enter number:"; 
    cin>>number;
    calculator (budget,category,number);
}    
void calculator(float budget,string category,float number)
{
   float total;
   float ticketprice;
   float transport;
   float left;
   if (category=="VIP")
   {
     ticketprice=(499.99*number);
   }
   if (category=="Normal")
   {
    ticketprice=249.99*number;
   }
  
    if (number<=4)
   {
        transport=(75*budget)/100;
        total=ticketprice+transport;
        if (budget>total)
        {
            left=budget-total;
            cout<<"Yes! you have "<<left<<" QR left.";
        }
        else if (budget<total)
        {
            left=total-budget;
            cout<<"NOT enough money! You need "<<left<<" QR";
        }
   }  
   else if (number>=5 && number<=9)
   {
          transport=0.60*budget;
          total=ticketprice+transport;
           if (budget>total)
        {
            left=budget-total;
            cout<<"Yes! you have "<<left<<" QR left.";
        }
        else if (budget<total)
        {
            left=total-budget;
            cout<<"NOT enough money! You need "<<left<<" QR";
        }
   }
     else if (number>=10 && number<=24)
   {
          transport=0.50*budget;
          total=ticketprice+transport;
           if (budget>total)
        {
            left=budget-total;
            cout<<"Yes! you have "<<left<<" QR left.";
        }
           else if (budget<total)
        {
            left=total-budget;
            cout<<"NOT enough money! You need "<<left<<" QR";
        }
   }
     else if (number>=25 && number<=49)
   {
          transport=0.4*budget;
          total=ticketprice+transport;
           if (budget>total)
        {
            left=budget-total;
            cout<<"Yes! you have "<<left<<" QR left.";
        }
          else if (budget<total)
        {
            left=total-budget;
            cout<<"NOT enough money! You need "<<left<<" QR";
        }
   }
     else if (number>=50)
   {
          transport=0.25*budget;
          total=ticketprice+transport;
           if (budget>total)
        {
            left=budget-total;
            cout<<"Yes! you have "<<left<<" QR left.";
        }
           else if (budget<total)
        {
            left=total-budget;
            cout<<"NOT enough money! You need "<<left<<" QR";
        }
   }
   
   
   
}