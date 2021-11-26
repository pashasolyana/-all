#include <iostream>
using namespace std;


float sum(float num1, float num2) {
    cout << num1 + num2;
    return 0;
}
float subtract(float num1, float num2) {
    cout << num1 - num2;
    return 0;
}

float multiply(float num1, float num2) {
    cout << num1 * num2;
    return 0;
}

int division(int num1, int num2) {
    cout << num1 / num2;
    return 0;
}

int getMOD(int num1, int num2) {
    cout << num1 % num2;
    return 0;
}

float getSquare(float num1) {
    cout << num1 * num1;
    return 0;
}

float addOne(float num1) {
    cout << num1 + 1;
    return 0;
}

int main() {
    setlocale(0, "");
    cout << "Калькулятор\n [1] Сложение\n [2] Вычитание \n [3] Умножение \n [4] Деление \n [5] Остаток\n [6] Возведение в квадрат \n [7] Добавить единицу\n";
    cout << " [8] Выход \n";

    int choise;
    cout << "Выберите желаемую операцию:";
    cin >> choise;
    switch (choise) {
    case 1:
    {
        float num1;
        cout << "Введите первое число:";
        cin >> num1;
        float num2;
        cout << "Введите второе число:";
        cin >> num2;

        sum(num1, num2);
        break;
    }
    case 2:
    {
        float num1;
        cout << "Введите первое число:";
        cin >> num1;
        float num2;
        cout << "Введите второе число:";
        cin >> num2;

        subtract(num1, num2);
        break;
    }
    case 3:
    {
        float num1;
        cout << "Введите первое число:";
        cin >> num1;
        float num2;
        cout << "Введите второе число:";
        cin >> num2;

        multiply(num1, num2);
        break;
    }
    case 4:
    {
        int num1;
        cout << "Введите первое число:";
        cin >> num1;
        int num2;
        cout << "Введите второе число:";
        cin >> num2;

        division(num1, num2);
        break;
    }
    case 5:
    {
        int num1;
        cout << "Введите первое число:";
        cin >> num1;
        int num2;
        cout << "Введите второе число:";
        cin >> num2;

        getMOD(num1, num2);
        break;
    }
    case 6:
    {
        float num1;
        cout << "Введите первое число:";
        cin >> num1;

        getSquare(num1);
        break;
    }
    case 7:
    {
        float num1;
        cout << "Введите первое число:";
        cin >> num1;

        addOne(num1);
        break;
    }
    case 8:
    {
        return 0;
        break;
    }
    default:
        cout << "Введите число от 1 до 8!!!";
        break;
    }



}
