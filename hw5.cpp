#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	int actual_PIN[5] = { 1,2,3,4,5 };
	int rand_dig[10];

	srand(time(NULL));

	cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl;
	cout << "NUM:";
	for (int i = 0;i < 10;i++) {
		rand_dig[i] = rand() % 3 + 1;
		cout <<" " << rand_dig[i];
	}

	int password;
	cout << "\n\n";
	cout << "Enter the password: ";
	cin >> password;

	bool correct = true;
	for (int i = 0;i < 5;i++) {
		int digit;
		digit = password / pow(10, 4 - i) ;
		digit %= 10;
		if (digit != rand_dig[actual_PIN[i]]) {
			correct = false;
			break;
		}
	}

	if (correct) {
		cout << "The password is correct!!" << endl;
	}
	else {
		cout << "The password isn't correct, please try again." << endl;
	}

	return 0;
}
