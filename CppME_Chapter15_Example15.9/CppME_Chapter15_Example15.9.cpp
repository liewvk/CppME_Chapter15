#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (b == 0)
    {
        cout << "Error: division by zero is not allowed." << endl;
    }
    else
    {
        cout << "Result = " << a / b << endl;
    }

    return 0;
}
