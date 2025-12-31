#include <iostream>

using std::cout, std::cin, std::string, std::endl;


void giveValues(int arr[100], int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i + 1 << "] : ";
		cin >> arr[i];
	}

}


void BubbleSort(int arr[100], int n)
{
	int sNumber;
	for (int j = 0; j < n -1; j++) {
		for (int i = 0; i < n - j - 1; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				sNumber = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = sNumber;

			}
		}
	}
}

void printArray(int arr[100], int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)

		cout << arr[i] << " ";
	
	cout << endl;

}




int main()
{
	int n[100], size;
	char c;


	cout << "Enter the amount of numbers : ";
	cin >> size;

	giveValues(n, size);


	printArray(n, size);

	
	cout <<endl << "Do you want to bubble sort? (y) : ";
	cin >> c;

	if (c == 'y' || c == 'Y')
	{
		BubbleSort(n, size);

		printArray(n, size);

	}

	else

		cout << "Program finished !" << endl;

	return 0;
}
