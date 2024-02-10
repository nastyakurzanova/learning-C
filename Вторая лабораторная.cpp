#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int input = 0;
    int h, m, hh;
    bool mm;
    while (input == 0) {
        cout << "Введите часы и нажмите на клавижу enter" << endl;
        //Ввод данных
        cin >> h;
        //Проверка часов
        if (h < 0 || h > 23) {
            cout << "Неверно введены часы " << endl;
        }
        else {
            cout << "Введите минуты и нажмите на клавишу enter" << endl;
            cin >> m;
            mm = m == 0;
            //Проверка минут
            if (m > 59 || m < 0)
            {
                cout << "Неверно введены минуты " << endl;
            }
            else
            {
                //Если полдень
                if (h == 12 && mm)
                {
                    cout << "Полдень" << endl;
                }
                else
                {
                    //Если полночь
                    if (h == 0 && mm)
                    {
                        cout << "Полночь" << endl;
                    }
                    else
                    {
                        if (h >= 0 && h < 5)
                        {
                            hh = 1; //ночь
                        }
                        if (h >= 5 && h < 12)
                        {
                            hh = 2; // утра
                        }
                        if (h >= 12 && h < 18)
                        {
                            hh = 3; // дня
                        }
                        if (h >= 18 && h < 24)
                        {
                            hh = 4; // вечера
                        }
                        if (h > 12) {
                            h = h - 12;
                        }
                        //Вывод часов с соответствующим окончанием
                        cout << h;
                        cout << " час";
                        if (h == 1)
                        {
                        }
                        else
                        {
                            if ((h >= 2 && h <= 4))
                            {
                                cout << "а";
                            }
                            if ((h >= 5 && h <= 20) || (h == 0))
                            {
                                cout << "ов";
                            }
                        }
                        //Вывод минут с соответствующим окончанием
                        if (!mm)
                        {
                            cout << " " << m << " минут";
                            if (m == 1 || m == 21 || m == 31 || m == 41 || m == 51)
                                cout << "а";
                            else if ((m >= 2 && m <= 4) || (m >= 22 && m <= 24) || (m >= 32 && m <= 34) || (m >= 42 && m <= 44) || (m >= 52 && m <= 54))
                                cout << "ы";
                            else
                            {
                            }
                        }
                        //Определение времени суток
                        if (hh == 1)
                        {
                            cout << " ночи" << endl;
                        }
                        if (hh == 2)
                        {
                            cout << " утра" << endl;
                        }
                        if (hh == 3)
                        {
                            cout << " дня" << endl;
                        }
                        if (hh == 4)
                        {
                            cout << " вечера" << endl;
                        }
                        //Определение "ровно"
                        if (mm)
                        {
                            cout << " ровно" << endl;
                        }

                    }
                }

            }
        }
        cout << "Для дальнейшего ввода нажмите 0" << endl;
        cin >> input;
    }
}
