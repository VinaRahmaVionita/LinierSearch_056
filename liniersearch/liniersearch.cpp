#include <iostream>
using namespace std;

int arr[20];  //array to be searched
int n;        //number of elements in the array
int i;        //index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	//accept array elements
	cout << "\n-------------------\n";
	cout << "Enter array elements \n";
	cout << "---------------------\n";
	for (i = 0; 1 < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int comparisons; //number of comparisons

	do
	{
		//accept the number to be searched
		cout << "\nEnter the element you want to search: ";  //langkah 1
		int item;
		cin >> item;

		comparisons = 0;
		for (i = 0; i < n; i++)  //langkah 2,3 dan 4 
		{
			comparisons++;
			if (arr[i] == item) //langkah 5A found
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break;
			}
		}
		if (i == n)   //langkah 5B not found
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber od comparisons: " << comparisons << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}

int main()
{
	input();
	LinearSearch();
}