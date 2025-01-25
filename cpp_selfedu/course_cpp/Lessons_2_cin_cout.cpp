/*
25.01.2025
C++
Объект cin для работы со стандартным потоком stdin и объект cout для вывода информации в стандартный выходной поток stdout.
OK
*/


// Первая программа на языке С++
#include <iostream>

int main() {                                    // точка входа в программу
    
    char str[100] = "Hi, Alexej!";
    short old = 99;
    double weight = 151.15;

    std:: cin >> old >> weight;
    std::cout << str << "\n";
    std::cout << old << '\n';
    std::cout << weight << std::endl;           // вывод информации в стандартный выходной поток
    
    return 0;                                   // завершает main() со значением 0
}



/*
Компиляция файла
    
    Ctrl + Shift + B

Code Runner
Компиляция и запуск программы 

    Ctrl + Alt + N

*/