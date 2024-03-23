/*Programming: Min-Fang Chuang   Date: 2024/03/23
 *Instruction: Chow-Sing Lin     Class: Program Design
 *
 *Convert 24-hours notation to 12-hours notation
 */
#include <iostream>
#include <cstdlib>
using namespace std;

//function of prototype
void TimeInput(int&, int&);
void TimeConversion(int&, char&);
void TimeOutput(int, int, char);
void TwoDigit(int);
void clear();

int main() {
	//convert once
	while (true) {
		int hour, min;   //input - hour and minutes of 24-hours notation
		char apm;   //output - A.P./P.M.

		//input convert output
		TimeInput(hour, min);
		TimeConversion(hour, apm);
		TimeOutput(hour, min, apm);

		//ask user whether convert a new time
		char again;
		clear();
		cout << "Do you want to conversion a new time (T/F) ?";
		cin >> again;
		if (again == 'F') { break; }
		cout << endl;
	}

	system("pause");
	return 0;
}

//input a 24-hours notation time
void TimeInput(int& h, int& m) {
	cout << "Enter the time in 24-hour notation:\nHour: ";
	cin >> h;
	cout << "Minute: ";
	cin >> m;
}

//convert to 12-hour time
void TimeConversion(int& h, char& apm) {
	if (h < 12) {  //A.M.
		apm = 'A';
		if (h == 0) {  //00:00 => 12:00 A.M.
			h = 12;
		}
	}
	else {  //P.M.
		apm = 'P';
		if (h == 24) { apm = 'A'; }  //24:00 => 12:00 P.M.
	}

	if (h > 12) {  //24 -> 12
		h = h - 12;
	}

}

//display the 12-hour notation time
void TimeOutput(int h, int m, char apm) {
	//time
	cout << "\n12-hour notation: ";
	TwoDigit(h);
	cout << h << ":";
	TwoDigit(m);
	cout<< m;

	//A.M/P.M.
	if (apm == 'A') {
		cout << " A.M.\n";
	}
	if (apm == 'P') {
		cout << " P.M.\n";
	}
}


//add 0 before one digit number
void TwoDigit(int num) {
	if (num < 10) {
		cout << "0";
	}
}

//clean the char
void clear() {
	while (getchar() != '\n') {
		continue;
	}
}
