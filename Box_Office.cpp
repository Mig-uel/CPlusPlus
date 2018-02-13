/* 
   Box Office
       A movie theater only keeps 80 percent of the revenue earned from 
       ticket sales. The other 20 percent goes to the distibutor. 
       Write a program that calculates a theater's gross and
       net box office revenue for a night. The program should ask for 
       the name of the movie, and how many adult and child tickets were 
       sold. (The price of an adult ticket is $10 and
       a child's ticket is $6.) 
       It should display a report similar to the following:
       
         Movie Name: "Wheels of Fury"
         Adult Tickets Sold: 382
         Child Tickets Sold: 127
         Gross Box Office Revenue: $ 4582.00
         Amount Paid to Distributor: - $ 916.40
         Net Box Office Revenue: $ 3665.60   
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
   string z; //Movie Name
   double child, 
          adult,
          revenue = 0,
          temp = 0;
   
   cout << "What is the name of the movie?: ";
   getline(cin, z);
   z = "\"" + z + "\"";
   
   cout << "How many Adult tickets were sold?: ";
   cin >> adult;
   revenue += (adult * 10); //First: Multiply (adult * 10) 
                            //Second: Adds the product of (adult * 10) to 'revenue'
   
   cout << "How many Child tickets were sold?: ";
   cin >> child;
   revenue += (child * 6); //First: Multiplies (child * 6)
                           //Seconds: Adds the product of (child * 6) to the revenue from before (adult * 10)
                           //Ex. (adult * 10) + (child * 6) = revenue
                           
   temp = revenue; //Will come in handy later ;)
   
   cout << endl;
   
   cout << "Movie Name: " << z << endl 
        << "Adult Tickets Sold: " << adult << endl 
        << "Child Tickets Sold: " << child << endl
        << setprecision(2) << fixed //Sets decimal place
        << "Gross Box Office Revenue: " << "$" << revenue << endl;
        
   revenue *= .2; //(revenue * 0.2) = "new" revenue
                  //Should probably create a seperate double for this (lazy)
        
   cout << "Amount Paid to Distributor: - $" << revenue << endl;
        
   temp -= revenue; //(temp - revenue) = "new" temp
   
   cout << "Net Box Office Revenue: $" << temp << endl;
   
   cout << endl << endl;
   system("pause");
   return (0);
}
