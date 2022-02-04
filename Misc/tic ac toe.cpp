#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i = 1, A1 = 0, A2 = 0, A3 = 0, B1 = 0, B2 = 0, B3 = 0, C1 = 0, C2 = 0, C3 = 0;
	string table = "    A   B   C \n\n1     |   |   \n   -----------\n2     |   |   \n   -----------\n3     |   |   ";
	string opt = "\0";
	cout << table << endl;
	for (;i <= 9;)
	{
		if (i % 2 == 1)
		{
			for (int j = 0; j <= 0;)
			{
				cout << "Player 1: Enter the coordinates of where you want to enter (X)." << endl;
				cin >> opt;
				if ((opt == "A1" || opt == "a1" || opt == "1A" || opt == "1a") && A1 == 0)
				{
					table[20] = 'X';
					cout << table << endl;
					A1 = A1 + 1;
					j++;
					i++;
				}
				else if ((opt == "A2" || opt == "a2" || opt == "2A" || opt == "2a") && A2 == 0)
				{
					table[50] = 'X';
					cout << table << endl;
					A2 = A2 + 1;
					j++;
					i++;
				}
				else if ((opt == "A3" || opt == "a3" || opt == "3A" || opt == "3a") && A3 == 0)
				{
					table[80] = 'X';
					cout << table << endl;
					A3 = A3 + 1;
					j++;
					i++;
				}
				else if ((opt == "B1" || opt == "b1" || opt == "1B" || opt == "1b") && B1 == 0)
				{
					table[24] = 'X';
					cout << table << endl;
					B1 = B1 + 1;
					j++;
					i++;
				}
				else if ((opt == "B2" || opt == "b2" || opt == "2B" || opt == "2b") && B2 == 0)
				{
					table[54] = 'X';
					cout << table << endl;
					B2 = B2 + 1;
					j++;
					i++;
				}
				else if ((opt == "B3" || opt == "b3" || opt == "3B" || opt == "3b") && B3 == 0)
				{
					table[84] = 'X';
					cout << table << endl;
					B3 = B3 + 1;
					j++;
					i++;
				}
				else if ((opt == "C1" || opt == "c1" || opt == "1C" || opt == "1c") && C1 == 0)
				{
					table[28] = 'X';
					cout << table << endl;
					C1 = C1 + 1;
					j++;
					i++;
				}
				else if ((opt == "C2" || opt == "c2" || opt == "2C" || opt == "2c") && C2 == 0)
				{
					table[58] = 'X';
					cout << table << endl;
					C2 = C2 + 1;
					j++;
					i++;
				}
				else if ((opt == "C3" || opt == "c3" || opt == "3C" || opt == "3c") && C3 == 0)
				{
					table[88] = 'X';
					cout << table << endl;
					C3 = C3 + 1;
					j++;
					i++;
				}
				else
				{
					cout << "Incorrect input. Enter the correct input" << endl;
				}
			}
		}
		else if (i % 2 == 0)
		{
			for (int j = 0; j <= 0;)
			{
				cout << "Player 2: Enter the coordinates of where you want to enter (O)." << endl;
				cin >> opt;
				if ((opt == "A1" || opt == "a1" || opt == "1A" || opt == "1a") && A1 == 0)
				{
					table[20] = 'O';
					cout << table << endl;
					A1 = A1 + 1;
					j++;
					i++;
				}
				else if ((opt == "A2" || opt == "a2" || opt == "2A" || opt == "2a") && A2 == 0)
				{
					table[50] = 'O';
					cout << table << endl;
					A2 = A2 + 1;
					j++;
					i++;
				}
				else if ((opt == "A3" || opt == "a3" || opt == "3A" || opt == "3a") && A3 == 0)
				{
					table[80] = 'O';
					cout << table << endl;
					A3 = A3 + 1;
					j++;
					i++;
				}
				else if ((opt == "B1" || opt == "b1" || opt == "1B" || opt == "1b") && B1 == 0)
				{
					table[24] = 'O';
					cout << table << endl;
					B1 = B1 + 1;
					j++;
					i++;
				}
				else if ((opt == "B2" || opt == "b2" || opt == "2B" || opt == "2b") && B2 == 0)
				{
					table[54] = 'O';
					cout << table << endl;
					B2 = B2 + 1;
					j++;
					i++;
				}
				else if ((opt == "B3" || opt == "b3" || opt == "3B" || opt == "3b") && B3 == 0)
				{
					table[84] = 'O';
					cout << table << endl;
					B3 = B3 + 1;
					j++;
					i++;
				}
				else if ((opt == "C1" || opt == "c1" || opt == "1C" || opt == "1c") && C1 == 0)
				{
					table[28] = 'O';
					cout << table << endl;
					C1 = C1 + 1;
					j++;
					i++;
				}
				else if ((opt == "C2" || opt == "c2" || opt == "2C" || opt == "2c") && C2 == 0)
				{
					table[58] = 'O';
					cout << table << endl;
					C2 = C2 + 1;
					j++;
					i++;
				}
				else if ((opt == "C3" || opt == "c3" || opt == "3C" || opt == "3c") && C3 == 0)
				{
					table[88] = 'O';
					cout << table << endl;
					C3 = C3 + 1;
					j++;
					i++;
				}
				else
				{
					cout << "Incorrect input. Enter the correct input" << endl;
				}
				if ((table[20] == 'X' && table[24] == 'X' && table[28] == 'X') || (table[50] == 'X' && table[54] == 'X' && table[58] == 'X') || (table[80] == 'X' && table[84] == 'X' && table[88] == 'X') || (table[20] == 'X' && table[50] == 'X' && table[80] == 'X') || (table[24] == 'X' && table[54] == 'X' && table[84] == 'X') || (table[28] == 'X' && table[58] == 'X' && table[88] == 'X') || (table[20] == 'X' && table[54] == 'X' && table[88] == 'X') || (table[28] == 'X' && table[54] == 'X' && table[80] == 'X'))
				{
					cout << "Player 1 has won the game." << endl;
					exit(1);
				}
				else if ((table[20] == 'O' && table[24] == 'O' && table[28] == 'O') || (table[50] == 'O' && table[54] == 'O' && table[58] == 'O') || (table[80] == 'O' && table[84] == 'O' && table[88] == 'O') || (table[20] == 'O' && table[50] == 'O' && table[80] == 'O') || (table[24] == 'O' && table[54] == 'O' && table[84] == 'O') || (table[28] == 'O' && table[58] == 'O' && table[88] == 'O') || (table[20] == 'O' && table[54] == 'O' && table[88] == 'O') || (table[28] == 'O' && table[54] == 'O' && table[80] == 'O'))
				{
					cout << "Player 2 has won the game." << endl;
					exit(1);
				}
			}
		}
	}
	system("pause");
	return 0;
}