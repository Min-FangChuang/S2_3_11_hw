/*Programming: Min-Fang Chuang   Date: 2024/03/23
 *Instruction: Chow-Sing Lin     Class: Program Design
 *
 *count the the grade of 0~5
 */
#include<iostream>
using namespace std;

int main() {
	int grade[6] = { 0 };  //record the number of grades frome 0~5

	//input the grades
	cout << "Enter the grades of all students seperate by ','>> ";
	int student; //a grade
	while (cin >> student) {
		grade[student]++;
		if (getchar() == '\n') { break; }
	}

	//display the number of each grade
	cout << endl;
	for (int i = 0;i < 6;i++) {
		cout << grade[i] << " grade(s) of " << i << endl;
	}

	system("pause");
	return 0;
}
