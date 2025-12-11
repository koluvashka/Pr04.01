#include <iostream>
#include <cstdlib>

/// <summary>
/// Вычисляет площадь прямоугольника.
/// </summary>
/// <param name="length">Длина прямоугольника (должна быть положительным числом).</param>
/// <param name="width">Ширина прямоугольника (должна быть положительным числом).</param>
/// <returns>Площадь прямоугольника как произведение длины на ширину.</returns>
/// <remarks>
/// Функция не проверяет корректность входных данных.
/// Для отрицательных значений результат будет отрицательным.
/// </remarks>
double calculateArea(double length, double width)
{
    return length * width;
}

/// <summary>
/// Точка входа в программу.
/// </summary>
/// <returns>
/// Код завершения программы: 0 - успешное выполнение.
/// </returns>
/// <remarks>
/// Демонстрирует работу функции calculateArea() на нескольких примерах.
/// </remarks>
int main() {
    system("chcp 1251"); // Установка кодировки для вывода кириллицы

    double length1 = 10.0;
    double width1 = 5.0;

    cout << "Площадь (10 x 5): " << calculateArea(length1, width1) << endl;
    cout << "Площадь (3.5 x 2): " << calculateArea(3.5, 2) << endl;
    cout << "Площадь (100 x 20): " << calculateArea(100, 20) << endl;

    return 0;
}