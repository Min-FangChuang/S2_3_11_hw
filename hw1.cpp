#include <iostream>
using namespace std;

void TimeInput(int&, int&);
void TimeConversion(int&, char&);
void TimeOutput(int, int, char);

int main() {
	while (true) {
		int hour, min;
		char apm;
		TimeInput(hour, min);
		TimeConversion(hour, apm);
		TimeOutput(hour, min, apm);

		char again;
		cout << "Do you want to conversion a new time (T/F) ?";
		cin >> again;
		if (again == 'F') { break; }
		cout << endl;
	}
}

void TimeInput(int& h, int& m) {
	cout << "Enter the time in 24-hour notation:\nHour: ";
	cin >> h;
	cout << "Minute: ";
	cin >> m;
}
void TimeConversion(int& h, char& apm) {
	if (h < 12) {
		apm = 'A';
		if (h == 0) {
			h = 12;
		}
	}
	else {
		apm = 'P';
		if (h == 24) { apm = 'A'; }
	}

	if (h > 12) {
		h = h - 12;
	}

}
void TimeOutput(int h, int m, char apm) {
	cout << "\n12-hour notation: " << h << ":" << m ;

	if (apm == 'A') {
		cout << " A.M.\n";
	}
	if (apm == 'P') {
		cout << " P.M.\n";
	}
}
