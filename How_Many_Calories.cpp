/*
      How many Calories?
      
         A bag of cookies holds 30 cookies. The calorie information on the bag claims that
         there are 10 "servings" in the bag and that a serving equals 240 calories. Write a
         program that asks the user to input how many cookies they actually ate and then
         reports how many total calories were consumed. 
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
   double cookies, cals = 240, total;
          
   cout << "How many cookies did you eat? ";     
   cin >> cookies;
   
   total = (cookies/3) * cals; //'3' equals 3 cookies per serving -->  (30/3) = 10 servings
   
   if (cookies <= 30 && cookies >= 0) /*Prevents negative numbers and over 30 numbers
                                        since the bag of cookie only holds 30 cookies*/
   {
      cout << "Total calories consumed: " << total << " calories.";
   }
   else
   {
      cout << "Number of cookies eaten is impossible! Try again!";
   }
    
   cout << endl << endl;
   system("pause");
   return 0;
}
