#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Времена года\n[1]Лето\n[2]Осень\n[3]Зима\n[4]Весна\n\nВыберите месяц: ";
    int question;
    cin >> question;
    if (question == 1)
    {
        cout << "Сейчас лето";
    }
    else if (question == 2) {
        cout << "Сейчас осень";
    }
    else if (question == 3) {
        cout << "Сейчас зима";

    }
    else if (question == 4) {
        cout << "Сейчас весна";
    }
    else {
        cout << "вы ввели неверное число\n";

    }

}
