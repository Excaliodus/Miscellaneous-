#include<iostream>
#include <istream>
#include<string>
#include <ostream>
#include"allfunctions.h"

using namespace std;

int main()
{
	int input;
	cout << "welcome user   please select an option" << endl;

	cout << endl << "                  Calculator                  " << endl;
	cout << endl << "         SUM                    GIVE INPUT A(65)   " << endl;
	cout << "         SUBTRATCTION           GIVE INPUT B(66)   " << endl;
	cout << "         MULTIPLICATION         GIVE INPUT C(67)   " << endl;
	cout << "         DIVISION               GIVE INPUT D(68)   " << endl;

	cout << endl << "                  String Manipulation" << endl;
	cout << endl << "         string length         GIVE INPUT E(69)    " << endl;
	cout << "         string concatination  GIVE INPUT F(70)    " << endl;
	cout << "         string copy           GIVE INPUT G(71)    " << endl;
	cout << "         string edit           GIVE INPUT H(72)    " << endl;

	cout << endl << "                  SORTING                  " << endl;
	cout << endl << "         bubble sort           GIVE INPUT I(73)   " << endl;
	cout << "         selection sort        GIVE INPUT J(74)   " << endl;
	cout << "         insertion sort        GIVE INPUT K(75)   " << endl;

	cout << endl << "                  SEARCHING " << endl;
	cout << endl << "         linear search         GIVE INPUT L(76)      " << endl;
	cout << "         binary search         GIVE INPUT M(77)      " << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl << "         To EXIT            GIVE INPUT T(84)   " << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "ENTER WHAT YOU WANT" << endl;
	cin >> input;
	if (input == 'T')
	{
		return 0;
	}
	while (input != 'T')
	{
		if (input == 'A')
		{
			int a = 0;
			int b = 0;
			cout << "enter two numbers" << endl;
			cin >> a;
			cout << endl;
			cin >> b;
			int c = add(a, b);
			cout << "sum is " << endl << c;
		}
		else if (input == 'B')
		{
			int a = 0;
			int b = 0;
			int c = 0;
			cout << "enter two number " << endl;
			cin >> a >> b;
			c = sub(a, b);
			cout << "the difference is " << endl << c;
		}
		else if (input == 'D')
		{
			float a = 0;
			float b = 0;
			cout << "enter two number " << endl;
			cin >> a >> b;
			float c = diviser(a, b);
			cout << "the ans is " << endl << c;
		}
		else if (input == 'C')
		{
			float a = 0;
			float b = 0;
			float c = 0;
			cout << "enter two number " << endl;
			cin >> a >> b;
			c = multiply(a, b);
			cout << "the ans is " << endl << c;
		}
		else if (input == 'L')
		{
			int n;
			cin >> n;


			int arr[100] = { 0 };
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}

			int key;
			cout << "enter key" << endl;
			cin >> key;
			cout << linsearch(arr, n, key);
			return 0;
		}
		else if (input == 'M')
		{
			int n;
			cout << "enter size";
			cin >> n;
			int arr[100] = { 0 };
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}
			int key;
			cout << "enter key" << endl;
			cin >> key;
			cout << binsearch(arr, n, key);
			return 0;
		}
		else if (input == 'I')
		{
			int n;
			cout << "enter size:" << endl;
			cin >> n;
			int arr[100];
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}
			bubblesort(arr, n);
		}
		else if (input == 'J')
		{
			int n;
			cout << "enter size" << endl;
			cin >> n;
			int arr[100] = { 0 };
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}
			selectionsort(arr, n);

		}
		else if (input == 'E')
		{
			char a[100];
			cout << "Enter string/line : " << endl;
			cin.ignore();
			cin.getline(a, 100);
			len(a);
		}
		else if (input == 'F')

		{
			string a, b;
			cout << "Enter first string :   ";
			cin.ignore();
			getline(cin, a);
			cout << "Enter second string :    ";
			getline(cin, b);
			Concat(a, b);
		}
		if (input == 'G')
		{
			char a[100], b[100];
			cout << "Enter string :   ";
			cin.ignore();
			cin.getline(a, 100);
			copy(a, b);
		}
		else if (input == 'H')
		{
			char a[100], n = '\0';
			cout << "Enter string :   ";
			cin.ignore();
			cin.getline(a, 100);
			cout << endl;
			edit(a, n);
		}
		else if (input == 'K')
		{
			int n;
			cout << "enter size" << endl;
			cin >> n;
			int arr[100] = { 0 };
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}
			n = sizeof(arr) / sizeof(arr[0]);

			insertionSort(arr, n);

			return 0;
		}
		else if (input > 'M')
		{
			cout << "invalid input";
		}
		else if (input >= 'a' && input <= 'z')
		{
			cout << "invalid input";
		}
		cout << endl;
		cin >> input;
	}
	system("pause");
}