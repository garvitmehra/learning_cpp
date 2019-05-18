#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char op;
    cout << "enter first no. : ";
    cin >> num1;
    cout << "enter operator. : ";
    cin >> op;
    cout << "enter second no. : ";
    cin >> num2;

    if (op == '+')
    {
        cout << num1 + num2;
    }
    else if (op == '-')
    {
        cout << num1 - num2;
    }
    else if (op == '*')
    {
        cout << num1 * num2;
    }
    else
    {
        cout << num1 / num2;
    }
    return 0;
}