// This program converts cups to fluid ounces

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void showIntro();
double getCups();
double cupsToOunces(double);


int main()
{
	// Variables for the cups and counces
	double cups, ounces;

	// Set up numeric output formatting
	cout << fixed << showpoint << setprecision(1);

	// Display an intro to screen
	showIntro();

	// Get the number of cups
	cups = getCups();

	// Convert cups to fluid ounces
	ounces = cupsToOunces(cups);

	// Display the number of ounces
	cout << cups << " cups equals "
		<< ounces << " ounces.\n";
    return 0;
}

// Function***** Displays an introuducory screen
void showIntro()
{
	cout << "This program converts measurments\n"
		<< "in cups to flud ounces. For your\n"
		<< "reference the formuls is: \n"
		<< "    1 cup = 8 fluid ounces\n\n";
}

/*
	The getCups functions promplts the user
	to enter the number of cups and then
	returns that value as a double
*/
double getCups()
{
	double numCups;

	cout << "Enter the number of cups: ";
	cin >> numCups;
	return numCups;
}

/*
	The cupsToOunces functions accepts a number 
	of cups as an arguments and returns the equivalent 
	number of fluid ounces as a double
*/
double cupsToOunces(double numCups)
{
	return numCups * 8.0;
}