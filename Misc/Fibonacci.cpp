#include<iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 0, c = 0;
    cout << "Enter the number of elements you want to print in the Fibonacci Series.";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i <= 1)
        {
            cout << i << ", ";
        }
        if (i == 0 || i % 2 == 1)
        {
            a = i;
        }
        else if (i % 2 == 0)
        {
            b = i;
        }
        c = a + b;
        cout << c << ", ";
    }
    system("pause");
    return 0;
}