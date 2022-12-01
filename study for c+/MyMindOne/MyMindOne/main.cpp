#include <iostream>
using namespace std;
int main()
{

    setlocale(LC_ALL,"ru"); // русский язык
    
    double NumOne, NumTwo;
    cout << "Ведите числа для сравнения: " << endl; // ввод значений
    cin >> NumOne >> NumTwo; // значения
    
    
    if ( NumOne > NumTwo )
    {
        cout << "больше" << endl; // больше
    }
    else if ( NumOne == NumTwo )
    {
        cout << "равно" << endl; // равно
    }
    else
    {
        cout << "меньше" << endl; // меньше
    }
    
}
