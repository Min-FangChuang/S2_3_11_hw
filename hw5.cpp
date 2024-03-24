/*Programming: Min-Fang Chuang   Date: 2024/03/23
 *Instruction: Chow-Sing Lin     Class: Program Design
 *
 *Simulate the authentication process
 */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	//the actual pin
	int actual_PIN[5] = { 1,2,3,4,5 };
	//random numbers to the digits from 0 to 9
	int rand_dig[10];

	//set random seed
	srand(time(NULL));

	//display the random digits
	cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl;
	cout << "NUM:";
	for (int i = 0;i < 10;i++) {
		rand_dig[i] = rand() % 3 + 1;
		cout <<" " << rand_dig[i];
	}

	//response from user
	int password;  //input - user enter password
	cout << "\n\n";
	cout << "Enter the password: ";
	cin >> password;

	//identify whether the password is correct
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

	//display the result
	if (correct) {
		cout << "The password is correct!!" << endl;
	}
	else {
		cout << "The password isn't correct, please try again." << endl;
	}

	system("pause");
	return 0;
}
