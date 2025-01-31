/*
25.01.2025
C++
Способы инициализации переменных в языке С++. Вычисляемые типы через ключевые слова auto и decltype.
OK
*/


// Первая программа на языке С++
#include <iostream>
#include <typeinfo>
#include <list>
// Глобальное пространство имен (::) [от #include <> до main()]

// using <пространство имен> :: <элемент>;
using std::cout;
using std::endl;

// точка входа в программу
int main() {

{   cout << "Teil I: присваивание и инициализация" << endl;

    int val = 0;                // = 0 инициализация (аналогично в Си)
    int pow[] = {1, 2, 4, 8};

    double d;
    d = 5.78;                   // = 5.78 присваивание  (аналогично в Си)

    short sh(10);               // функциональная нотация (нет аналога в Си)
    char ch{'b'};               // {} в отличии от () проводить проверку типа данных
    long lv{};                  // инициализация нулем

    long in_1 (5.56);           //in_1 = 5
    //long in_2 {5.56};           
    // error: narrowing conversion of '5.5599999999999996e+0' from 'double' to 'long int' [-Wnarrowing]

    cout <<
        
        "d = " <<   d   << "\n" <<
        "sh = " <<  sh  << "\n" <<
        "ch = " <<  ch  << "\n" <<
        "lv = " <<  lv  << "\n" <<
        "long in_1 (5.56) = " <<  in_1  << "\n" <<
        "long in_2 {5.56} => error: narrowing conversion of '5.5599999999999996e+0' from 'double' to 'long int' [-Wnarrowing]" << "\n" << endl;
}
{   cout << "Teil II: особенность модификатора const" << endl;

    const double pi {3.1415};   // константа должна быть сразу проинициализирована.

    cout <<
        "const pi = " << pi << "\n" << endl;

}
{   cout << "Teil III: вычисляемый тип auto " << endl;

    auto a = -100;      // тип int
    auto d = 76.98;     // тип double
    auto g = 0.55f;     // тип float
    auto h = 'f';       // тип char

    cout << 
        "auto a = -100;     Тип переменной a: " << typeid(a).name() << "\n"
        "auto d = 76.98;    Тип переменной d: " << typeid(d).name() << "\n"
        "auto g = 0.55f;    Тип переменной g: " << typeid(g).name() << "\n"
        "auto h = 'f';      Тип переменной h: " << typeid(h).name() << "\n"
        "i - int; d - double; f - float; c - char" << endl;

    auto x = 1 + 2 - 10;            
    auto y = 1 + x + 3.0;           
    auto z = 55u;                  
    auto l = (short)10 + 10000UL;   

    cout << 
        "auto x = 1 + 2 - 10;           Тип переменной x: " << typeid(x).name() << "\n"
        "auto y = 1 + x + 3.0;          Тип переменной y: " << typeid(y).name() << "\n"
        "auto z = 55u;                  Тип переменной z: " << typeid(z).name() << "\n"
        "auto l = (short)10 + 10000UL;  Тип переменной l: " << typeid(l).name() << "\n"
        "i - int; d - double; j - unsigned long long int; m - pointer to member"<< "\n" << endl;

}
{   cout << "Teil IV: вычисляемый тип auto" << endl;
    std::list<short> dg = {-3, -2, 0, 2, 3};
    
    for(std::list<short>::iterator i = dg.begin(); i != dg.end(); ++i)
                   std::cout << *i << " ";
        cout << "\n" << endl;
    // analog mit auto    
    for(auto i = dg.begin(); i != dg.end(); ++i)
                   std::cout << *i << " ";
        cout << "\n" << endl;
}

    cout << "OK" << endl;           // вывод информации в стандартный выходной поток
    
    return 0;                                   // завершает main() со значением 0
}

/*
Компиляция файла
    
    Ctrl + Shift + B

Code Runner
Компиляция и запуск программы 

    Ctrl + Alt + N

*/
/*
Teil I: присваивание и инициализация
d = 5.78
sh = 10
ch = b
lv = 0
long in_1 (5.56) = 5
long in_2 {5.56} => error: narrowing conversion of '5.5599999999999996e+0' from 'double' to 'long int' [-Wnarrowing]

Teil II: особенность модификатора const
const pi = 3.1415

Teil III: вычисляемый тип auto 
auto a = -100;     Тип переменной a: i
auto d = 76.98;    Тип переменной d: d
auto g = 0.55f;    Тип переменной g: f
auto h = 'f';      Тип переменной h: c
i - int; d - double; f - float; c - char
auto x = 1 + 2 - 10;           Тип переменной x: i
auto y = 1 + x + 3.0;          Тип переменной y: d
auto z = 55u;                  Тип переменной z: j
auto l = (short)10 + 10000UL;  Тип переменной l: m
i - int; d - double; j - unsigned long long int; m - pointer to member

Teil IV: вычисляемый тип auto
-3 -2 0 2 3 

-3 -2 0 2 3 

OK
*/