/*
25.01.2025
C++
Рассматриваются типы данных bool и wchar_t. 
Приводятся примеры их использования. 
Особенности приведения указателей разных типов. Рассматривается новая форма оператора for.
OK
*/


// Первая программа на языке С++
#include <iostream>

// Глобальное пространство имен (::) [от #include <> до main()]

// using <пространство имен> :: <элемент>;
using std::cout;
using std::endl;

// точка входа в программу
int main() {
/*  
    // I
    bool fl_print = false;
        cout << fl_print << endl; //
        //0
    fl_print = true;
    if(fl_print)
        cout << "Hi!" << endl; 

    wchar_t wch;
    wch = L'Я';
        cout << wch << endl;//
        //1071

    char str [] = "Привет мир!";
        cout << sizeof(str) << endl;//
        //21
        cout << str << endl;//
        //Привет мир!

    wch = str[0];
        cout << wch << endl;//
        //Привет мир!
*/
    /*
    0
    Hi!
    1071
    21
    Привет мир!
    65488 
    */
/*
    // II
    int* ptr_i = nullptr;
    char* ptr_ch = NULL;
    void* ptr_v = 0L;   
    cout << ptr_i << endl;


    ptr_ch = (char *) ptr_i;
    ptr_i = (int *) ptr_v;

    ptr_i = (int *) malloc(sizeof(int) * 5);
*/
    // III
    char msg[30] = " I like C++ language";

    for (char x : msg)
        cout << x << " ";


    cout << "\nOK" << endl;           // вывод информации в стандартный выходной поток
    
    return 0;                                   // завершает main() со значением 0
}



/*
Компиляция файла
    
    Ctrl + Shift + B

Code Runner
Компиляция и запуск программы 

    Ctrl + Alt + N

*/