#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int clearTerminal() {
	return(system("cls"));
}
int changeBackColor() {
	return(system("color b7"));
}
int changeTextColor() {
	return(system("color F"));
}
int getSizeInt() {
	cout << sizeof(int);
	return 0;
}
int getSizeСhar() {
	cout << sizeof(char);
	return 0;
}
int getSizeDouble() {
	cout << sizeof(double);
	return 0;
}
int getSizeFloat() {
	cout << sizeof(float);
	return 0;
}
int getSizeBool() {
	cout << sizeof(bool);
	return 0;
}
string showMessage() {
	cout << "Привет, я функция";
	return "";
}
int showSquare() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "# ";
		}
		cout << endl;
	}
	return 0;
}


int main() {
	setlocale(0, "");
	cout << "[+] Программа функции\n";
	cout << "[1] Очищение консоли\n[2] Изменить цвет фона консоли\n[3] Изменить цвет текста консоли\n";
	cout << "[4] Вывести размер типа данных INT\n[5] Вывести размер типа данных CHAR\n[6] Вывести размер типа данных DOUBLE\n";
	cout << "[7] Вывести размер типа данных FLOAT\n[8] Вывести размер типа данных BOOL\n[9] Вывести сообщение \"Привет, я функция\"\n";
	cout << "[10] Вывести квадрат 5х5\n[11] Выход\n";

	cout << "Выберите желаемый пункт:";
	int choise;
	cin >> choise;
	switch (choise) {
	case 1:
	{
		clearTerminal();
		break;
	}
	case 2:
	{
		changeBackColor();
		break;
	}
	case 3:
	{
		changeTextColor();
		break;
	}
	case 4:
	{
		getSizeInt();
		break;
	}
	case 5:
	{
		getSizeСhar();
		break;
	}
	case 6:
	{
		getSizeDouble();
		break;
	}
	case 7:
	{
		getSizeFloat();
		break;
	}
	case 8:
	{
		getSizeBool();
		break;
	}
	case 9:
	{
		showMessage();
		break;
	}
	case 10:
	{
		showSquare();
		break;
	}
	case 11:
		cout << "До связи";
		system("cls");
		break;

	default:
		cout << "Выберите от 1 до 11";
		break;
	}
	cin.get();
}
