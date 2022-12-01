#include <iostream>
using namespace std;

int main()
{
    cout << "1)Hellow World" << endl;
    
    setlocale(LC_ALL,"Rus"); // ставит рус. яз. (если написать после рус. текста, то он не будет работать)
    cout << "2)Привет Мир" << endl;
    
    /* escape-последовательности можно совмещять*/
    cout << "\n3)Hellow World\n\n"; // \n - новая строка (как endl)
    cout << "4)Hellow World\t\n\n"; // \t - табуляция (можно как в начала текста ставить так и в конце)
    
    /*
     \\ вывести обратную черту \
     \" вывести двойные кавычки "
     \' вывести одинарную кавычку '
     */
    cout << "\'Hellow\'\n\n";
    
    // испольование вывода escape-последователностей
    cout << "\t- Где лебеди? - А лебеди ушли.\n\t- А вороны? - А вороны - остались.\n\t- Куда ушли? - Куда и журавли.\n\t- Зачем ушли? - Чтоб крылья не достались.\n";
    
    // типы данных имя переменной

    int a;
    a = 5;
    // int a = 5; <-- можно и так
        
    cout <<"\n\n" << a << endl;
    
    a = 10;
    cout << a << endl;
    
    int age, x, y;
    age = 12;
    x = 3;
    y = 5;
    
    cout << age << " " << x << " " << y << " " << endl;
    
    double b = 3.14;
    
    cout << "\n" << b << endl;
    
    
    // constant
    cout << "\n\n";
    
    const int COUNT_DAYS_IN_WEEK = 7;
    
    cout << COUNT_DAYS_IN_WEEK << "\n\n";
    
    const char NEW_LINE = '\n'; // для чар escape-последовательности являются одним символом
    
    cout << COUNT_DAYS_IN_WEEK << NEW_LINE;
    
    const char TAB = '\t';
    
    cout << TAB << COUNT_DAYS_IN_WEEK;
    
    
    //data count
    cout << "\n\n";
    
    int Var, Var2; // место хранение данных
    
    /*
    cout << "Ведите первое число: ";
    cin >> Var; // cin - считывает данные
    
    cout << "Ведите второе число: ";
    cin >> Var2;
    */
    
    cout << "Ведите 2 числа: ";
    cin >> Var >> Var2;
    
    cout << "Число 1= " << Var << endl << "Число 2= " << Var2 <<endl;

    
    
    return 0;
}
