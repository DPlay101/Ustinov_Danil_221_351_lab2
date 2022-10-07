#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::to_string;

// Глобальные переменные для использования в функциях
int n = 0, k = 0, C = 1;      

void exe1()
{
    string str = "0";

    cout << "Введите число: ";
    cin >> n;

    for (int i = 0; i <= n;)
    {
        cout << str << "\n";
        i++;
        str = str + to_string(i);
    }

    system("pause");
}

void exe2()
{
    cout << "Введите число: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "C" << i - 1 << " = " << C << "\n";
        C = C * (n - (i - 1)) / (i);
    }
    cout << "C" << n << " = " << C << "\n";

    system("pause");
}

void exe3()
{
    cout << "System ERROR <404>\n\n";

    system("pause");
}


int main()
{
    // Подключаем русский язык
    setlocale(LC_ALL, "Russian");

    // Переменная для хранения выбора пользователя
    int choice = 0;
    
    // Непрерывный цикл
    while (true)
    {
        // Очищаем консоль перед каждым новым запуском
        system("cls"); 

        cout << "Что вы хотите выполнить?\n"
            << "1. первое задание\n"
            << "2. второе задание\n"
            << "3. третье задание\n"
            << "4. выход\n\n"
            << "-> ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            system("cls");
            exe1();
            break;
        case 2: 
            system("cls");
            exe2();
            break;
        case 3: 
            system("cls");
            exe3();
            break;
        default:
            system("cls");
            return 0;
        }
    }

    return 0;
}
