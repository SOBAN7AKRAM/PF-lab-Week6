#include <iostream>
using namespace std;
char gradeC(int number);
main ()
{
   int number;
   char result;
   cout<<"Enter marks:";
   cin>>number;
   result=gradeC(number);
   cout<<"Your grade:"<<result;
}
char gradeC(int number)
{
    char grade;
    if (number<50)
    {
        grade='F';
    }
    else if (number>=50 && number <=60)
    {
        grade='E';
    }
    else if (number>=61 && number <=70)
    {
        grade='D';
    }
    else if (number>=71 && number <=80)
    {
        grade='C';
    }
    else if (number>=81 && number <=85)
    {
        grade='B';
    }
    else if (number>85 && number<=100)
    {
        grade='A';
    }
    return grade;
}