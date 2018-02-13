/*
      Miles per Gallon

      Write a program that calculates a car's gas mileage. The program should ask the user
      to enter the number of gallons of gas the car can hold and the number of miles it can be
      driven on a full tank . It shou ld then calculate and display the number of miles per
      gallon the car gets. 
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{   
   double gallons, miles, mpg;
   
   cout << "First, enter the number of gallons of gas your car can hold: ";
   cin >> gallons;
   
   cout << "Now, enter the number of miles your car can drive on a full tank: ";
   cin >> miles;
   
   mpg = (miles/gallons);
   
   cout << setprecision(2) << fixed;
   cout << "Miles per gallon: " << mpg << " mph" << endl;

   system("pause");
   
   return (0);
}
