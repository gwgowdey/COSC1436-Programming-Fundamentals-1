// Student: Griffin Gowdey.
// Instructor: Velda James.
// Class Number: COSC1436-57009.
// Class Name: Programming Fundamentals I.
// Semester: Fall 2020.
// Lecture Assignment: Decision Structures.

/* The following program has syntax and/or logic errors.
Fix the errors. Build-Run-Test fixed code. */

// Code with errors.
#include <iostream>
using namespace std;

int main()
{
  double num1, num2, quotient;
  cout << "Enter a number: ";
  cin >> num1;
  cout << "Enter another number: ";
  cin >> num2;
  if (num2 == 0)
  cout << "Division by zero is not possible.\n";
  cout << "Please run the program again ";
  cout << "and enter a number besides zero.\n";
  else
  quotient = num1 / num2;
  cout << "The quotient of " << num1 <<
  cout << " divided by " << num2 << " is ";
  cout << quotient << endl; 
  return;
}

// Fixed code.
#include <iostream>
using namespace std;

int main()
{
    double num1, num2, quotient;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    if (num2 == 0)
    {
        cout << "Division by zero is not possible.\n";
        cout << "Please run the program again.\n";
        cout << "and enter a number besides zero.\n";
    }

    else
    {
        quotient = num1/num2;
        cout << "The quotient of " << num1;
        cout << " divided by " << num2 << " is ";
        cout << quotient << endl;
    }
    return 0;
}

/* The quadrant in which a line starting from the origin
is located is determined by the angle the line makes
with the positive x axis, as follows:

Between 0 and 90 degrees = Quadrant I.
Between 90 and 180 degrees = Quadrant II.
Between 180 and 270 degrees = Quadrant III.
Between 270 and 360 degrees = Quadrant IV.

An algorithm has been devised that accepts the angle 
(in degrees) of the line as user input and determines 
and displays the correct quadrant for the input data. 
(Note:  if the angle is exactly 0, 90, 180, 270, 360 
degrees, the corresponding line doesn’t reside in any 
quadrant but lies on an axis.).  If the angle measure 
entered is less than 0 or greater than 360 then assign 
V to quadrant and give the user an error message.

Translate the algorithm to a C++ program.

Algorithm solution/pseudocode from given question:
start
    Declare angle as real
    Declare quadrant as integer = 0
	Get angle
    if angle > 0 AND angle < 90 then
        Set quadrant = 1
	else if angle > 90 AND angle < 180 then	
	    Set quadrant = 2
	else if angle > 180 AND angle < 270 then
	    Set quadrant = 3
	else if angle > 270 AND angle < 360 then
	    Set quadrant = 4
	else if angle < 0 OR angle > 360 then	
	    Set quadrant = 5
	end if
	switch quadrant
	    case 1: Display "quadrant 1"
	    case 2: Display "quadrant 2"
	    case 3: Display "quadrant 3"
	    case 4: Display "quadrant 4"
	    case 5: Display "Invalid angle measure"
	    case 0: Display "lies on axis"
	end switch
stop */

// Code solution.
#include <iostream>
using namespace std;

int main()
{
    int angle;

    cout << "Enter angle of line: ";
    cin >> angle;

    if ((angle > 0) && (angle < 90))
    cout << "The quadrant for angle " << angle << " is I." << endl;

    else if ((angle > 90) && (angle < 180))
    cout << "The quadrant for angle " << angle << " is II." << endl;

    else if ((angle > 180) && (angle < 270))
    cout << "The quadrant for angle " << angle << " is III." << endl;

    else if ((angle > 270) && (angle <= 360))
    cout << "The quadrant for angle " << angle << " is IV." << endl;
    
    else if (angle == 0)
    cout << "Angle of line lies on positive x axis." << endl;

    else if (angle == 90)
    cout << "Angle of line lies on positive y axis." << endl;

    else if (angle == 180)
    cout << "Angle of line lies on negative x axis." << endl;

    else if (angle == 270)
    cout << "Angle of line lies on negative y axis." << endl;

    else if (angle == 360)
    cout << "Angle of line lies on x axis." << endl;

    else
    cout << "The angle does not lie in a quadrant." << endl;

    return 0;
}