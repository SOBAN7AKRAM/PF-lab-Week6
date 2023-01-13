#include <iostream>
#include <cmath>
using namespace std;
int calculation(string year,int holidays,int travels);
main()
{
   int result,holidays,travels;
   string year;
   cout<<"Enter the type of year:";
   cin>>year;
   cout<<"Enter Holidays:";
   cin>>holidays;
   cout<<"Enter the time he visited hometown:";
   cin>>travels;
   result=calculation(year,holidays,travels);
   cout<<result;

}
int calculation(string year,int holidays,int travels)
{
   
   float playHol=0.67*holidays;
   float playH=travels;
   float playS=(48-travels)*0.75;
   float total;
   if (year=="Normal")
   {
      total=playHol+playH+playS;
   }
   else if (year=="Leap")
   {
     float extra=(playHol+playH+playS)*0.15;
     total=playHol+playH+playS+extra;
   }
   floor (total);
   return total;
}