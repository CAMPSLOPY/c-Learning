#include <iostream>
using namespace std;

int main()
{

    // std::cout << "Print two numbers :" << std::endl;
    // int k1 = 0, n1 = 0;
    // std::cin >> k1 >> n1;
    // std::cout << " The sum of " << k1 << " and " << n1 << " is " << k1 + n1 << std::endl;

    int count = 1, sum = 0, val;
    cout<<"Enter the number here " << endl;
    cin >> val;
    while (count <= val)
    {
       sum = sum + count;
       count++;   
    }
    cout<< " sum of 1 to 10 =" << val << " = " << sum << endl;
    return 0;
}

// while (condition) first then open the curly brackets 
// { initializatio and counter update}

