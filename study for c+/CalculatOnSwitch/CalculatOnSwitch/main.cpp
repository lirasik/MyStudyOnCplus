#include <iostream>
using namespace std;

// оператор множественного выбора switch

int main()
{
    setlocale(LC_ALL, "ru");
    
    int FirsNum, SecNum, Selection;
    cout << "Введите два числа : " << endl;
    cin >> FirsNum >> SecNum;
    
    cout << "Выберите мат. операцию" << endl << //menu
        "1. Сложение" << endl <<
        "2. Вычитание" << endl <<
        "3. Умножение" << endl <<
        "4. Деление" << endl;
    
    cin >> Selection;
    
    switch (Selection) { //operations
        case 1:
            cout << "Результат сложения: " << FirsNum + SecNum << endl;
            break;
        case 2:
            cout << "Результат вычитания: " << FirsNum - SecNum << endl;
            break;
        case 3:
            cout << "Результат умножения: " << FirsNum * SecNum << endl;
            break;
        case 4:
            cout << "Результат деления: " << (float)FirsNum / SecNum << endl;
            break;
            
        default:
            cout << "Ошибка! Пункт меню отсутсвует" << endl;
            break;
    }
    
}
