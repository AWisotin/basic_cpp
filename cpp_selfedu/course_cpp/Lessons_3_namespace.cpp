/*
25.01.2025
C++
Что такое пространства имен (namespace) и зачем они нужны. 
Объявление собственных пространств и обращение к его элементам. Символ раскрытия области видимости.
OK
*/


// Первая программа на языке С++
#include <iostream>

// Глобальное пространство имен (::) [от #include <> до main()]

namespace firstSpace{
// объявление функции
void foo(){
    std::cout << "function from firstSpace: foo()" << std::endl;
}
}

// объявление функции
void foo(){
    std::cout << "function: foo()" << std::endl;
}

// объявление переменной
int global_a = 5;

 namespace firstSpace {   // добавление global_a  в область имен firstSpace
// объявление переменной
int global_a = 15;
 }

// объявление структуры
struct point {
    double x, y;
};
    

int main() {                                    // точка входа в программу

    int global_a = 10;
        std::cout << global_a << '\n'; // global_a локальная main()
        //10
        std::cout << ::global_a << '\n'; // ::global_a глобальная от #include <> до main()
        //5
        std::cout << firstSpace::global_a << '\n'; // ::global_a глобальная от #include <> до main()
        //15
    point pt {};

    ::foo();
    firstSpace::foo();


    std::cout << "\nOK" << std::endl;           // вывод информации в стандартный выходной поток
    
    return 0;                                   // завершает main() со значением 0
}



/*
Компиляция файла
    
    Ctrl + Shift + B

Code Runner
Компиляция и запуск программы 

    Ctrl + Alt + N

*/