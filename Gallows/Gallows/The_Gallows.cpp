#include <iostream>
#include <windows.h>
#include "scaffold.h"
#include "motivation.h"
using namespace std;

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int option_1, option_2, sizeOfWord, sizeOfSymbol = 0, position = 0, lives = 9, repeatPlay = 0;
    char hiddenWord[33], guessedWord[33], starWord[33], unsolvedSymbols[33] = { 0 }, symbol;
    do {
        if (repeatPlay) {
            lives = 9;
            position = 0;
            sizeOfSymbol = 0;
            for (int i = 0; i < 33; i++) unsolvedSymbols[i] = 0;
            cout << "\n" << "Ну что понравилось?" << endl;
            cout << "Сыграем ещё раз?(1-да/2-нет)" << endl; cin >> option_1;
        }
        else {
            cout << "\n" << "(: Добро пожаловать на игру висильница :)" << endl;
            cout << "Правила просты: один игрок загадывает слово, а другой отгадывает его" << endl;
            cout << "Если слово отгадано, то побеждает второй игрок, если же нет то первый" << endl;
            cout << "У второго игрока 9 попыток" << endl;
            cout << "Все слова должны быть записаны в строчном варианте кириллицей" << "\n" << endl;
            cout << "Ну что начнём?(1-да/2-нет)" << endl; cin >> option_1;
        }
        switch (option_1)
        {
        case 1:
            cout << "Тогда первый игрок загадывает слово, а второй выбирает один из вариантов" << endl;
            cout << "Загадайте слово" << endl; getchar();
            gets_s(hiddenWord); system("cls");
            sizeOfWord = strlen(hiddenWord);
            for (int i = 0; i < sizeOfWord; i++)
            {
                starWord[i] = '*'; cout << starWord[i];
            }
            cout << endl;
            do {
                scaffold(lives);
                if (sizeOfWord == sizeOfSymbol) {
                    cout << "Поздравляем вы отгадали все буквы!!!" << endl;
                    cout << "Вы выйграли!!!" << endl;
                    repeatPlay = 1;
                    break;
                }
                else if (lives == 0) {
                    cout << "К сожалению вы истратили все попытки" << endl;
                    cout << "Вы проиграли!!!" << endl;
                    repeatPlay = 1;
                    break;
                }
                cout << "Выберите один из вариантов" << endl;
                cout << "1 - Выбрать букву" << endl;
                cout << "2 - Ввести всё слово сразу" << endl;
                cout << "3 - Сдаться" << endl;
                cin >> option_2;
                switch (option_2)
                {
                case 1:
                    cout << "Введите символ: "; getchar(); symbol = getchar();
                    if (strchr(starWord, symbol) || strchr(unsolvedSymbols, symbol)) {
                        cout << "Вы уже вводили подобный символ, снята 1 попытка" << endl;
                        lives--;
                    }
                    else {
                        if (strchr(hiddenWord, symbol)) {
                            for (int i = 0; i < sizeOfWord; i++)
                            {
                                if (hiddenWord[i] == symbol) {
                                    starWord[i] = hiddenWord[i];
                                    sizeOfSymbol++;
                                }
                            }
                        }
                        else {
                            if (position != 0) {
                                unsolvedSymbols[position] = ',';
                                unsolvedSymbols[position + 1] = symbol;
                                position += 2;
                                lives--;
                            }
                            else {
                                unsolvedSymbols[position] = symbol;
                                position += 1;
                                lives--;
                            }
                        }
                        for (int i = 0; i < sizeOfWord; i++) cout << starWord[i]; cout << endl;
                        motivation(sizeOfSymbol);
                        cout << "Символы которых нет в слове: " << unsolvedSymbols << endl;
                    }
                    break;
                case 2:
                    getchar(); gets_s(guessedWord);
                    if (!strcmp(hiddenWord, guessedWord))
                    {
                        cout << "Поздравляем вы угадали слово " << hiddenWord << endl;
                        cout << "Вы выйграли!!!" << endl;
                        repeatPlay = 1;
                    }
                    else {
                        cout << "К сожалению вы не угадали слово " << hiddenWord << endl;
                        cout << "Вы проиграли!!!" << endl;
                        repeatPlay = 1;
                    }
                    break;
                case 3:
                    cout << "Вы проиграли, а загаданное слово было " << hiddenWord << endl;
                    repeatPlay = 1;
                    break;
                default:
                    cout << "Некорректно введёные данные, повторите попытку" << endl;
                    break;
                }
            } while (option_2 != 2 && option_2 != 3);
            break;
        case 2:break;
        default:
            cout << "Некорректно введёные данные, повторите попытку" << endl;
            break;
        }
    } while (option_1 != 2);
}