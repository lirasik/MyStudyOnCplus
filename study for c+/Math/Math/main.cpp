#include <iostream>
using namespace std;

int main()
{
    const char TAB = '\n';
    
    // унарная операция
    int a = 5;
    cout << "a = " << a << TAB;
    a = -a;
    cout << "a (a * (-1) = " << a << TAB;
    
    // бинарные операции
    int w = 5, q = 2, x; // даём определение "q" и "w"
    
    x = w + q;
    cout << "x = " << x << TAB; // результат "x"

    int c;
    
    c = (2 + 2) * 2;
    
    cout << "c = " << c << TAB; // результат "c"
    
    return 0;
}
