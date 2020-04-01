#include <iostream>
#define SIZE 3

using namespace std;

int main() {

	const int nArray[SIZE][SIZE] = {
		{5,10,8},
		{4,-1,9},
		{-3,4,1}
	};

	int min = nArray[0][0];

	cout << "We have static array and we'll find smallest value." << endl << endl;
	for (int i = 0; i < 3; i++) {

		cout << "\t";
		for (int j = 0; j < 3; j++) {

			cout << nArray[i][j] << "\t";
			if (nArray[i][j] < min) {
				min = nArray[i][j];
			}
		}
		cout << endl << endl;
	}

	cout << endl << "Smallest value = " << min << endl;
	system("PAUSE");
	return 0;
}