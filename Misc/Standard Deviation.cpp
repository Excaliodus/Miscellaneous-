#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	float num[10], total = 0, mean = 0, a = 0, standard = 0;
	for (int i = 0; i < 10; i += 1)
	{
		cout << "Enter a number." << endl;
		cin >> num[i];
		total = total + num[i];
	}
	mean = total / 10;
	for (int i = 0; i < 10; i += 1)
	{
		a = a + (num[i] * num[i]);
	}
	standard = sqrt((a / 15) - (mean * mean));
	cout << "The mean of the entered numbers is " << mean << endl;
	cout << "The standard deviation is " << standard << endl;
	system("pause");
	return 0;
}