/*
25.01.2025
C++
Импорт объектов и пространств имен с помощью оператора using. Переопределение имен типов с помощью using.
OK
*/


// Первая программа на языке С++
#include <iostream>

// Глобальное пространство имен (::) [от #include <> до main()]

// using <пространство имен> :: <элемент>;
using std::cout;
using std::endl;

using byte_8 = unsigned char; 
//analog
//typdef unsigned char byte_8; для С

// analog
//using namespace std; // плохая практика. возможно конфликт имен.

// точка входа в программу
int main() {                                    

    byte_8 ch;
    byte_8* ptr_ch, *a;

    cout << "\nOK" << endl;
    //std::cout << "\nOK" << std::endl;           // вывод информации в стандартный выходной поток
    
    return 0;                                   // завершает main() со значением 0
}



/*
Компиляция файла
    
    Ctrl + Shift + B

Code Runner
Компиляция и запуск программы 

    Ctrl + Alt + N

*/