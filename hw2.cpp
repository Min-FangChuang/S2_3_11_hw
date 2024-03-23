#include<iostream>
using namespace std;

double convertToMPH(int, int);
double convertToMPH(double);

int main() {
	char state;
	cout << "a) minutes and seconds per mile ;  \nb) kilometers per hour ;\nEnter 'a' or 'b' to choose the statement: ";
	cin >> state;
	cout << endl;
	double mph = -1;
	if (state == 'a') {
		int min, sec;
		cout << "Enter  minutes and seconds per mile:\nMinutes: ";
		cin >> min;
		cout << "Second: ";
		cin >> sec;
		mph = convertToMPH(min, sec);
	}
	if (state == 'b') {
		int kph;
		cout << "Enter kph: ";
		cin >> kph;
		mph = convertToMPH(kph);
	}

	cout << "The miles per hour (mph) is " << mph << endl;;
}

double convertToMPH(int min, int sec) {
	double hour;
	double mph;
	hour = (min + sec / 60.0) / 60.0;
	mph = (1 / hour);
	return(mph);
}
double convertToMPH(double kph) {
	double mph;
	mph = kph / 1.61;
	return (mph);
}
