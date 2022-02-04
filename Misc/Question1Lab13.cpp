#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num = 0, mod = 0, div = 0, base1 = 0, base2 = 0, i = 0;
    int arr[];
    cout << "Enter a number to check for macro palindrome." << endl;
    cin >> num;
    cout << "Enter Base 1: " << endl;
    cin >> base1;
    cout << "Enter Base 2: " << endl;
    cin >> base2;
    div = num;
    while (div > 0)
    {
        arr[i] = div % base1;
        div = div / base1;
        i++;
    }

    system("pause");
    exit (0);
}
