#include <iostream>
using namespace std;

int main()
{
    int mark;

    cout << "Enter mark: ";
    cin >> mark;

    try
    {
        if (mark < 0 || mark > 100)
        {
            throw "Mark must be between 0 and 100.";
        }

        cout << "Valid mark entered: " << mark << endl;
    }
    catch (const char* message)
    {
        cout << "Error: " << message << endl;
    }

    return 0;
}
