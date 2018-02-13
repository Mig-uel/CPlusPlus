/*
   How Many Widgets?
      The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each .
      Write a program that calculates how many widgets are stacked on a pallet, based on
      the total weight of the pallet. The program should ask the user how much the pallet
      weighs by itself and with the widgets stacked on it. It should then calculate and display
      the number of widgets stacked on the pallet.    
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
   double widget = 12.5,
          pallet = 0,
          temp = 0; 
          
   
   cout << "What is the pallet's weight by itself? ";
   cin >> pallet;
   temp = pallet; //Sets 'temp' to equal 'pallet'
   
   pallet = 0; //Resets 'pallet' for re-use
   cout << "What is the pallet's weight with the widgets stacked on it? ";
   cin >> pallet;
   
   
   pallet = (pallet - temp)/widget; //Calculations!
   
   
   cout << setprecision(0) << fixed; //Rounding to whole number because there is no
                                     //such thing as a 1/2 widget!                                  
   cout << "There are " << pallet << " widgets stacked on the pallet.";
   
   cout << endl << endl;
   system("pause");
   return (0);
}
