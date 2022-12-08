#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    //int i = 1, j = 10;
    
    cout << "Начало цыкла" << endl;
    
    cout << "Первый цыкл" << endl;
    for (int i = 0, j = 10; i <= 10; i++, j--)
    {
        cout << "Переменная i = " << i << endl;
        cout << "Переменная j = " << j << endl;
    }
    
    cout << "Второй цыкл" << endl;
    for (int i = 0, j = 10; i <= 20 && j != -7; i++, j--)
    {
        cout << "Переменная i = " << i << endl;
        cout << "Переменная j = " << j << endl;
    }
    
    cout << "Конец цыкла" << endl;
    
    /*
    for ( ; ; )
    {
        cout << "Бесконечность не предел)))" << endl;
    }
    */
}
