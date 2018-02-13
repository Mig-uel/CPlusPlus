/*
   Vacation Days
   
      Write a program that prompts the users to enter the number of days 
      they plan to spend on their next vacation. 
      Then compute and report how long that is in hours, 
      in minutes,and in seconds.   
*/
  
#include <iostream>
#include <iomanip>
#include <string>

/* using std::cout;
using std::cin;
using std::endl; */

using namespace std;

int main()
{  
   double days, hours, minutes, seconds;
   
   cout << "How many days do you plan to spend on your next vacation?: ";
   cin >> days;
   
   hours = days*24;
   minutes = hours * 60;
   seconds = minutes * 60;
   
   cout << endl;
      
   cout << days << " days = " << hours << " hours" << endl 
   << days << " days = " << minutes << " minutes" << endl 
   << days << " days = " << seconds << " seconds" << endl;
   
   
   system("pause");
   return (0);
}
