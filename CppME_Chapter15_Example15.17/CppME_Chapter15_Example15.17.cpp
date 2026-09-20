#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw "Division by zero is not allowed.";
        }

        cout << "Result = " << a / b << endl;
    }
    catch (const char* errorMessage)
    {
        cout << "Error: " << errorMessage << endl;
    }

    return 0;
}
