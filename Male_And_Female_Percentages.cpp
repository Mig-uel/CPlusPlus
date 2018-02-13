/*
   Male and Female Percentages
   
      Write a program that asks the user for the number of males and the number of females 
      registered in a class. 
      The program should compute and report what percentage of the students are males and what 
      percentage are females. 
      Display the output with two decimal points. 
      If you remembered to convert the decimal result of each calculation to percent form when you 
      displayed it, the two values should add up to 100.00 percent.  
*/
  
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{     
   double students, males, females, a, b;
   
   cout << "Please enter the number of students in the class: "; 
   //I could have calculated the class size later by adding up the males and females entered.
   cin >> students;
   
   cout << "Please enter the number of males in that class: ";
   cin >> males;
   a = (males/students)*100;
   
   cout << "Please enter the number of females in that class: ";
   cin >> females;
   b = (females/students)*100;
   
   cout << endl;
   
   
   if ( (a+b)<=100 ) 
   //Used to prevent "overflow"? (When Males and Females don't add up to the class size).
      {
         cout << setprecision(2) << fixed;
         cout << "Male (%): " << a << "%"<< endl << "Female (%): " << b << "%" << endl << "Total (%): " << (a+b) << "%" << endl;
      }
   else
      {
         cout << "Incorrect Class Size! Try again." << endl;
      }
   
   
   
   system("pause");
   return (0);
}
