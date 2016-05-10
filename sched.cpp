#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct widget_t {
	double x;
	double y;
	int count;
};


int main()
{
	while (1){ // main loop of program
	
	// do everything after this	









	int command; // store user input
	vector<string> arr; // array of user's to-do items

	cout << "\nMain Menu\n1) Display Schedule\n2) Add Item\n3) Remove Item\n4) Update Item\n" << endl;
	cin >> command;
	cout << command;

	switch ( command ) 
	{
		case 1:
		    for(int i = 0; i < arr.size(); i++)
		    	cout << arr[i] << endl;
			break;
		case 2:
			string numDays;
			string taskDescr;
			cout << "Input number of days left to complete task: " << endl;
			cin >> element;
			cout << "Enter Description of Task" << endl;
			cin >> taskDescr;
			string element = numDays + taskDescr;
			arr.push_back(element);
			break;
		case 3:
			break;
		case 4;
			break;
		default:
			cout << "Error: Please supply a correct integer between 1 and 4.\n" << endl;
	} // switch; determine user action

















	} // while main loop of program
} // main()
