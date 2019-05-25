#include <iostream>

using namespace std;

void bubbleSort();
void selectionSort();

int main()
{
	char choice;
	
	cout << "This program takes in 5 integers and sorts them. \n"
	     << "Choose below for desired sorting method\n"
	     << "'B' for Bubble Sort\n"
	     << "'S' for Selection Sort\n"
	     << "Enter your choice: ";
	cin >> choice;
	     
	switch (choice)
	{
		case 'b':
		case 'B':
			bubbleSort();
			break;
		case 's':
		case 'S':
			selectionSort();
			break;
	}
}

void bubbleSort()
{
	int arr[5], i, j, temp;
	int n = 5;
	
	for (i = 0; i < n; i++)
	{
		cout << "Input 5 integers: ";
		cin >> arr[i];
	}
	
	cout << endl;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i -1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	cout << "Sorted Numbers: ";
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}
}

void selectionSort()
{
	int arr[5], i, j, temp;
	int n = 5;
	
	for (i = 0; i < n; i++)
	{
		cout << "Input 5 integers: ";
		cin >> arr[i];
	}
	
	cout << endl;
	
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout << "Sorted Numbers: ";
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}
}
