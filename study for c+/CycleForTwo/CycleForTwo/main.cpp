#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    cout << "Start" << endl;
    
    for(int i = 0; ; i++)
    {
        cout << "Переменная i = " << i << endl;
        
        if(i==5)
        {
            break;
        }
    }
    
    cout << "End" << endl;
}
