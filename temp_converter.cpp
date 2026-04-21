#include <iostream>
#include <iomanip>
#include <string>

double celsius_to_fahrenheit(double c) {
    return c * 9.0 / 5.0 + 32;
}

double celsius_to_kelvin(double c) {
    return c + 273.15;
}

int main() {
    setlocale(LC_ALL, "ru");
    std::cout << "Конвертер температуры (C, F, K)" << std::endl;
    std::cout << "Доступные шкалы: C, F, K" << std::endl;

    double value;
    char unit;

    std::cout << "Введите значение: ";
    std::cin >> value;
    std::cout << "Введите исходную шкалу (C/F/K): ";
    std::cin >> unit;

    if (unit == 'C' || unit == 'c') {
        double f = celsius_to_fahrenheit(value);
        double k = celsius_to_kelvin(value);
        std::cout << value << "°C = " << f << "°F = " << k << "K" << std::endl;
    }
    else if (unit == 'F' || unit == 'f') {
        double c = (value - 32) * 5.0 / 9.0;
        double k = celsius_to_kelvin(c);
        std::cout << value << "°F = " << c << "°C = " << k << "K" << std::endl;
    }
    else if (unit == 'K' || unit == 'k') {
        double c = value - 273.15;
        double f = celsius_to_fahrenheit(c);
        std::cout << value << "K = " << c << "°C = " << f << "°F" << std::endl;
    }
    else {
        std::cout << "Ошибка: неизвестная шкала" << std::endl;
        return 1;
    }

    std::cout << "\nТаблица перевода (Цельсий -> Фаренгейт, Кельвин):" << std::endl;
    std::cout << "  C     F     K" << std::endl;
    for (int c = -50; c <= 50; c += 10) {
        double f = celsius_to_fahrenheit(c);
        double k = celsius_to_kelvin(c);
        std::cout << std::setw(4) << c << std::setw(6) << std::fixed << std::setprecision(1) << f << std::setw(6) << k << std::endl;
    }

    return 0;
}