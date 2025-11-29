

#include <iostream>

using namespace std;

void main() {
	int i, n, s;
	s = 0;

	cout << "Enter the number : ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		if (n%i == 0) {
			s++;
		}
	}

	if (s > 2)
		cout << "This is not a prime number" << endl;
	else
		cout << "This is a prime number"<<endl;
}


