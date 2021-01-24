// Student: Griffin Gowdey.
// Instructor: Velda James.
// Class Number: COSC1436-57009.
// Class Name: Programming Fundamentals I.
// Semester: Fall 2020.
// Code Assessment: Decision Structures.

/*
Translate the following algorithm to a C++ program. These libraries are 
required: iostream, string, locale.

DisplayLine statement in the algorithm means to end the statement with a 
new line (endl or '\n').

Start
	Declare package as character
	Declare hours as integer
	Declare totalAmountA as real
	Declare totalAmountB as real
	Declare totalAmountC as real
	Declare hoursOver as integer
	Declare savingsB as real
	Declare savingsC as real
	Declare hoursMax as integer
	Declare month as string
	Declare numDays as integer
	Declare savingsA2B as real
	Declare savingsA2C as real
	Declare savingsB2C as real
	
	Display "Enter package letter(A, B, C): "
	Get package
	DisplayLine
	Display "Enter name of the billing month in ALLCAPS: "
	Get month
	DisplayLine
	Display "Enter hours used: "
	Get hours
	
	//Month validation
	If (month == "JANUARY" OR "MARCH" OR "MAY" OR "JULY" OR "AUGUST" OR "OCTOBER" OR "DECEMBER") then
		if hours > 744 then
			Set hours = 744
		end if
	else if (month == "APRIL" OR "JUNE" OR "SEPTEMBER" OR "NOVEMBER") then
		if hours > 720 then
			Set hours = 720
		end if
	else if (month == "FEBRUARY") then
		if(hours > 672) then
			Set hours = 672
		end if
	else
		DisplayLine
		DisplayLine
		DisplayLine "***Invalid month entered.  Must type in ALLCAPS***"
		Terminate program
	End if
	
	Set totalAmountA = 9.95
	Set totalAmountB = 44.95
	Set totalAmountC = 89.95
	
	Set hoursOver = hours - 40
	if (hoursOver > 0) then
		Set totalAmountA += 2.0 * hoursOver
	End if
	
	Set hoursOver = hours - 90
	if(hoursOver > 0) then
		Set totalAmountB += hoursOver
	End if
	
	Set savingsA2B = totalAmountA - totalAmountB
	Set savingsA2C = totalAmountA - totalAmountC
	Set savingsB2C = totalAmountB - totalAmountC
	
	DisplayLine
	DisplayLine
	
	//Display results
	Switch makeUpper(package)
		Case 'A'
			DisplayLine "Package A total amount due: $" + totalAmountA
			if(savingsA2B > 0) then
				DisplayLine "You could have saved $" + savingsA2B + " with Package B"
			end if
			if(savingsA2C > 0) then
				DisplayLine "You could have saved $" + savingsA2C + " with Package C"
			end if			
			Break
		Case 'B'
			DisplayLine "Package B total amount due: $" + totalAmountB
			if(savingsB2C > 0) then
				DisplayLine "You could have saved $" + savingsB2C + " with Package C"
			end if
			Break
		Case 'C'
			DisplayLine "Package C total amount due: $" + totalAmountC
			Break
		Default
			DisplayLine "Package " + package + " not found"
	End Switch
	
	DisplayLine
	DisplayLine
	DisplayLine "--------------------"
	DisplayLine "   End of Program   "
	DisplayLine "--------------------"
Stop
*/

#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    char package;
    int hours, hourOver, hoursMax, numDays;
    double totalAmountA, totalAmountB, totalAmountC;
    double savingsB, savingsC, savingsA2B, savingsA2C, savingsB2C;
    string month;

    cout << "Enter package letter(A, B, C): ";
    cin >> package;
    cout << endl;

    cout << "Enter name of the billing month in ALL CAPS: ";
    cin >> month;
    cout << endl;

    cout << "Enter hours used: ";
    cin >> hours;
    cout << endl;

    // Month validation.
    if (month == "JANUARY" || month == "MARCH" || month == "MAY" || month == "AUGUST" || month == "OCTOBER" || month == "DECEMBER")
    {
        if (hours > 744)
            hours = 744;
    }

    else if (month == "APRIL" || month == "JUNE" || month == "SEPTEMBER" || month == "NOVEMBER")
    {
        if (hours > 720)
            hours = 720;
    }

    else if (month == "FEBRUARY")
    {
        if (hours > 672)
        {
            hours = 672;
        }
    }
    
    else
    {
        cout << endl << endl;
        cout << "***Invalid month entered. Mutst type in ALL CAPS***";
        exit(0);
    }

    totalAmountA = 9.95;
    totalAmountB = 44.95;
    totalAmountC = 89.95;

    hoursOver = hours - 40;
    if (hoursOver > 0)
    {
        totalAmountA += 2.0 * hoursOver;
    }

    hoursOver = hours - 90;
    if (hoursOver > 0)
    {
        totalAmountB += hoursOver;
    }

    savingsA2B = totalAmountA - totalAmountB;
    savingsA2C = totalAmountA - totalAmountC;
    savingsB2C = totalAmountB - totalAmountC;

    cout << endl << endl;

    cout << 

    // Displaying results.
    cout << "Results: " << endl;
    switch (toUpper(package))
    {
        case 'A':
        cout << "Package A total amount due: $" << totalAmountA << endl;
        if (savingsA2B > 0)
        cout << "You could have saved $" << savingsA2B << " with package B" << endl;
        if (savingsA2C > 0)
        cout << "You could have saved $" << savingsA2C << " with package C" << endl;
        break;

        case 'B':
        cout << "Package B total amount due: $" << totalAmountB << endl;
        if (savingsB2C > 0)
        cout << "You could have saved $" << savingsB2C << " with package C"  << endl;
        break;

        case 'C':
        cout << "Package C total amount due: $" << totalAmountC << endl;
        break;

        default:
        cout << "Package" << package << " not found" << endl;   
    }

    cout << endl;
    cout << endl;
    cout << "--------------------"
    cout << "   End of Program   "
    cout << "--------------------"

    return 0;
}