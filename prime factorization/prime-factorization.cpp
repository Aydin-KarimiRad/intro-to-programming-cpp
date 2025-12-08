#include <iostream>

using namespace std;

void main()
{
	int i = 2, n, count = 0, j, s[100], number;
	cout << "Enter a number : ";
	cin >> n;
	number = n;
	while (n > 1)
	{
		if (n % i == 0)
		{
			n = n / i;
			s[count] = i;
			count++;
		}
		else
			i++;
		
			
	}

	for (j = 0 ; j < count-1; j++)
	{
		cout << s[j] << " * ";
	}
	cout << s[count - 1] << " = " << number << endl;
	
}
