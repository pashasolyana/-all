#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    const int SIZE = 10;
    int intenger[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    long longer[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    short shorter[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    float floater[SIZE]{ 1.01,2,3,4.32,5,6.032,7,8.0743,9,10 };
    double doubler[SIZE]{ 1.021,2.0214,3,4,5,6.0431,7,8,9,10 };
    bool booler[SIZE]{ true,true, true, true, true, false,true, false, true, false };
    char charer[SIZE]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    string stringer[SIZE]{ "привет", "как", "дела", "почему", "молчишь", "ты", "что", "спишь", "не", "" };

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << intenger[i] << " - значение типа int\n";
    }
    
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << longer[i] << " - значение типа long\n";
    }
    
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << shorter[i] << " - значение типа short\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << floater[i] << " - значение типа float\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << doubler[i] << " - значение типа double\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << booler[i] << " - значение типа bool\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << charer[i] << " - значение типа char\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << stringer[i] << " - значение типа stringer\n";
    }
}
