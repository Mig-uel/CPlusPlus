/*
      Currency
         Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
         storing the conversion factors in the constant variables YEN_PER_DOLLAR and
         EUROS_PER_DOLLAR. To get the most up-to-date exchange rates, search the Internet
         using the term "currency exchange rate" or "currency converter." If you cannot find
         the most recent exchange rates, use the following:
         
         1 Dollar= 120.005 Yen
         1 Dollar= .881 Euros    
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
   const double YEN_PER_DOLLAR = 107.83,
                EUROS_PER_DOLLAR = 0.81;
   
   double usd;
   
   cout << "Please enter a U.S. dollar amount: ";
   cin >> usd;
   
   cout << endl << "$" << usd << " is:" << endl
                << "¥" << (usd*YEN_PER_DOLLAR) << " Yen" << endl
                << "€" << (usd * EUROS_PER_DOLLAR) << " Euro" << endl;
   
   cout << endl << endl;
   system("pause");
   return 0;
}