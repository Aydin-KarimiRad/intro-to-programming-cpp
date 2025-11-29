#include <iostream>

using namespace std;

void main()
{
	int n, i, j,count;
	cout << "Enter the N : ";
	cin >> n;
	for (i = 1; i < n; i++)
	{
		count = 0;
		for (j = 1; j<i; j++) {
			if (i % j == 0) {

				count++;
			}
		}
		if (count == 1) {
			cout << i << " is a prime number "<<endl<<endl;
		}

	}
}
