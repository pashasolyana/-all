#include <iostream>
#include <ctime>
using namespace std;

struct Questions {
    string question;
    string answer[4];
    string uncorrect;
    string correct;
};

const int questionSize = 15;
int questionCount = 5;
int lives = 5;
int score = 0;
int hint = 1;

Questions question[questionSize]{
    {"Что такое клиническая смерть?",{"Смерть","Жизнь","Вода","Наука"},"Жизнь","Смерть"},
    {"Что такое аниме?",{"Мультик","Исскуство","Развлечение","Мем"},"Мультик","Исскуство"},
    {"Как зовут Влада?",{"Влад","Миша","Дима","Олег"},"Миша","Влад"},
    {"Дистант это?",{"Отдых","Пары","Сон","Чилл"},"Сон","Чилл"},
    {"Сколько будет 2+2*2?",{"2","4","6","8"},"8","6"},
    {"Кто президент мира?",{"Путин","Обама","Сталин","Байден"},"Байден","Путин"},
    {"Принглс это?",{"Чипсы","Картошка","Масло","Лук"},"Лук","Чипсы"},
    {"Ачу?",{"Аничу","Нормально разговаривай","кто","что"},"Нормально разговаривай","Аничу"},
    {"Когда день рождение Путина",{"7 октября","23 февраля","8 марта","1 февраля"},"23 февраля","7 октября"},
    {"1+1?",{"1","2","3","4"},"3","2"},
    {"Сколько гендеров?",{"47","2","много","3"},"47","2"},
    {"Отчего планета умрет?",{"Люди","Солнце","Животные","Обама"},"Люди","Солнце"},
    {"Кто мы?",{"Слесари","Сварщики","Мойщики","Программисты"},"Сварщикик","Программисты"},
    {"Сколько у тебя рук?",{"1","2","3","4"},"4","2"},
    {"Сколько у тебя хромосом?",{"11","8","47","46"},"47","46"},

};


void StartGame() {
    system("cls");
    srand(time(0));
    for (int i = 0; i < questionSize; i++) {
        swap(question[i], question[rand() % 15]);
    }

    for (int i = 0; i < questionSize; i++) {
        for (int j = 0; j < 4; j++) {
            swap(question[i].answer[j], question[i].answer[rand() % 4]);
        }
    }

    for (int i = 0; i < questionCount; i++) {
        if (lives > 0) {
            cout << question[i].question << endl;
            for (int j = 0; j < 4; j++) {
                cout << "[" << j + 1 << "]" << question[i].answer[j] << endl;
            }
            int choise;
            cout << "Выберите как вы думаете правильный ответ или вызовите подсказку написав 10:";
            cin >> choise;
            if (choise == 10 && hint != 0) {
                cout <<"[1]" << question[i].correct << endl;
				cout <<"[2]" << question[i].uncorrect << endl;
				question[i].answer[0] = question[i].correct;
				question[i].answer[1] = question[i].uncorrect;
                hint--;
                cout << "У вас осталось " << hint << " подсказок" << endl;
                cout << "Выберите желаемый пункт:";
                cin >> choise;
            }
            else if (hint == 0 && choise == 10) {
                cout << "У вас нет подсказок" << endl;
                cout << "Введите вариант ответа:";
                cin >> choise;
            }

            if (question[i].answer[choise - 1] == question[i].correct) {
                score++;
                cout << "Вы ответили правильно, вы получаете +1 очко" << endl;
                cout << "У вас " << score << " очко(-ов)" << endl;
            }
            else {
                lives--;
                cout << "Увы, ответ неправильный.." << endl;
                cout << "У вас осталось " << lives << " жизни(-ей)" << endl;
            }
            system("pause");
            system("cls");
        }
        else{
            system("cls");
            cout << "У вас не осталось жизней :(" << endl;
            cout << "Вы набрали: " << score << " очко(-ов)" << endl;
        }
    }
}
void showSetting() {
    system("cls");
    cout << "Выберите что вы хотите изменить:\n[1]Количество вопросов\n[2]Количество подсказок\n[3]Количество жизней\n";
    int choise;
    cin >> choise;
    switch (choise) {
    case 1:
    {
        system("cls");
        cout << "[+]Выберите количество вопросов:\n[1]5\n[2]10\n[3]15\n";
        int choise;
        cin >> choise;
        if (choise == 1) {
            questionCount = 5;
        }
        else if (choise == 2) {
            questionCount = 10;
        }
        else if (choise == 3) {
            questionCount = 15;
        }
        else {
            cout << "Вы ввели некорректное значение :(";
        }
        break;
    }
    case 2:
    {
        system("cls");
        cout << "[+]Введите количество подсказок:";
        cin >> hint;
        break;
    }
    case 3:
    {
        system("cls");
        cout << "Выберите количество жизней\n[1]3\n[2]5\n[3]7\n";
        int choise;
        cin >> choise;
        if (choise == 1) {
            lives = 3;
        }
        else if (choise == 2) {
            lives = 5;
        }
        else if (choise == 3) {
            lives = 7;
        }
        else {
            cout << "Вы ввели некорректное значение :(";
        }
        break;
    }
    default:
        cout << "Вы ввели некорректное значение :(";
        break;
    }
}
void showResult() {
    system("cls");
    cout << "Поздравляем вы прошли викторину, у вас осталось: " << lives << " жизнь(-ей)" << endl;
    cout << "Вы заработали: " << score << " очко(-ов)" << endl;
    system("pause");
}
void showRules() {
    system("cls");
    cout << "Все просто вы выбираете количество вопросов,подсказок, жизней." << endl;
    cout << "Отвечайте на легкие вопросы и все будет замечательно, удачи :)(мне на экзамене...)" << endl;
    system("pause");
}
int main()
{
    system("cls");
    setlocale(0, "");
    cout << "Добро пожаловать в викторину!!!" << "\n\n";
    cout << "[1] Играть" << endl;
    cout << "[2] Настройки" << endl;
    cout << "[3] Правила" << "\n\n";
    cout << "[4] Выход" << endl;

    int ch;
    cin >> ch;
    if (ch == 1) {
        StartGame();
        showResult();
        score = 0;
        main();
    }
    else if (ch == 2) {
        showSetting();
        system("cls");
        main();
    }
    else if (ch == 3) {
        showRules();
        main();
    }
    else if (ch == 4) {
        system("cls");
        cout << "Bye, bye, good man ;)";
    }
    else {
        cout << "Нужно ввести значение от 1 до 3" << endl;
        system("pause");
        main();
    }

}
