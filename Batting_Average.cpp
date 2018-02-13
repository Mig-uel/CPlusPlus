/*
    Batting Average
    
      Write a program to find a baseball player's batting average. The program should ask
      the user to enter the number of times the player was at bat and the number of hits
      earned. It should then display the batting average to four decimal places.   
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   double bat, hits, average;
   
   cout << "Batting Average!" << endl;
   
   cout << "Enter the number of times the player was at bat: ";
   cin >> bat;
   
   cout << "Enter the number of hits earned: ";
   cin >> hits;
   
   average = (bat + hits) / 2;
   
   cout << setprecision(4) << fixed;
   cout << "The average is: " << average << endl;
   

   system("pause");
   return (0);
}
