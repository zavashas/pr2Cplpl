#include <iostream>
#include <Windows.h>

    int main(){
        using namespace std;
        SetConsoleCP(1251);
        setlocale(LC_ALL, "Russian");
        int operation = 0;
        int a, b;
        while (operation != 9) {
            cout << "Выберите действие:\n1. Сложение\n2. Вычитание\n3. Произведение\n4. Частное\n5. Возведение в степень\n6. Нахождение квадртного корня\n7. Нахождение 1 процента от числа\n8. Найти факториал числа\n9. Выход\n";
            
            cin >> operation;
            int factorial = 1;
            switch (operation) {
            case 1:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << a + b << endl;
                break;
            case 2:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << a - b << endl;
                break;
            case 3:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
                cout << "Результат: " << a * b << endl;
                break;
            case 4:
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;

                if (b != 0) {
                    cout << "Результат: " << a / b << endl;
                }
                else {
                    cout << "Ошибка: деление на ноль" << endl;
                }
                break;
            case 5:
                cout << "Введите число: ";
                cin >> a;
                int c;
                cout << "Введите степень: ";
                cin >> c;
                cout << "Результат: " << pow(a, c) << endl;
                break;
            case 6:
                cout << "Введите число: ";
                cin >> a;

                if (a >= 0) {
                    double sqrtResult = sqrt(a);
                    cout << "Результат: " << sqrtResult << endl;
                }
                else {
                    cout << "Ошибка: отрицательное число под корнем" << endl;
                }
                break;
            case 7:
                cout << "Введите число: ";
                cin >> a;
                cout << "Результат: " << a * 0.01 << endl;
                break;
            case 8:
                cout << "Введите число: ";
                cin >> a;
                for (int i = 1; i <= a; i++) {
                    factorial *= i;
                }
                cout << "Результат: " << factorial << endl;
                break;
            case 9:
                cout << "Программа завершена." << endl;
                break;
            default: 
                cout << "Некорректный выбор операции. Попробуйте еще раз." << endl;
                break;
            }
        }
    };




