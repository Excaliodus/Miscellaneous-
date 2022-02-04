#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int problem;
	cout << "Enter the number of the problem you want to run." << endl;
	cin >> problem;
	if (problem == 2)
	{
		system("21L-7749-Problem2.exe");
	}
	else if (problem == 3)
	{
		system("21L-7749-Problem3.exe");
	}
	else if (problem == 4)
	{
		system("21L-7749-Problem4.exe");
	}
	else if (problem == 5)
	{
		system("21L-7749-Problem5.exe");
	}
	else if (problem == 6)
	{
		system("21L-7749-Problem6.exe");
	}
	else if (problem == 7)
	{
		system("21L-7749-Problem7.exe");
	}
	else if (problem == 8)
	{
		system("21L-7749-Problem8.exe");
	}
	else if (problem == 9)
	{
		system("21L-7749-Problem9.exe");
	}
	else if (problem == 10)
	{
		system("21L-7749-Problem10.exe");
	}
	else
	{
		cout << "Invalid input. Input should be between 1 and 10." << endl;
	}
	system("pause");
	return 0;
}