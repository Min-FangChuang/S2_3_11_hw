#include<iostream>
using namespace std;

int main() {
	int grade[6] = { 0 };
	cout << "Enter the grades of all students seperate by ','>> ";
	int student;
	while (cin >> student) {
		grade[student]++;
		if (getchar() == '\n') { break; }
	}

	cout << endl;
	for (int i = 0;i < 6;i++) {
		cout << grade[i] << " grade(s) of " << i << endl;
	}
}
