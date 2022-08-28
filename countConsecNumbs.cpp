#include <iostream>
using namespace std;

int main()
{
// we need to declare a variable that will be processed in the console console
int currentValue = 0, val=0;

if(cin >> currentValue){
    int count = 1;
    while(cin >> val)
    {
        if(val == currentValue){
            ++count;
        }else{
            cout << currentValue << "occurs" << count << "Times"<< endl;
        }
    }
}

    return 0;
}