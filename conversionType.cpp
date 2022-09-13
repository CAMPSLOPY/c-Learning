#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int i = 3.14;
    double pi = i;
    cout << fixed << setprecision(1) << pi << endl;
    return 0;
}