#include <iostream>
using namespace std;

int main()

{
    // int sum= 0;
    // for (int i = 1; i <= 10; i++)
    // { sum += i; // is the same as sum = sum + i
    // }
    // cout << " sum of 1 to 10 =" << sum << endl;
    // return 0;

    int sum = 0, val;
    cout << "enter a number here that has to be calculated" << endl;
    cin >> val;
     for(int i = 1; i <= val; i++){
 
    sum = sum + i;
     }
     cout << " the sum of 1 to  "<< val << " = " << sum  << endl;
return 0;
}