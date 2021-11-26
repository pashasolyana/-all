#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Лабиринт" << endl;
    cout << "[1] 15x15" << endl;
    cout << "[2] 20x20" << endl;
    cout << "[3] 30x30" << endl;
    cout << "Выберите тип:";

    int LabirintType;
    cin >> LabirintType;

    switch (LabirintType) {
    case 1:
    {
        system("cls");
        int Labrirint1[15][15] = {
            {1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,0,1,0,0,0,0,1,1,1},
            {1,1,1,1,1,1,0,1,1,1,1,0,0,0,1},
            {1,1,1,1,1,1,0,0,0,1,1,1,1,0,1},
            {1,1,1,1,1,1,1,1,0,1,1,1,1,0,1},
            {1,1,0,0,0,0,0,0,0,1,0,0,0,0,1},
            {1,1,0,1,1,1,1,1,1,1,0,1,1,0,1},
            {1,1,0,1,1,1,1,1,0,0,0,1,1,0,1},
            {1,1,0,1,1,1,1,1,1,1,1,1,1,0,1},
            {1,1,0,1,0,0,0,0,0,0,0,0,1,0,1},
            {1,1,0,1,0,1,1,1,1,1,1,0,1,0,1},
            {1,1,0,1,0,1,1,1,1,1,1,0,0,0,1},
            {1,1,0,1,0,1,1,1,1,1,1,0,1,1,1},
            {1,1,0,0,0,1,1,1,1,1,1,0,1,1,1},
            {1,1,1,1,1,1,1,1,1,1,1,0,1,1,1},
        };
  

        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 15; j++) {
                if (Labrirint1[i][j] == 1) {
                    cout << "# ";
                }
                else if (Labrirint1[i][j] == 0) {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        break;
    }
    case 2:
    {
        system("cls");
        int Labrirint2[20][20] =
        {
            {1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,0,1,1},
            {1,0,0,0,0,1,1,0,0,1,1,1,1,1,1,1,1,0,1,1},
            {1,0,1,1,0,1,1,1,0,1,1,1,1,1,0,0,0,0,1,1},

            {1,0,1,1,0,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1},
            {1,0,1,1,0,1,1,1,0,1,1,1,1,1,1,0,0,0,1,1},
            {1,0,1,1,0,1,1,1,0,1,1,1,1,1,1,0,1,0,1,1},
            {1,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,1,0,1,1},
            {1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,0,1,0,1,1},

            {1,0,1,0,1,1,1,1,0,1,1,1,0,1,1,0,1,0,1,1},
            {1,0,1,0,1,1,1,1,0,1,1,1,0,1,1,1,1,0,1,1},
            {1,0,1,0,1,1,1,1,0,1,1,1,0,0,0,0,0,0,1,1},
            {1,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,1,1,1},
            {1,1,1,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1},

            {1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
            {1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
            {1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1},


        };

        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 20; j++) {
                if (Labrirint2[i][j] == 1) {
                    cout << "# ";
                }
                else if (Labrirint2[i][j] == 0) {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        break;
    }
    case 3:
    {
        system("cls");
        int Labrirint3[30][30] =
        {
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1},
            {1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1},
            {1,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,1,1,1,1},
            {1,0,1,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,0,1,1,0,1,0,1,1,1,1},
            {1,0,1,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,0,0,1,1,0,1,1,1,1,1,1},
            {1,1,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1},
            {1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1},
            {1,1,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1},
            {1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1},

            {1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1},
            {1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1},
            {1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1},
            {1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,0,0,0,0,0,0,0,1,1,0,1,1},
            {1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1},
            {1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,1,0,1,1,1,0,1,1,0,1,1},
            {1,0,1,1,1,1,1,1,0,1,0,1,1,1,1,0,1,1,0,1,0,1,1,1,0,1,1,0,1,1},
            {1,0,1,1,1,1,1,1,0,1,0,1,1,1,1,0,1,1,0,1,0,1,1,1,0,1,1,0,1,1},
            {1,0,1,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,0,1,0,1,1,1,0,1,1,0,1,1},
            {1,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},

            {1,0,1,0,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
            {1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        };

        for (int i = 0; i < 30; i++) {
            for (int j = 0; j < 30; j++) {
                if (Labrirint3[i][j] == 1) {
                    cout << "# ";
                }
                else if (Labrirint3[i][j] == 0) {
                    cout << "  ";
                }
            }
            cout << endl;
        }


    }
    break;
    default:
        cout << "Введите число от 1 до 3";
        break;
    }
    cin.get();
}
