#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    int symbolCount;
    char symbol;
    int lineType;
    int index = 0;
    
    cout << "Введите кол-во символов в линии: " << endl;
    cin >> symbolCount;
    
    cout << "Введите символ: " << endl;
    cin >> symbol;
    
    cout << "Выберите тип линии: " << endl
        << "1. Вертикальная линия." << endl
        << "2. Горизонтальная линия." << endl
        << "3. Отмена." << endl;
    cin >> lineType;
    
    switch (lineType) {
        case 1:
        {
            while (index<symbolCount) {
                cout << symbol << endl; // Вертикаль
                index++;
            }
        }
            break;
        case 2:
        {
            while (index<symbolCount)
            {
                cout << symbol; // Горизонталь
                index++;
            }
        }
            break;
        case 3:
        {
            return 0;
        }
            break;
            
        default:
        {
            cout << "Неверно выбран тип линий" << endl;
        }
            break;
    }
    
    /*
    if (lineType != 1 && lineType != 2 && lineType != 3)
    {
        cout << "Неверно выбран тип линий" << endl;
        return 0;
    }
    
    while (index<symbolCount)
    {
        if (lineType==1)
        {
            cout << symbol << endl; // Вертикаль
        }
        if (lineType==2)    // Горизонт
        {
            cout << symbol;
        }
         if (lineType==3)    // Отмена
         {
             return 0;
         }
        
        index++;
    }
    */
    cout << endl;
}
