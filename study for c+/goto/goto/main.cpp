#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    cout << "1" << endl;
    
    goto skip;
    
    cout << "2" << endl;
    cout << "3" << endl;
    
    skip:
    
    cout << "4" << endl;
}
