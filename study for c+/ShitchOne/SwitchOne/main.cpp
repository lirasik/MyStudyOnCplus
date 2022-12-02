#include <iostream>
using namespace std;

int main()
{
    
    setlocale(LC_ALL, "ru");
    
    int RandomNum;
    cout << "Введите цифру чтобы проверить меня: " << endl;
    cin >> RandomNum;
    
    switch (RandomNum)
    {
        case 1:
        {
            cout << "Вы ввели 1" << endl;
            
        }
        break;
            
        case 2:
        {
            cout << "Вы ввели 2" << endl;
            
        }
        break;
            
        default:
        {
            cout << "Я не знаю такую цифру" << endl;
            
        }
        break;
             
    }
}
