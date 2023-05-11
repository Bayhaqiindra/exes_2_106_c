#include <iostream>
using namespace std;

int sga[19];
int n;
int i; 

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 19))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 19 elements. \n\n";
	}
	cout << "\n-----------------------\n";
	cout << " Enter array elements \n";
	cout << "\n-----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> sga[i];
	}
}

void LinerSearch()
{
	char ch;
	int ctr;

	do
	{
		cout << "\nEnter the element you want to search: ";	
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (sga[i] == item)
			{
				cout << "/n" << item << " found at postion " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue Search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}

int main()
{
	input();
	LinerSearch();
	return 0;
}
