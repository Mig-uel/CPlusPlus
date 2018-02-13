/* 
   Stadium Seating
   
   There are three seating categories at a stadium . For a softball game, Class A seats cost
   $15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
   many tickets for each class of seats were sold, then displays the amount of income
   generated from ticket sales. Format your dollar amount in a fixed-point notation with
   two decimal points and make sure the decimal point is always displayed. 
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   double seatsA = 0, seatsB =0, seatsC = 0, total;
   
   cout << "How many seats for Class A were sold? ";
   cin >> seatsA;
   seatsA= seatsA * 15;
   
   cout << "How many seats for Class B were sold? ";
   cin >> seatsB;
   seatsB = seatsB * 12;
   
   cout << "How many seats for Class C were sold? ";
   cin >> seatsC;
   seatsC = seatsC * 9;
   
   total = (seatsA + seatsB + seatsC);
   
   cout << setprecision(2) << fixed;
   cout << "Revenue generated: $" << total << endl;

   system("pause");
   return (0);
}
