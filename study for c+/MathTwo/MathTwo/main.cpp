//
//  main.cpp
//  MathTwo
//
//  Created by Antons Averins on 28/11/2022.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b, c;
    
    int sum, mult;
    double avg;
    
    cout << "Введите 3 числа:  " << endl;                               // Ввод
    cin >> a >> b >> c;
    
    sum = a + b + c;
    cout << "Сумма 3-ёх чисел = " << sum << endl;                       //  Сумма
    
    mult = a * b * c;
    cout << "Произведение 3-ёх чисел = " << mult << endl;               //  Произведение
    
    avg = (double)( a + b + c ) / 3;                                    //  Среднее арифметическое
    cout << "Среднее арифметическое 3-ёх чисел = " << avg << endl;
    
    /*
     
     Для оптимизации можно писать так
     (если используется один раз)
     
     int a, b, c;
     cin >> a >> b >> c;
     
     cout << "Введите 3 числа:  " << endl;
     
     cout << "Сумма 3-ёх чисел = " << a + b + c << endl;
     cout << "Произведение 3-ёх чисел = " << a * b * c << endl;
     cout << "Среднее арифметическое 3-ёх чисел = " << (double)( a + b + c ) / 3 << endl;
     */

}
