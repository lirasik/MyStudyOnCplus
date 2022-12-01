#include <iostream>
using namespace std;

int main()
{
    /*
    cout << ( 4 > 5 ) << endl; // результат будет 0 так как 0 это fals
    cout << ( 4 < 5 ) << endl; // результат будет 1 так как 1 это true
    cout << ( 5 <= 5 ) << endl; // равно или меньше
    cout << ( 5 >= 5 ) << endl; // равно или больше
    cout << ( 5 == 5 ) << endl; // == это равно
    */
     
    
    // && - and
    // || - or
    // != - no
    
    
    int a = 3;
    int b = 3;
    
    cout << ((a == b ) && (5 > 4 )) << endl; // it is true
    // cout << ((a == b ) && (5 < 4 )) << endl; it is fals
    
    cout << ((a != b ) || ( 1 > 0)) << endl; // если в условии есть одна правльно компилятор не будет проверять полнустью
    
}
