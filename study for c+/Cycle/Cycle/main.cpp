#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");
    
    int a = 0;
    
    while (a<7) // цыкл
    {
        cout << "Сообщение пришло: " << a << " раз" << endl;
        a++;
    }
    
    if (a)
    {
        cout << "Мы напичатали это сообщение "<< a << " раз" << endl;
    }
    
    // cout << "Text on your screen" << endl;
    
}
