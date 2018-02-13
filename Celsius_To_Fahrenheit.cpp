/*
      Celsius to Fahrenheit
         Write a program that converts Celsius temperatures to Fahrenheit temperatures . The
         formula is
         
         F = 9/5C + 32
        
         where F is the Fahrenheit temperature and C is the Celsius temperature. The program
         should prompt the user to input a Celsius temperature and should display the
         corresponding Farenheit temperature.   
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
   double celsius, fahrenheit;
   
   cout << "Enter a temperature in celsius (°C): ";
   cin >> celsius;

   fahrenheit = (9/5.0) * celsius + 32; //Either '9' or '5' must have a decimal otherwise
                                        //it will default to integer division!
   
   cout << endl << "The temperature " << celsius << " °C is " << fahrenheit << " °F";
   
   cout << endl << endl;
   system("pause");
   return 0;
}