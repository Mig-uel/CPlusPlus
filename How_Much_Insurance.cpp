/*
    How Much Insurance?
    
      Many financial experts advise property owners to insure their homes or buildings for
      at least 80 percent of the amount it would cost to replace the structure. Write a program
      that asks the user to enter the replacement cost of a building and then displays the
      minimum amount of insurance that should be purchased for the property .  
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   double replacementCost, insurance;
   
   cout << "House Insurance!" << endl;
   
   cout << "Enter the replacement cost of the building: $";
   cin >> replacementCost;
   
   insurance = (replacementCost*0.8);
   
   cout << setprecision(2) << fixed;
   cout << "Minimum amount of insurance that should be purchased: $" << insurance << endl;
   

   system("pause");
   return (0);
}
