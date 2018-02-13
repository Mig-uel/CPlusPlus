/*
   Test Average
   
      Write a program that asks for five test scores. The program should calculate the average
      test score and display it. The number displayed should be formatted in fixed-point
      notation, with one decimal point of precision. 

*/
  
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{  
   int x = 1; //x is the counter
   
   double score, sum = 0, average;
   
   while (x <= 5) //Loop this only when 'x' is less than or equal to 5
   {
      cout << "Enter test score #" << x << ": ";
      cin >> score;
      
      sum = score + sum;
      
      x+=1; //Adds 1 to the counter 'x'
   }
   
   average = sum/5;
   
   cout << setprecision(1) << fixed;
   cout << "The average test score of " << x-1 << " test is " << average << endl;
   

   cout << system("pause");
   return (0);
}
