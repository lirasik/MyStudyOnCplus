#include <iostream>
using namespace std;

int main()
{
    cout << "Start" << endl;
    
    for(int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            continue;   // "skip"
        }
        
        cout << "Переменная i = " << i << endl;
    }
    
    cout << "End" << endl;
}
