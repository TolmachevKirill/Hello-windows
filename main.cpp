#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits> // Добавлено для std::numeric_limits

int main() {
    // Создание файла для логирования
    std::ofstream log("log.txt");

    if (!log) {
        // Если файл не может быть создан, вывод в стандартный поток ошибок
        std::cerr << "Cannot open log file!" << std::endl;
        return EXIT_FAILURE;
    }

    log << "Starting the application" << std::endl;

    // Ваш код приложения
    std::cout << "Hello, Windows from Debian!" << std::endl;
    log << "Printed hello message" << std::endl;

    // Здесь можно добавить дополнительные логи

    log << "Application is closing" << std::endl;

    // Запросите у пользователя ввод, чтобы консоль оставалась открытой
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}

