// Student: Griffin Gowdey.
// Instructor: Velda James.
// Class Number: COSC1436-57009.
// Class Name: Programming Fundamentals I.
// Semester: Fall 2020.
// Code Assessment: Arrays.

/*
Write a program that accepts three decimal numbers interactively from 
the keyboard, finds the sum, finds the mean average, determines which 
is the largest number of the three numbers.

Declare, define and call an integer function, statsSummary(), that 
accepts all three results (sum, mean average, largest value) as arguments, 
in the order listed, calculate the sum of the three results and return the 
integer part of their sum. The function must be called in an output statement.

Here is an example of the expected user interaction of the program:

Program: Stats Summary

   Enter value 1:>   20
   Enter value 2:>   40
   Enter value 3:>   0

   Stats Summary...  120

End of program...
*/

#include <iostream>
using namespace std;

int statsSummary(double, double, double);

int main()
{
   double sum = 0, meanAv = 0, highest = 0, num = 0;
   int i = 1;
   
   cout << "Program: Stats Summary" << endl;

   highest = -0.0000000000000000000000000001;
   for (i = 1; i <= 3; i++)
   {
      cout << "Enter value " << i << ":> ";
      cin >> num;
      sum = sum + num;
      if (num >= highest)
        highest = num;
   }

   meanAv = sum/3;
   
   cout << "\nStats Summary... " << statsSummary (sum, meanAv, highest);
   
   cout << "\n\nEnd of program...";
   return 0;
}

int statsSummary(double s, double a, double h)
{
   return int(s + a + h);   
}