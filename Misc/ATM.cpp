#include<iostream>
#include<string>
using namespace std;
void InputCardDetails(string type, int IBalance, string cardNo)
{
	int correct = 0;
	while (correct<cardNo.size()+1)
	{
		correct = 1;
		cout << "Enter the Card Number." << endl;
		cin >> cardNo;
		for (int i = 0; i < (cardNo.size()); i++)
		{
			if (cardNo[i] > '0' || cardNo[i] < '9')
			{
				correct++;
			}
			else
			{
				cout << "Incorrect Card Number. Card Number cannot contain characters. Please reenter correct card number." << endl;
				break;
			}
			cout << correct << end;
		}
	}
	cout << "Enter the Initial Balance in the account." << endl;
	cin >> IBalance;
	correct = 0;
	while (correct == 0)
	{
		cout << "Enter the type of credit card." << endl;
		cin >> type;
		if (type == "Gold" || type == "GOLD" || type == "gold" || type == "Silver" || type == "SILVER" || type == "silver")
		{
			correct = 1;
		}
		else
		{
			cout << "Incorrect entry. Please enter the correct type." << endl;
		}
	}
}
void WithdrawMoney()
{

}
void BalanceInquiry()
{

}
int main()
{
	string type, cardNo;
	int	withrawAmount, IBalance = 0;
	InputCardDetails(type, IBalance, cardNo);
	system("pause");
	return 0;
}