/*
      Ingredients Adjuster
         A cookie recipe calls for the following ingredients:
         • 1.5 cups of sugar
         • 1 cup of butter
         • 2.75 cups of flour
         The recipe produces 48 cookies with these amounts of the ingredients. Write a program
         that asks the user how many cookies he or she wants to make and then displays the
         number of cups of each ingredient needed for the specified number of cookies.  
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
   double cookies, sugar, butter, flour, temp;
   
   cout << "How many cookies do you want to make? ";
   cin >> cookies;
   
   temp = cookies / 48;
   
   sugar = temp * 1.5;
   butter = temp * 1;
   flour = temp * 2.75;
   
   cout << endl;
   
   cout << "To make " << cookies << " cookies, you need:" << endl
        << setprecision(2) << fixed
        << "Sugar: " << sugar << " cup(s)" << endl
        << "Butter: " << butter << " cup(s)" << endl
        << "Flour: " << flour << " cup(s)";
    
   cout << endl << endl;
   system("pause");
   return 0;
}