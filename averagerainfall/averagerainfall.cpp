/*
Hannah Kendall Alexa Gorada

averagerainfall.cpp

Calculate the average rainfall in inches of three months.
(Practice use of <iomanip>, <string>, setprecision and fixed.)

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string month1, month2, month3;
	double rfMonth1, rfMonth2, rfMonth3, averagerf;

	cout << "Enter month: ";
	cin >> month1;
	cout << "Enter rainfall for " << month1 << ": ";
	cin >> rfMonth1;

	cout << "Enter month: ";
	cin >> month2;
	cout << "Enter rainfall for " << month2 << ": ";
	cin >> rfMonth2;

	cout << "Enter month: ";
	cin >> month3;
	cout << "Enter rainfall for " << month3 << ": ";
	cin >> rfMonth3;

	averagerf = (rfMonth1 + rfMonth2 + rfMonth3) / 3;

	cout << setprecision(2) << fixed;
	cout << "The average rainfall for ";
	cout << month1 << ", " << month2 << ", and ";
	cout << month3 << " is ";
	cout << averagerf;
	cout << " inches." << endl;

	return 0;
}