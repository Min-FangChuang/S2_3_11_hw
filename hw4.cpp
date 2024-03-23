#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int data[4][6] = { {3,1,5,2,1,5},{4,2,1,4,2,4},{3,1,2,4,4,1},{5,1,4,2,4,2} };
	int user[3][2];

	cout << "Enter ratings for any three movies:\n";
	for (int i = 0;i < 3;i++) {
		cout << "Movie"<<i+1<<" (100~105) : ";
		cin >> user[i][0];
		cout << "Rate" << i + 1 << " (1~5) : ";
		cin >> user[i][1];
		cout << endl;
	}

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


	cout << "\nThe cloeset match is reviewer " << clost_viewer << endl;
	cout << "The distance is " << clost << endl;
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

}
