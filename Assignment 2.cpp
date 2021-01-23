// Student: Griffin Gowdey.
// Instructor: Velda James.
// Class Number: COSC1436-57009.
// Class Name: Programming Fundamentals I.
// Semester: Fall 2020.
// Assignment 2.

/*
Design and write a C++ program that solves this problem:

A bag of cookies holds 40 cookies. The calorie information on the 
bag claims that there are 10 “servings” in the bag and that a serving 
equals 300 calories. Write a program that asks the user to input how 
many cookies he or she actually ate and then reports how many total 
calories were consumed.
*/

#include <iostream>
using namespace std;

int main()
{
    int numAte;
    int numSrvg = 10;
    double totServings;
    double totCalories;

    cout << "How many cookies did you eat? ";
    cin >> numAte;

    totServings = numAte / (1.0 * numSrvg);
    cout << endl << totServings << endl;
    totCalories = totServings * 300;

    cout << "Total calories: " << totCalories;

    return 0;
}