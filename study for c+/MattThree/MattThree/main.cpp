#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    cout << a << endl;
    
    /*
     a = a + 4;
    cout << a << endl;
    */
    
    a++;                // инкремент
    cout << a << endl;  // cout << a++ << endl; (тогда приоритет ниже)
    
    --a;                // декремент
    cout << a << endl;

    /*
    если нужно добавить не 1 к значению а больше то можно писать так
     a += 20;
    */
}
