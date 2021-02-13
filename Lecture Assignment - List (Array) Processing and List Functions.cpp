// Student: Griffin Gowdey.
// Instructor: Velda James.
// Class Number: COSC1436-57009.
// Class Name: Programming Fundamentals I.
// Semester: Fall 2020.
// Lecture Assignment: List/Array Processing and List Functions.

/*
Write a program that declares a 12-element list called, monthFigures 
and prompts users to enter the rainfall figures for each of the months 
(from January to December) into an array of integers.

The program should compute and print on the screen the following:
- the total annual rainfall,
- the average monthly rainfall,
- and the name of the months with the highest and lowest figures.

Months should be expressed as January, February, March, April, May, 
June, July, August, September, October, November, December.

Do not accept negative numbers for monthly rainfall figures.

When a negative value is entered, the program outputs "***OOPS! Negative rainfall not allowed. Try again :> " 
and attempts to reread the value.

The average monthly rainfall should display with two decimal precision.

Here are example runs of expected output and interaction: 
https://tinyurl.com/y4vmz83z

These functions should be prototyped, defined and called:
Function name: getFigures
Return type: void
Parameters: integer array called list1
            integer called count1   //the number of value in the list1 array
Purpose: prompt the user for figures and store in the list1 array

Function name: calcTotal
Return type: integer
Parameters: integer array called list1
            integer called count1   //the number of value in the list1 array
Purpose: finds and returns the sum of the values in list1 array

Function name: calcAvg
Return type: double
Parameters: integer array called list1
            integer called count1   //the number of value in the list1 array
Purpose:  Finds and returns the mean average of the values in list1 array

Function name: getHigh
Return type: integer
Parameters: integer array called list1
            integer called count1   //the number of value in the list1 array
Purpose: finds and returns the highest value in the list1 array

Function name: getLow
Return type: integer
Parameters: integer array called list1
            integer called count1   //the number of value in the list1 array
Purpose: finds and returns the lowest value in the list1 array
*/

#include <iostream>
#include <vector>
using namespace std;

const int ARRAY_SIZE = 12;
string name[ARRAY_SIZE] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
int count = 0;

// Function prototypes.
double inputValidate(double);
void getFigures(double []);
double calcTotal(double []);
double calcAvg(double);
void getHigh(double [], vector<int> &);
void getLow(double [], vector<int> &);
void display(double, double, vector<int>, vector<int>);


// Main function.
int main()
{

    double rainfall[ARRAY_SIZE];
    getFigures(rainfall);

    double total_rainfall = calcTotal(rainfall);
    double average_rainfall = calcAvg(total_rainfall);

    vector<int>highest_months;
    getHigh(rainfall, highest_months);

    vector<int>lowest_months;
    getLow(rainfall, lowest_months);

    display(total_rainfall, average_rainfall, highest_months, lowest_months);

    return 0;
}


// Function definitions.
double inputValidate(double user_number)
{
    while(!(cin >> user_number) || user_number < 0)
    {
        cout << "***OOPS! Negative rainfall not allowed.  Try again :>";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;
}

void getFigures(double array[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter rainfall figures for " << name[count + i] << ":> ";  
        array[i] = inputValidate(array[i]);
    }
}

double calcTotal(double array[])
{
    double total = 0;

    for (int i = 0; i < ARRAY_SIZE; i++)
        total += array[i];

    return total;
}

double calcAvg(double sum)
{
    return sum / ARRAY_SIZE;
}

void getHigh(double array[], vector<int> &vector_array)
{
    double max = array[0];
    vector_array.push_back(0);

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if(array[i] > max)
        {
            max = array[i];  
            vector_array.clear();
            vector_array.push_back(i);        
        }
        else if (array[i] == max)
        {
            max = array[i];
            vector_array.push_back(i);
        }
    }
}

void getLow(double array[], vector<int> &vector_array)
{
    double min = array[0];
    vector_array.push_back(0);

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
            vector_array.clear();
            vector_array.push_back(i);
        }
        else if (array[i] == min)
        {
            min = array[i];
            vector_array.push_back(i);
        }
    }
}

void display(double total, 
             double average, 
             vector<int> highest_months, 
             vector<int> lowest_months)
{
    const string MONTHS[] = {"January", "February", "March",
                             "April"  , "May"     , "June",
                             "July"   , "August"  , "September",
                             "October", "November", "December"};

    cout << "\nTotal annual rainfall:> "
         << total
         << endl;
    
    cout << "Average monthly rainfall:> "
         << average
         << endl;
         
     cout << "Month with least rainfall:> ";

    for (int i = 0; i < lowest_months.size(); i++)
    {
        if(i == lowest_months.size() - 1)
            cout << MONTHS[lowest_months[i]];
        else
            cout << MONTHS[lowest_months[i]] << ", ";
    }
            
    cout << endl;    
    
    cout << "Month with most rainfall:> ";

    for (int i = 0; i < highest_months.size(); i++)
    {
        if(i == highest_months.size() - 1)
            cout << MONTHS[highest_months[i]];
        else
            cout << MONTHS[highest_months[i]] << ", ";
    }

    cout << endl;
    
    cout << "\n\nEnd of program...";
}