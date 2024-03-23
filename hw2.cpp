/*Programming: Min-Fang Chuang   Date: 2024/03/23
 *Instruction: Chow-Sing Lin     Class: Program Design
 *
 *Convert to miles per hours
 */
#include<iostream>
#include<cstdlib>
using namespace std;

//function of prototype
double convertToMPH(int, int);
double convertToMPH(double);

int main() {
	char state;  //input - the state between two unit

	//ask the user to use which unit
	cout << "a) minutes and seconds per mile ;  \nb) kilometers per hour ;\nEnter 'a' or 'b' to choose the statement: ";
	cin >> state;
	cout << endl;

	double mph = -1;  //output - miles per hours

	//identify the state
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


	//display the miles per hours
	cout << "The miles per hour (mph) is " << mph << endl;

	system("pause");
	return 0;
}


//convert minutes and seconds per mile to miles per hour
double convertToMPH(int min, int sec) {
	double hour;
	double mph;
	hour = (min + sec / 60.0) / 60.0;
	mph = (1 / hour);
	return(mph);
}

//convert kilometers per hour to miles per hour
double convertToMPH(double kph) {
	double mph;
	mph = kph / 1.61;
	return (mph);
}
