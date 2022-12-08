#include <iostream>
using namespace std;

// делаем exe файл
// оператор множественного выбора switch

int main(void)
{
    setlocale(LC_ALL, "ru");
    
    int FirsNum, SecNum, Selection;
    cout << "Введите два числа : " << endl;
    cin >> FirsNum >> SecNum;
    
    cout << "Прошу выберите мат. операцию" << endl << //menu
        "1. Сложение" << endl <<
        "2. Вычитание" << endl <<
        "3. Умножение" << endl <<
        "4. Деление" << endl;
    
    cin >> Selection;
    
    switch (Selection) { // operations
        case 1:
            cout << "Ваш результат сложения: " << FirsNum + SecNum << endl;
            break;
        case 2:
            cout << "Ваш результат вычитания: " << FirsNum - SecNum << endl;
            break;
        case 3:
            cout << "Ваш результат умножения: " << FirsNum * SecNum << endl;
            break;
        case 4:
            cout << "Ваш результат деления: " << (float)FirsNum / SecNum << endl;
            break;
            
        default:
            cout << "Ошибка! Пункт меню отсутсвует" << endl;
            break;
    }
}
