#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    int sum = 0;
    
    int rangeBegin, rangeEnd;
    
    cout << "Дайте мне пожалуйста начало и конец диапозона: " << endl;
    cin >> rangeBegin >> rangeEnd;
    
    /*
    cout << "Дайте мне пожалуйста начало диапозона: " << endl;
    cin >> rangeBegin;
    
    cout << "Дайте мне пожалуйста конец диапозона: " << endl;
    cin >> rangeEnd;
    */
    
    do
    {
        if(rangeBegin % 2 != 0)
        {
            sum += rangeBegin;
        }
        
        rangeBegin++;
    } while (rangeBegin < rangeEnd);
    
    cout << "Сумма всех целых нечётных чисел в указанном диапазоне = " << sum << endl;
}
