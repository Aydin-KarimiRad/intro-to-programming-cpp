#include <iostream>

using namespace std;

void main()
{
	int a = 1, b = 1, n, c, last_num;
	cout << "Enter the N : ";
	cin >> n;
	
	while (a < n) {
		last_num = a;
		c = a + b;
		//last_num = c;
		a = b;
		b = c;
	}


	cout << endl << "The number from Fibonacci Sequence smaller than N : " << last_num << endl;
}
