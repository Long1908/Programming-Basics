// Seminar 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// https://github.com/Yabonev/FMI-UP-2019-2020/blob/master/Practices/Practice%2006/Functions%20and%20loops.pdf
// Functin and loops

#include <iostream>

using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
double max(double a, double b) //!!! Ако искаме да върнем реално число, трябва фунцията ни да отговорая на такова число...dummie!!!
{
    if (a > b)
        return (double)a;
    else
        return (double)b;
}
double max(double a, double b, double c)
{
    if ((a > b) && (a > c))
        return a;
    else if ((b > a) && (b > c))
        return b;
    else if ((c > a) && (b < c))
        return c;
}
double max(double a, double b, double c, double d)
{
    if ((a > b) && (a > c) && (a > d))
        return a;
    else if ((b > a) && (b > c) && (b > d))
        return b;
    else if ((c > a) && (b < c) && (c > d))
        return c;
    else
        return d;
}
bool isEnglishCharacter(char a)
{
    if (((a >= 'a') && (a <= 'z')) || ((a >= 'A') && (a <= 'Z')))
        return 1;
    else
        return 0;
}
char capitalSymbol(char a)
{
    if (isEnglishCharacter(a))
    {
        if ((a >= 'a') && (a < 'z'))
            return (a - ('a' - 'A')); //Формула, за от малка буква към голяма. Дано Армянов не се издразни
        else
            return a;
    }
    else
    {
        cout << "Error! Not English Letter" << endl;
        return -1;
    }
}
bool isPrimal(int num, unsigned short counter, bool isPrime)
{
    for (size_t i = 1; i <= 1000000; ++i)
    {
        counter = 0;
        for (size_t j = 1; j <= i; ++j)
        {
            if (i % j == 0)
                ++counter;
        }
        if (counter <= 2)
        {
            if (num == i)
                isPrime = true;
            cout << i << " ";
        }
    }
    cout << endl;
    if (isPrime)
        return 1;
    else
        return 0;
}
void powerOfTwo(unsigned int n)
{
    for (size_t i = 1; i <= n; ++i)
    {
        cout << i * i << " ";
    }
}
void f9(unsigned n, unsigned m)
{
    for (size_t i = 1; i <= n; i += 2)
    {
        cout << pow(i, m) << " ";
    }

    for (size_t i = 2; i <= n; i += 2)
    {
        cout << i % m << " ";
    }
}
unsigned short takeDigit(unsigned long n)
{
    return n % 10;
}
int sumOfDigits(unsigned long n)
{
    unsigned short sum = 0;
    do
    {
        sum += takeDigit(n);
        n /= 10;
    } while (n != 0);
    return sum;
}
unsigned short lenghtOfNumber(long int n)
{
    unsigned short lenght = 0;
    do
    {
        ++lenght;
        n /= 10;
    } while (n != 0);
    return lenght;
}
bool isPalindrom(long int n)
{
    unsigned short halfLenght = lenghtOfNumber(n) / 2;
    unsigned short lenght = lenghtOfNumber(n) - 1;
    unsigned short firstDigit, lastDigit;
    for (size_t i = 1; i <= halfLenght; ++i)
    {
        firstDigit = (n / (pow(10, lenght)));
        lastDigit = (n % 10);
        if (firstDigit != lastDigit)
        {
            return 0;
        }
        n = n - i * pow(10,lenght);
        n /= 10;
        lenght -= 2;
    }
    return 1;
}
int permutation(unsigned n)
{
    unsigned mul = 1;
    for (size_t i = 1; i <= n; ++i)
    {
        mul *= i;
    }
    return mul;
}
void fibonacci(unsigned short n)
{
    const unsigned short fib0 = 0;
    const unsigned short fib1 = 1;
    unsigned buff1, buff2, buff3;
    buff1 = fib0;
    buff2 = fib1;
    for (size_t i = 0; i < n; ++i)
    {
        if (i == 0)
            cout << buff1 << " ";
        if (i == 1)
            cout << buff2 << " ";
        if (i > 1)
        {
            buff3 = buff2;
            buff2 += buff1;
            buff1 = buff3;
            cout << buff2 << " ";
        }
    }
}
void isPrime(unsigned n)
{
    const unsigned long long size = 2E8;
    unsigned short counter, primenum = 0;
    for (size_t i = 2; i <= size; ++i)
    {
        counter = 0;
        for (size_t j = 1; j <= i; ++j)
        {
            if (i % j == 0)
            {
                ++counter;
            }
        }
        if (counter == 2)
        {
            cout << i << " ";
            ++primenum;
        }
        if (primenum == n)
            i = size;
    }
}
void PrimeAndPow3(unsigned n)
{
    const unsigned short cube = 3;
    unsigned pow;
    unsigned short counter;
    unsigned short remainder;
    for (size_t i = 1; i <= n; ++i)
    {
        pow = 1;
        counter = 0;
        for (size_t j = 1; j <= i; ++j)
        {
            remainder = i % j;
            if (remainder == 0)
                ++counter;
        }
        if (counter <= 2)
        {
            for (size_t j = 0; j < cube; ++j)
            {
                pow *= i;
            }
            cout << pow << " ";
        }
    }
}
void intervalPrime(unsigned n, unsigned m)
{
    unsigned short counter;
    unsigned short remainder;
    for (size_t i = n; i <= m; ++i)
    {
        counter = 0;
        for (size_t j = 1; j <= i; ++j)
        {
            remainder = i % j;
            if (remainder == 0)
                ++counter;
        }
        if (counter <= 2)
            cout << i << " ";
    }
}

