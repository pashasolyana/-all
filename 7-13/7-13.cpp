#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Геометрические фигуры :)" << endl;
	cout << "[1] Линия" << endl;
	cout << "[2] Квадрат" << endl;
	cout << "[3] Прямоугольник" << endl;
	cout << "[4] Треугольник" << endl;
	cout << "[5] Решетка" << endl;
	cout << "[6] Крестик" << endl;
	cout << "[7] Плюс" << endl;
	cout << "Выберите желаемую фигуру:";
	int figuretype;
	cin >> figuretype;
	switch (figuretype) {
	case 1:
		system("cls");
		cout << "Линия :)" << endl;
		cout << "[+] Выберите тип :" << endl << "[1] Горизонтальная" << endl << "[2] Вертикальная" << endl;
		cout << "Введите тип:";
		int direction;
		cin >> direction;
		switch (direction) {
		case  1:
		{
			cout << "Введите длину строки:";
			int lenght;
			cin >> lenght;

			cout << "Введите символ из которого будет состоять строка:";
			char symbol;
			cin >> symbol;

			int i = 0;
			while (i < lenght) {
				cout << symbol << " ";
				i++;
			}
			break;
		}
		case  2:
		{
			cout << "Введите длину строки:";
			int lenght;
			cin >> lenght;

			cout << "Введите символ из которого будет состоять строка:";
			char symbol;
			cin >> symbol;

			int i = 0;
			while (i < lenght) {
				cout << symbol << " " << endl;
				i++;
			}
			break;
		}

		default:
			cout << "Необходимо ввести значение от 1 до 2";
			break;
		}
		break;
	case 2:

		system("cls");
		cout << "Квадрат :)" << endl;
		cout << "Выберите тип квадрата:" << endl << "[1] Заполненный" << endl << "[2] Полый" << endl;
		int typeOfSquare;
		cin >> typeOfSquare;

		switch (typeOfSquare) {
		case 1:
		{
			cout << "Введите длину строки:";
			int lenght;
			cin >> lenght;

			cout << "Введите символ из которого будет состоять строка:";
			char symbol;
			cin >> symbol;

			for (int height = 1; height <= lenght; height++) {
				for (int width = 1; width <= lenght; width++) {
					cout << symbol << " ";
				}
				cout << endl;
			}


			break;
		}
		case 2:
		{
			cout << "Введите длину строки:";
			int lenght;
			cin >> lenght;

			cout << "Введите символ из которого будет состоять строка:";
			char symbol;
			cin >> symbol;

			for (int height = 1; height <= lenght; height++) {
				for (int width = 1; width <= lenght; width++) {
					if (width > 1 and width < lenght and height > 1 and height < lenght) {
						cout << "  ";
					}
					else {
						cout << symbol << " ";
					}

				}
				cout << endl;

			}
			break;
		}
		default:
			cout << "Необходимо ввести число от 1 до 2";
			break;
		}
		break;
	case 3:

		system("cls");
		cout << "Прямоугольник :)" << endl;
		cout << "Выберите тип прямоугольника:" << endl << "[1] Заполненный" << endl << "[2] Полый" << endl;
		int typeOfRectangle;
		cin >> typeOfRectangle;

		switch (typeOfRectangle) {
		case 1:
		{
			cout << "Введите длину строки:";
			int width;
			cin >> width;

			cout << endl << "Введите высоту:";
			int height;
			cin >> height;

			cout << "Введите символ из которого будет состоять строка:";
			char symbol;
			cin >> symbol;

			for (int i = 1; i <= height; i++) {
				for (int j = 1; j <= width; j++) {
					cout << symbol << " ";
				}
				cout << endl;
			}
			break;
		}
		case 2:
		{
			cout << "Введите длину строки:";
			int width;
			cin >> width;

			cout << endl << "Введите высоту:";
			int height;
			cin >> height;

			cout << "Введите символ из которого будет состоять строка:";
			char symbol;
			cin >> symbol;

			for (int i = 1; i <= height; i++) {
				for (int j = 1; j <= width; j++) {
					if (i > 1 and i < height and j > 1 and j < width) {
						cout << "  ";
					}
					else {
						cout << symbol << " ";
					}

				}
				cout << endl;
			}
			break;
		}
		default:
			cout << "Необходимо ввести число от 1 до 2";
			break;
		}
		break;
	case 4:
		system("cls");
		cout << "Треугольник :)" << endl;
		cout << "Выберите тип треугольника:" << endl << "[1] Заполненный" << endl << "[2] Полый" << endl;
		int typeOfTriangle;
		cin >> typeOfTriangle;
		switch (typeOfTriangle) {
		case 1:
		{
			cout << "Введите длину строки:";
			int size;
			cin >> size;

			cout << "Введите символ из которого будет состоять строка:";
			char symbol;
			cin >> symbol;

			for (int y = 0; y < size; y += 2) {
				for (int x = 0; x < size; x++) {
					if ((x * 2 <= size && (size - y) / 2 <= x) || (x * 2 >= size && y >= x * 2 - size)) {
						cout << symbol << " ";
					}
					else {
						cout << "  ";
					}
				}

				cout << endl;
			}
			break;

		}
		case 2:
		{
			cout << "Введите длину строки:";
			int size;
			cin >> size;

			cout << "Введите символ из которого будет состоять строка:";
			char symbol;
			cin >> symbol;

			for (int i = 0; i < size; i++) {
				for (int j = size - i; j > 0; j--)
					cout << "  ";
				for (int j = 0; j <= 2 * i; j++) {
					if (j < 2 * i && j > 0 && i != (size - 1)) {
						cout << "  ";
					}
					else {
						cout << symbol << " ";
					}
				}
				cout << endl;
			}
		}
		break;

		default:
			cout << "Необходимо ввести значение от 1 до 2";
			break;
		}

		break;
	case 5:
	{
		system("cls");
		cout << "Решетка :)" << endl;

		cout << "Введите длину строки:";
		int size;
		cin >> size;

		cout << "Введите символ из которого будет состоять строка:";
		char symbol;
		cin >> symbol;

		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= size; j++) {
				if (i % 2 == 0 || j % 2 == 0) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	}

	case 6:
	{
		system("cls");
		cout << "Крестик!!! :)" << endl;

		cout << "Введите длину строки:";
		int size;
		cin >> size;

		cout << "Введите символ из которого будет состоять строка:";
		char symbol;
		cin >> symbol;

		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= size; j++) {
				if (i == j || i + j == size + 1) {
					cout << symbol << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}


		break;
	}
	case 7:
	{
		system("cls");
		cout << "Плюс :)" << endl;

		cout << "Введите длину строки:";
		int size;
		cin >> size;

		cout << "Введите символ из которого будет состоять строка:";
		char symbol;
		cin >> symbol;

		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= size; j++) {
				if (i == (size / 2) + 1 || j == (size / 2) + 1) {
					cout << symbol << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}

		break;
	}
	default:
		cout << "Необходимо ввести значение от 1 до 7";
		break;


	}
	cin.get();
}
