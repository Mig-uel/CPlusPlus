/*
   Fat Gram Calculator
      Write a program that asks the user to enter the number of calories and fat grams in a food item.
      The program should display the percentage of the calories that come from fat.
      One gram of fat has 9 calories; therefore:
      Calories from fat 5 Fat grams * 9
      The percentage of calories from fat can be calculated as follows:
      Calories from fat 4 Total calories
      If the calories from fat are less than 30 percent of the total calories of the food, it should
      also display a message indicating the food is low in fat.
*/

import java.util.Scanner;

public class FatGramCalculator
{
   public static void main(String [] args)
   {
      Scanner input = new Scanner(System.in);
      
      double cals,
             fatGrams,
             calsFromFat,
             totalCalsFromFat;
      
      System.out.println("**********************************************");
      
      System.out.println("1st: Enter the amount of calories in the food:");
      cals = input.nextDouble();
      System.out.println("2nd: Enter the amount of fat grams in the food:");
      fatGrams = input.nextDouble();
      
      calsFromFat = (fatGrams * 9);
      totalCalsFromFat = (calsFromFat / cals);
      
      if(calsFromFat > cals)
      {
         System.out.println("Input is invalid!");
      }
      else
      {
         if(calsFromFat < (0.30 * cals))
         {
            System.out.println("The food is low in fat!");
         }
            System.out.printf("The percentage of fat calories is %.2f%%", totalCalsFromFat);
      }
   }
}