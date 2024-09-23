/*
 Title: Chapter 2 Exercise 7 - Ocean Levels
 File Name: Chapter2exercise7
 Programmer: Dhrumi Mistry
 Date:09/17/2024
 Requirements:
 Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
 The number of millimeters higher than the current level that the ocean’s level will be in 5 years.
 The number of millimeters higher than the current level that the ocean’s level will be in 7 years.
 The number of millimeters higher than the current level that the ocean’s level will be in 10 years.


*/

#include <iostream>
using namespace std;


int main()
{
	float mill_per_year;

	cout << "Please enter the number of millimeters the ocean level rises per year: ";
	cin >> mill_per_year;

	cout << "The ocean's level will rise " << mill_per_year * 5 << " millimeters after 5 years" << endl;
	cout << "The ocean's level will rise " << mill_per_year * 7 << " millimeters after 7 years" << endl;
	cout << "The ocean's level will rise " << mill_per_year * 10 << " millimeters after 10 years" << endl;




	return 0;

}