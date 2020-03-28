#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	cout << "Input integer i = ";
	int n;
	cin >> n;

	double dblSum = 1;

	cout << "( " << 1;
	for (int i = 1, k = 2; i <= n; i++, k = k << 1) // k = 2^i
	{
		cout << " + (1 / 2)^" << i;
		dblSum += (double) 1 / k;
	}
	dblSum = pow(dblSum, n);

	cout << " )^" << n << endl << "Answer = " << dblSum << endl;
	system("PAUSE");
	return 0;
}