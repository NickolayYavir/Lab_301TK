#include <iostream>
#include <math.h>

using namespace std;

int main() {
	

	int n;
	double dblSum = 1;

	cout << "This program for solving expression like " << endl << "\t b = (1 + 1 / 2 + 1 / 2 ^ 2 + 1 / 2 ^ 3... + 1 / 2 ^ n) ^ n" << endl << endl;
	cout << "Please input integer n = ";
	cin >> n;
	cout << endl << "Your expression " << endl << "( " << 1;

	for (int i = 1, k = 2; i <= n; i++, k = k << 1) {	// k = 2^i
		cout << " + (1 / 2)^" << i;
		dblSum += (double) 1 / k;
	}

	dblSum = pow(dblSum, n);

	cout << " )^" << n << endl << endl << "Answer = " << dblSum << endl;
	system("PAUSE");
	return 0;
}