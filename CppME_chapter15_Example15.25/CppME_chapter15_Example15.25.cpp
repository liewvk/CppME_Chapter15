#include <iostream>
using namespace std;

double divideNumbers(double a, double b)
{
    if (b == 0)
    {
        throw "Cannot divide by zero.";
    }

    return a / b;
}

int main()
{
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    try
    {
        double result = divideNumbers(num1, num2);
        cout << "Result = " << result << endl;
    }
    catch (const char* message)
    {
        cout << "Error: " << message << endl;
    }

    return 0;
}
