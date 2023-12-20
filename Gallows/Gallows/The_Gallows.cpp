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
            cout << "\n" << "�� ��� �����������?" << endl;
            cout << "������� ��� ���?(1-��/2-���)" << endl; cin >> option_1;
        }
        else {
            cout << "\n" << "(: ����� ���������� �� ���� ���������� :)" << endl;
            cout << "������� ������: ���� ����� ���������� �����, � ������ ���������� ���" << endl;
            cout << "���� ����� ��������, �� ��������� ������ �����, ���� �� ��� �� ������" << endl;
            cout << "� ������� ������ 9 �������" << endl;
            cout << "��� ����� ������ ���� �������� � �������� �������� ����������" << "\n" << endl;
            cout << "�� ��� �����?(1-��/2-���)" << endl; cin >> option_1;
        }
        switch (option_1)
        {
        case 1:
            cout << "����� ������ ����� ���������� �����, � ������ �������� ���� �� ���������" << endl;
            cout << "��������� �����" << endl; getchar();
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
                    cout << "����������� �� �������� ��� �����!!!" << endl;
                    cout << "�� ��������!!!" << endl;
                    repeatPlay = 1;
                    break;
                }
                else if (lives == 0) {
                    cout << "� ��������� �� ��������� ��� �������" << endl;
                    cout << "�� ���������!!!" << endl;
                    repeatPlay = 1;
                    break;
                }
                cout << "�������� ���� �� ���������" << endl;
                cout << "1 - ������� �����" << endl;
                cout << "2 - ������ �� ����� �����" << endl;
                cout << "3 - �������" << endl;
                cin >> option_2;
                switch (option_2)
                {
                case 1:
                    cout << "������� ������: "; getchar(); symbol = getchar();
                    if (strchr(starWord, symbol) || strchr(unsolvedSymbols, symbol)) {
                        cout << "�� ��� ������� �������� ������, ����� 1 �������" << endl;
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
                        cout << "������� ������� ��� � �����: " << unsolvedSymbols << endl;
                    }
                    break;
                case 2:
                    getchar(); gets_s(guessedWord);
                    if (!strcmp(hiddenWord, guessedWord))
                    {
                        cout << "����������� �� ������� ����� " << hiddenWord << endl;
                        cout << "�� ��������!!!" << endl;
                        repeatPlay = 1;
                    }
                    else {
                        cout << "� ��������� �� �� ������� ����� " << hiddenWord << endl;
                        cout << "�� ���������!!!" << endl;
                        repeatPlay = 1;
                    }
                    break;
                case 3:
                    cout << "�� ���������, � ���������� ����� ���� " << hiddenWord << endl;
                    repeatPlay = 1;
                    break;
                default:
                    cout << "����������� ������� ������, ��������� �������" << endl;
                    break;
                }
            } while (option_2 != 2 && option_2 != 3);
            break;
        case 2:break;
        default:
            cout << "����������� ������� ������, ��������� �������" << endl;
            break;
        }
    } while (option_1 != 2);
}