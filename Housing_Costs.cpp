/*
   Housing Costs
   
      Write a program that asks the user to enter their monthly costs for each of the following
      housing-related expenses:
         • rent or mortgage payment
         • phones
         • utilities 
         • cable
      The program should then display the total monthly cost of these expenses and the total
      annual cost of these expenses. 
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   double rOrM, phoneBill, utilities, cable, total;
   
   cout << "This program will calculate your Housing Costs!" << endl << endl;
   
   cout << "Enter your monthly rent or mortgage payment: $" ; 
   cin >> rOrM;
   
   cout << "Enter monthly phone payment: $";
   cin >> phoneBill;
   
   cout << "Enter monthly utility payment: $";
   cin >> utilities;
   
   cout << "Enter monthly cable payment: $";
   cin >> cable;
   
   total = (rOrM + phoneBill + utilities + cable);
   
   cout << endl;
   
   cout << setprecision(2) << fixed;
   cout << "The monthly cost of these expenses is: $" << total << endl;
   
   total = total * 12;
   
   cout << "The annual cost of these expenses is: $" << total << endl;

   system("pause");
   return (0);
}
