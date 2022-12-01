#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    
    int Num=19;
    
    do
    {
        cout << "Переменная Num = " << Num << endl;
        Num++;
        
    } while (Num<20);
    
    /*
    while (Num<20)
    {
        cout << "Переменная Num = " << Num << endl;
     Num++;
    }
     */
}