int main()
{
    /*Задача 1: Напишете фунцкия, която намира максимума на 2 цели числа. - max(int a, int b).*/
    /*{
        int a, b;
        cin >> a >> b;
        cout << "Max number is: " << max(a, b) << endl;
    }*/

    /*Задача 2: Напишете фунцкия, която намира максимума на 2 реални числа. - max(double a, double b).*/
    /*{
        double a, b;
        cin >> a >> b;
        cout << "Max number is: " << max(a, b) << endl;
    }*/

    /*!!!  На нас ни е позволено да правим фунцкии с едно и също име. Въпроса е да са от различни типове. Долу функцията - комбинация от първа и втора задача,
    за a,b след дефиницията им, като викнем max(a, b), то ще викне int max..., а при c,d след дефиницията, като викнем max(c,d), ще викне double max...
    Това е защото a,b са INT!, а c,d са DOUBLE!, следователно ще викнат фунцкийте отговарящи на типа им. Ако сменим c,d да са INT, то max(c,d) ще викне int max.
    И същото за а,b - ако ги сменим на double, max(a,b) ще викне double max. !!!*/
    /*{
        int a, b;
        cin >> a >> b;
        cout << "Max number is: " << max(a, b) << endl;

        double c, d;
        cin >> c >> d;
        cout << "Max number is: " << max(c, d) << endl;
    }*/

    /*Задача 3: Напишете фунцкия, която намира максимума на 3 числа.*/
    /*{
        double a, b, c;
        cin >> a >> b >> c;
        cout << "Max number: " << max(a, b, c) << endl;
    }*/
    /*!!! Тук виждаме, че фунцкията ще извикне правилно, онази която отговаря на условието - която може да работи с 3 променливи, макар че имаме два
    double max...*/

    /*Задача 4: Напишете фунцкия, която намира максимума на 4 числа.*/
    /*{
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << "Max number: " << max(a, b, c, d) << endl;
    }*/

    /*Задача 5: Напишете функция, която параметър от тип char проверява дали този символ е от английската азбука.*/
    /*{
        char ctr;
        cin >> ctr;
        cout << (isEnglishCharacter(ctr) ? "Yes" : "No") << endl;
    }*/

    /*Задача 6: Напишете функция, която по параметър от тип char проверява даи този символ e буква от английската азбука, ако не е - извежда съобщение за грешка
    ако е малка буква, извежда нейната съответна главна, а ако е главна - извежда самата буква.*/
    /*{
        char sym;
        cin >> sym;
        cout << capitalSymbol(sym) << endl;
    }*/

    /*Задача 7: Напишете фунцкия, която проверява дали дадено число е просто. Използвайте фунцкията, за да покажете всички прости числа в интервала[1, 1 000 000]*/
    /*{
        unsigned number;
        unsigned short counterForDividers = 0;
        bool isPrimeNum = false;
        cin >> number;
        cout << ((isPrimal(number, counterForDividers, isPrimeNum) ? "Your number is Prime." : "Your number is not prime.")) << endl;
    }*/

    /*Задача 8: Напишете функция, която по даден параметър N, показва всички втори степени на числата в интервала [1, N]*/
    /*{
        unsigned n;
        cin >> n;
        powerOfTwo(n);
    }*/

    /*Задача 9: Напишете фукция, която приема числата N и M и показва всички нечетни числа в интервала [1, N] на степен M,
    а след това показва всички четни числа по модул M*/
    /*{
        unsigned n, m;
        cin >> n >> m;
        f9(n, m);
    }*/

    /*Задача 10: Напишете фунцкия, която приема цяло положително число и връща сбора на цифрите му. Проверете вярността на функцията.*/
    /*{
        unsigned long number;
        cin >> number;
        cout << sumOfDigits(number);
    }*/

    /*Задача 11: Едно число е палиндром, ако числото е написано с цифрите на , но в обратен ред е равно на числото .
    Да се напише фунцкия, която проверява дали естествено положително число е палиндром. -> FUCKING HAAAAAARD. Можеше мнооого по-лесно(погледнах кода на Ясен)*/
    /*{
        long int n;
        cin >> n;
        cout << (isPalindrom(n) ? "Yup" : "Nope");
    }*/

    /*Задача 11.5: Напишете фунцкия, която приема цяло положително число n и връщан стойността на израза n! */
    /*{
        unsigned n;
        cin >> n;
        cout << permutation(n);
    }*/

    /*Задача 12: Напишете фунцкия, която приема един параметър n и показва първите n члена на редицата на Фибоначи.
    Бележка: Fn = Fn-1 + Fn-2 където F0 = 0, F1 = 1*/
    /*{
        unsigned short n;
        cin >> n;
        fibonacci(n);
    }*/

    /*Задача 13: Напишете фунцкия, която приема цяло, положително число n, и показва на конзоалта първите n прости числа.*/
    /*{
        unsigned n;
        cin >> n;
        isPrime(n);
    }*/

    /*Задача 14: Напишете фунцкия, която чете цяло, положително число от конзолата upperBount и показва всички 3ти степени на числата по-малки от него и са прости*/
    /*{
        unsigned n;
        cin >> n;
        PrimeAndPow3(n);
    }*/

    /*Задача 15: Напишете функция, която приема две цели, положителни числа m,n от конзолата и показва всички прости числа в интервала [m, n]*/
    /*{
        unsigned int n, m;
        cin >> n >> m;
        intervalPrime(n, m);
    }*/
}