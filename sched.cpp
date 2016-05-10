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
	vector<string> arr; // array of user's to-do items

	while (1){ // main loop of program
	
	// do everything after this	









	int command; // store user input
	

	string numDays;
	string taskDescr;
	string fullTaskDescr;
	string element;

	cout << "\nMain Menu\n1) Display Schedule\n2) Add Item\n3) Remove Item\n4) Update Item\n" << endl;
	cin >> command;

	switch ( command ) 
	{
		case 1:
		    for(int i = 0; i < arr.size(); i++)
		    	cout << arr[i] << endl; // print first element of string, then rest of string
			break;
		case 2:
			
			cout << "Input number of days left to complete task: " << endl;
			cin >> numDays;
			cout << "Enter Description of Task" << endl;
			cin >> taskDescr;
			/*while (taskDescr != "\n")
			{
				fullTaskDescr = fullTaskDescr + taskDescr + " ";
				cin >> taskDescr;
			} // while input not null*/
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
