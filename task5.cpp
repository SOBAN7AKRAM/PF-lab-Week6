#include <iostream>
using namespace std;
float totalincome(string types,int rows,int columns);
main ()
{
   int rows,columns;
   string types;
   cout <<"Enter screening types:";
   cin>>types;
   cout <<"Enter rows:";
   cin>>rows;
   cout <<"Enter columns:";
   cin>>columns;
   float result=totalincome(types,rows,columns);
   cout <<"Total income is:"<<result;
}
float totalincome(string types,int rows,int columns)
{
    float income;
    if (types=="premiere")
    {
        income=12*rows*columns;
    }
    else if (types=="normal")
    {
        income=7.50*rows*columns;
    }
    else if (types=="discount")
    {
        income=5*rows*columns;
    }
    return income;

}