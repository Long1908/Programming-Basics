//// Seminar 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    /*Задача 1: Прочетете 16 битово цяло число без знак от клавиатруата и покажете неговата двойчна репрезентация(без да ползвате bitset).*/
//
//    /*{
//        const unsigned short size = sizeof(unsigned short) * 8 - 1;
//        unsigned short number;
//        cin >> number;
//        for (int i = size; i >= 0; i--)
//        {
//            cout << ((number & (1 << i)) ? 1 : 0 );
//        }
//    }*/
//
//    /*Задача 2: Въведете две числа 'а', 'б'. Въведете трето число в интервала [а, б]. Акое е извън него, програмта да иска ново въвеждане, докато числото не
//    попадне в дадения интервал.*/
//
//    /*{
//        double a, b, c;
//        cin >> a >> b;
//        if (a < b)
//        {
//            do
//            {
//                cout << "c: ";
//                cin >> c;
//            } while ((c < a) || (c > b));
//        }
//        else if (a > b)
//        {
//            do
//            {
//                cout << "c: ";
//                cin >> c;
//            } while ((c > a) || (c < b));
//        }
//        cout << c;
//
//    }*/
//
//    /*Задача 3: Напишете програма, която чете число от конзолата и проверяба дали то е просто.*/
//
//    /*{
//        unsigned short number;
//        cin >> number;
//        unsigned short divCounter = 0;
//        for (size_t i = 1; i <= number; ++i)
//        {
//            if (number % i == 0)
//            {
//                ++divCounter;
//            }
//        }
//        cout << ((divCounter > 2) ? "No" : "Yes") << endl;
//    }*/
//
//    /*Задача 4: Напишете приграма, която чете едица от числа чрез конзолата и в края на изпълнението показва минимума, максимума и средното аритметично
//    на тази редица. Четенето да се прекрати при въведено отрицателно число.*/
//
//    /*{
//        short number = 0, min = 0, max = 0, counter = 0;
//        unsigned Sum = 0;
//        double avg;
//        cin >> number;
//        min = number;
//        max = number;
//        while (number >= 0)
//        {
//
//            Sum += number;
//            if (number < min)
//                min = number;
//            if (number > max)
//                max = number;
//            ++counter;
//            cin >> number;
//        }
//        avg = Sum / (float)counter;
//        cout << "Minimum: " << min << endl;
//        cout << "Maximum: " << max << endl;
//        cout << "Average: " << avg << endl;
//    }*/
//
//    /*Задача 5: Въведете цяло положително число N. Изведете всички числа в интервала [1, N] вдигнати на квадрат.*/
//
//    /*{
//        unsigned int n;
//        cin >> n;
//        for (size_t i = 1; i <= n; ++i)
//        {
//            cout << i * i << " ";
//        }
//    }*/
//
//    /*Задача 6: Напишете програма, която чете цяло, положително число от конзолата и показва сбора на цифрите му.*/
//
//    /*{
//        unsigned long number, Sum = 0;
//        cin >> number;
//        do
//        {
//            Sum += number % 10;
//            number /= 10;
//        } while (number);
//        cout << Sum;
//    }
//    */
//
//    /*Задача 7: Едно число Х е палиндром, ако числото N написано с цифрите на Х, но в опратен ред е равно на числото Х.
//    Дасе сътави програма, която проверява дали въведеното естествено положително число е палиндром. */
//
//    /*{
//        unsigned long x, buff, sum = 0;
//        unsigned short counter = 0;
//        cin >> x;
//        buff = x;
//        do
//        {
//            ++counter;
//            x /= 10;
//        } while (x);
//        x = buff;
//        for (int i = counter - 1; i >= 0; --i)
//        {
//            sum += (x % 10) * pow(10, i);
//            x /= 10;
//        }
//        cout << ((sum == buff) ? "Yup" : "Nope") << endl;
//    }*/
//
//    /*Задача 8: Напишете програма, която чете цяло, положително число 'n' от конзолата и пресмята n! - n факториал. */
//
//    /*{
//        unsigned short n;
//        unsigned long factorial = 1;
//        cin >> n;
//        for (size_t i = 1; i <= n; ++i)
//        {
//            factorial *= i;
//        }
//        cout << factorial;
//    }*/
//
//    /*Задача 9: Трион ще наричаме редицата (a, b, c, d, e, f, g....), където
//    a <= b >= c <= d >= e <= f >= g.... или
//    a >= b <= c >= d <= e >= f <= g....
//    Въведете дължината на редицата N и след това N числа, които представляват редицата. Установете дали редицата е трион.*/
//
//    //{
//    //    unsigned short n;
//    //    unsigned num, buff;
//    //    cin >> n;
//    //    bool isSaw = true;
//    //    cin >> num;
//    //    buff = num;
//    //    cin >> num;
//    //    if (buff < num)
//    //    {
//    //        for (size_t i = 2; i < n; ++i)
//    //        {
//    //            buff = num;
//    //            cin >> num;
//    //            if (i % 2 == 0)
//    //            {
//    //                if (buff < num)
//    //                {
//    //                    isSaw = false;
//    //                }
//    //            }
//    //            else//(i % 2 == 1)
//    //            {
//    //                if (buff > num)
//    //                {
//    //                    isSaw = false;
//    //                }
//    //            }
//    //        }
//    //    }
//    //    else//(buff > num)
//    //    {
//    //        for (size_t i = 2; i < n; ++i)
//    //        {
//    //            buff = num;
//    //            cin >> num;
//    //            if (i % 2 == 0)
//    //            {
//    //                if (buff > num)
//    //                {
//    //                    isSaw = false;
//    //                }
//    //            }
//    //            else//(i % 2 == 1)
//    //            {
//    //                if (buff < num)
//    //                {
//    //                    isSaw = false;
//    //                }
//    //            }
//    //        }
//    //    }
//    //    cout << (isSaw ? "Yup" : "Nope") << endl;
//    //}
//
//    /*Задача 10: Напишете програма, котя пказва първите 'n' члена на редицата на Фибоначи. Fn = Fn-1 + Fn - 2 където F0 = 0, F1 = 1*/
//
//    /*{
//        const unsigned short fib0 = 0;
//        const unsigned short fib1 = 1;
//        unsigned buff1, buff2, buff3;
//        buff1 = fib0;
//        buff2 = fib1;
//        unsigned short n;
//        cin >> n;
//        for (size_t i = 0; i < n; ++i)
//        {
//            if (i == 0)
//                cout << buff1 << " ";
//            if (i == 1)
//                cout << buff2 << " ";
//            if (i > 1)
//            {
//                buff3 = buff2;
//                buff2 += buff1;
//                buff1 = buff3;
//                cout << buff2 << " ";
//            }
//        }
//    }*/
//
//    /*Задача 11: Напишете прoграма, която чете цяло, положително число от конзолата upperBount и показва всички 3те степени на числата по-малки от него.*/
//
//    /*{
//        const unsigned short cube = 3;
//        unsigned short upperBound;
//        cin >> upperBound;
//        unsigned pow;
//        for (size_t i = 1; i <= upperBound; ++i)
//        {
//            pow = 1;
//            for (size_t j = 0; j < cube; ++j)
//            {
//                pow *= i;
//            }
//            cout << "The number " << i << " cubed is: " << pow << endl;
//        }
//    }*/
//
//    /*Задача 12: Напишете програма, котя чете от конзолата цяло, положително 'n' число и показва на конзолата първите 'n' прости числа*/
//
//    /*{
//        const unsigned long long size = 2E8;
//        unsigned short n, counter, primeNum = 0;
//        cin >> n;
//        for (size_t i = 2; i <= size; ++i)
//        {
//            counter = 0;
//            for (size_t j = 1; j <= i; ++j)
//            {
//                if (i % j == 0)
//                {
//                    ++counter;
//                }
//            }
//            if (counter == 2)
//            {
//                cout << i << " ";
//                ++primeNum;
//            }
//            if (primeNum == n)
//                i = size;
//        }
//    }*/
//
//    /*Задача 13: Напишете програма, която чете две цели, положителни числа 'm', 'n' от конзолата и показва всички прости числа в интервала [m, n]. */
//
//    /*{
//        unsigned m, n;
//        unsigned short counter;
//        cin >> m >> n;
//        for (size_t i = m; i <= n; ++i)
//        {
//            counter = 0;
//            for (size_t j = 1; j <= i; ++j)
//            {
//                if (i % j == 0)
//                {
//                    ++counter;
//                }
//            }
//            if (counter == 2)
//                cout << i << " ";
//        }
//    }*/
//
//    /*Задача 14: Напишете програма, която чете цяло, положително чисо от конзолата  рисува полу-дървона толкова реда*/
//
//    /*{
//        unsigned short n;
//        cin >> n;
//        for (size_t i = 1; i <= n; ++i)
//        {
//            for (size_t j = 0; j < i; ++j)
//            {
//                cout << "*";
//            }
//            cout << endl;
//        }
//    }*/
//
//    /*Задача 14: Напишете програма, която рисувa дърво по даден нечетен брой редове*/
//
//    /*{
//        unsigned short n,spaceNeedLeft, spaceNeedRight;
//        cin >> n;
//        spaceNeedLeft = n / 2;
//        spaceNeedRight = n / 2;
//        for (size_t i = 0; i < n; ++i)
//        {
//            if (i <= n / 2)
//            {
//                for (size_t j = 0; j < n; ++j)
//                {
//                    if ((j < spaceNeedLeft) || (j > spaceNeedRight))
//                        cout << " ";
//                    else
//                        cout << "*";
//                }
//                --spaceNeedLeft;
//                ++spaceNeedRight;
//                cout << endl;
//            }
//            else
//            {
//                spaceNeedLeft = n / 2;
//                spaceNeedRight = n / 2;
//                for (size_t j = 0; j < n; ++j)
//                {
//                    if ((j < spaceNeedLeft) || (j > spaceNeedRight))
//                        cout << " ";
//                    else
//                        cout << "*";
//                }
//                cout << endl;
//            }
//        }
//    }*/
//}
