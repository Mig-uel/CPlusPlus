/*
   Average Rainfall
   
      Write a program that calculates the average monthly rainfall for three months. The
      program should ask the user to enter the name of each month, such as June or July, and
      the amount of rain (in inches) that fell that month. The program should display a
      message similar to the following:
      The average monthly rainfall for June, July, and August was 6.72 inches.  
*/
  
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{  
   string a, b, c;
   double w = 0, average, sum = 0;

   cout << "Enter the names of 3 months: ";
   cin >> a >> b >> c;
   
   cout << "Enter the amount of rain in inches that fell in " << a << ": ";
   cin >> w;
   sum = sum + w;
   
   cout << "Enter the amount of rain in inches that fell in " << b << ": ";
   cin >> w;
   sum = sum + w;

   cout << "Enter the amount of rain in inches that fell in " << c << ": ";
   cin >> w;
   sum = sum + w;
   
   average = sum/3;

   cout << setprecision(2) << fixed;
   cout << "The average rainfall for " << a <<", " << b << ", and " << c << " was " << average << " inches." << endl;

   system("pause");
   return (0);
}
