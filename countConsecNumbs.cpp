#include <iostream>
using namespace std;

int main()
{
    // we need to declare a variable that will be processed in the console console
    int currentValue = 0, val = 0;
    // read first number and ensure that we have data to process
    if (cin >> currentValue)
                {
        int count = 1; // store the count for the current value we are processing
        while (cin >> val)
             {
            // read the remaining numbers
            if (val == currentValue)
            {
                ++count;
            }
            else
            {
                cout << currentValue << " occurs" << count << " Times" << endl;
                currentValue = val;
                count = 1;
            }
        }
        cout << currentValue << " occurs" << count << " Times" << endl;
            }

    return 0;
}