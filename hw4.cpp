/*Programming: Min-Fang Chuang   Date: 2024/03/23
 *Instruction: Chow-Sing Lin     Class: Program Design
 *
 *calculate the distance of user and reviewer, and predict the rating of user
 */
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main() {
	//table of reviewer-rating data
	int data[4][6] = { {3,1,5,2,1,5},{4,2,1,4,2,4},{3,1,2,4,4,1},{5,1,4,2,4,2} };
	//user's ratings for any three movies
	int user[3][2];

	//get the user's ratings
	cout << "Enter ratings for any three movies:\n";
	for (int i = 0;i < 3;i++) {
		cout << "Movie"<<i+1<<" (100~105) : ";
		cin >> user[i][0];
		cout << "Rate" << i + 1 << " (1~5) : ";
		cin >> user[i][1];
		cout << endl;
	}

	//compute the distance of user and reviewer
	int clost = 10, clost_viewer;
	for (int i = 0;i < 4;i++) {
		int difference = 0;
		int distance;
		for (int j = 0;j < 3;j++) {
			difference += pow(user[j][1] - data[i][user[j][0]-100], 2);
		}
		distance = sqrt(difference);
		if (distance < clost) {
			clost = distance;
			clost_viewer = i;
		}
	}

	//display the closest match reviewer
	cout << "\nThe cloeset match is reviewer " << clost_viewer << endl;
	cout << "The distance is " << clost << endl;

	//predict ratings of other three movies
	cout << "\nPredict" << endl;
	for (int i = 0;i < 6;i++) {
		bool have_rate = false;
		for (int j = 0;j < 3;j++) {
			if (i+100 == user[j][0]) {
				have_rate = true;
				break;
			}
		}
		if (!have_rate) {
			cout <<"a rating of "<< data[clost_viewer][i] << " for movie " << 100 + i << endl;
		}
	}

	system("pause");
	return 0;
}
