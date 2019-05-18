#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, num4, num5;
    cout << "enter maths marks :  ";
    cin >> num1;
    if (num1 > 80)
    {
        cout << "invalid marks" << endl;
        return 0;
    }
    cout << "enter hindi marks :  ";
    cin >> num2;
    if (num2 > 80)
    {
        cout << "invalid marks" << endl;
        return 0;
    }
    cout << "enter english marks :  ";
    cin >> num3;
    if (num3 > 80)
    {
        cout << "invalid marks" << endl;
        return 0;
    }
    cout << "enter sanskrit marks :  ";
    cin >> num4;
    if (num4 > 80)
    {
        cout << "invalid marks" << endl;
        return 0;
    }
    cout << "enter science marks :  ";
    cin >> num5;
    if (num5 > 80)
    {
        cout << "invalid marks" << endl;
        }
    int result = num1 + num2 + num3 + num4 + num5;
    double score = result / 100 * 400;
    if (score <= 399 && score >= 300)
    {
        cout << "you got an a grade";
    }
    if (score <= 299 && score >= 200)
    {
        cout << "you got a b grade";
    }
    if (score <= 199 && score >= 100)
    {
        cout << "you got a c grade";
    }
    if (score <= 99)
    {
        cout << "you got an f grade";
    }

    return 0;
}