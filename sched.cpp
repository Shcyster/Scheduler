/*
char *ctime(const time_t *time);
This returns a pointer to a string of the form day month year hours:minutes:seconds year\n\0.
*/

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <ctime>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct widget_t {
	double x;
	double y;
	int count;
};

int computejdn(int day, int month, int year)
{
	int a = floor((14 - month) / 12);
    int y = year + 4800 - a;
    int m = month + (12*a) - 3;
    return (day + floor( ( (153 * m) + 2) / 5 ) + (365*y) + floor(y/4) -
		  				floor(y/100) + floor(y/400) - 32045);

} // computejdn()


int main()
{
	vector<string> arr; // array of user's to-do items

	while (1){ // main loop of program
	
	// do everything after this	

	int command; // store user input
	

	int dueDate;
	string taskDescr;
	string fullTaskDescr;
	string element;

	tm *ltm;
	int dd;
	int mm;
	int yyyy;
	int DD;
	int MM;
	int YYYY;
	string numDays;
	time_t now;
	bool leadingzero;

	int a;
	int y;
	int m;

	int jdnstart;
	int jdnend;

	char temp[20];

	cout << "\nMain Menu\n1) Display Schedule\n2) Add Item\n3) Remove Item\n4) Update Item\n" << endl;
	cin >> command;

	switch ( command ) 
	{
		case 1:

			cout << "\n\n\n\n" << "*******************SCHEDULE*************************\n\n" << endl;
		    for(int i = 0; i < arr.size(); i++)
		    	cout << arr[i] << endl; // print first element of string, then rest of string
		    cout << "\n\n\n\n\n\n\n\n" << endl;
			break;


		case 2:

			cout << "Enter Description of Task" << endl;
			cin >> taskDescr;

			cout << "Input due date of task in format DDMMYYYY" << endl;
			cin >> dueDate;

			now = time(0);                                        // get current time
		    ltm = localtime(&now);
		    dd = ltm->tm_mday;
		    mm = ltm->tm_mon;
		    yyyy = ltm->tm_year;

		    // convert current time to julian day 
		  	jdnstart = computejdn(dd, mm, yyyy);

		  	DD = dueDate / 1000000;
		    MM = (dueDate % 1000000) / 10000;
		  	YYYY = dueDate % 10000;

		  	jdnend = computejdn(DD, MM, YYYY);
		  	
		  	sprintf(temp, "%d", jdnend - jdnstart);
		  	numDays = (string)temp;

			element = "(" + numDays + ") " + taskDescr;
			arr.push_back(element);
			cout << "Element added\n" << endl; 
			break;


		case 3:

			//cout << "hi" << endl;
			break;


		case 4:

			// case 4

			break;


		default:
		
			cout << "Error: Please supply a correct integer between 1 and 4.\n" << endl;


	} // switch; determine user action

















	} // while main loop of program
} // main()
