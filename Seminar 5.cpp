// Seminar 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://github.com/Yabonev/FMI-UP-2019-2020/blob/master/Practices/Practice%2007/Arrays.pdf

#include <iostream>

using namespace std;

const short Byte = 8;
void fillArrWBit(int arr[], short size, int n)
{
    for (size_t i = 0; i < size; ++i)
    {
        arr[i] = ((n & (1 << i)) ? 1 : 0);
    }
}
void printBitArr(int arr[])
{
    int num;
    cin >> num;
    fillArrWBit(arr, Byte, num);
    for (int i = Byte - 1; i >= 0; --i)
    {
        unsigned short fourBit = i + 1;
        if (fourBit == 4)
            cout << " ";
        cout << arr[i];
    }
}
void isBitUp(int arr[])
{
    unsigned short ind;
    cin >> ind;
    for (int i = 0; i < Byte; ++i)
    {
        if (i == ind)
            cout << arr[i];
    }
}

void addInArr(int arr[], int n)
{
    int el;
    for (size_t i = 0; i < n; ++i)
    {
        cin >> el;
        arr[i] = el;
    }
}
void printArr(int arr[], int n)
{
    addInArr(arr, n);
    for (size_t i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}

const short SizeOfTheArray = 5;
const long bigSizeOfArray = 1 * (1 << 8);
double average(int arr[])
{
    int Sum = 0;
    double average;
    for (size_t i = 0; i < SizeOfTheArray; ++i)
    {
        Sum += arr[i];
    }
    average = Sum / 5.0;
    return average;
}
void printSquareOfNumbers(int arr[])
{
    int sqrOfNum;
    cout << "Square of the numbers in the array: ";
    for (size_t i = 0; i < SizeOfTheArray; ++i)
    {
        sqrOfNum = arr[i] * arr[i];
        cout << sqrOfNum << " ";
    }
    cout << endl;
}
void printOddFromArray(int arr[])
{
    unsigned short remainder;
    cout << "Odd numbers: ";
    for (size_t i = 0; i < SizeOfTheArray; ++i)
    {
        remainder = arr[i] % 2;
        if (remainder == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
void printArrayBackwards(int arr[])
{
    cout << "The array backwards: ";
    for (int i = SizeOfTheArray - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int minimalElement(int arr[])
{
    int min = arr[0];
    for (size_t i = 1; i < SizeOfTheArray; ++i)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int findIndex(int arr[]) // ! return нещо, веднага прекратява цикъла и фунцията като цяло.
{
    int wanted;
    cin >> wanted;
    for (size_t i = 0; i < SizeOfTheArray; ++i)
    {
        if (wanted == arr[i])
            return i;
    }
    return -1;
}
int findSecondMin(int arr[])
{
    const short strtPnt = 0;
    unsigned short min, sMin, indOfMin, pnt;
    min = arr[strtPnt];
    for (size_t i = 0; i < SizeOfTheArray; ++i)
    {
        if (min > arr[i])
        {
            min = arr[i];
            indOfMin = i;
        }
    }
    sMin = arr[strtPnt];
    pnt = strtPnt;
    while ((sMin == min) && pnt != SizeOfTheArray - 1)
    {
        ++pnt;
        sMin = arr[pnt];
    }
    for (size_t i = 0; i < SizeOfTheArray; ++i)
    {
        if ((sMin > arr[i]) && (arr[i] != min))
            sMin = arr[i];
    }
    return sMin;
}
int substrOddFromEven(int arr[])
{
    int sumO, sumE, substr;
    sumO = 0;
    sumE = 0;
    unsigned short remainder;
    for (size_t i = 0; i < SizeOfTheArray; ++i)
    {
        remainder = arr[i] % 2;
        if (remainder == 0)
        {
            sumE += arr[i];
        }
        else
            sumO += arr[i];
    }
    substr = sumE - sumO;
    return substr;
}
int checkForSameEl(int arr[])
{
    int numOfEl;
    cin >> numOfEl;
    short el;
    for (size_t i = 0; i < numOfEl; ++i)
    {
        cin >> el;
        arr[i] = el;
    }
    for (size_t i = 0; i < numOfEl; ++i)
    {
        for (size_t j = 0; j < numOfEl; ++j)
        {
            if ((i != j) && (arr[i] == arr[j]))
                return arr[i];
        }
    }
    cout << "No same elements!" << endl;
    return 0;
}
void printElBiggerThanRight(int arr[])
{
    int numEl, el, checker;
    cin >> numEl;
    for (size_t i = 0; i < numEl; ++i)
    {
        cin >> el;
        arr[i] = el;
    }
    checker = arr[0];
    for (size_t i = 1; i < numEl; ++i)
    {
        if (checker > arr[i])
            cout << checker << " ";
        checker = arr[i];
    }
}
void twoArrSameEl(int arr1[], int arr2[])
{
    unsigned short numEl;
    cin >> numEl;
    int el;
    for (size_t i = 0; i < numEl; ++i)
    {
        cin >> el;
        arr2[i] = el;
    }
    for (size_t i = 0; i < numEl; ++i)
    {
        for (size_t j = 0; j < 5; ++j)
        {
            if (arr2[i] == arr1[j])
                cout << arr1[j] << " ";
        }
    }
    cout << endl;
}
int twoElAdd(int arr[])
{
    unsigned short numEl;
    cin >> numEl;
    int el;
    for (size_t i = 0; i < numEl; ++i)
    {
        cin >> el;
        arr[i] = el;
    }
    int result;
    cin >> result;
    for (size_t i = 0; i < numEl; ++i)
    {
        size_t j = i + 1;
        for (j; j < numEl; ++j)
        {
            int sum = arr[i] + arr[j];
            if (sum == result)
            {
                cout << arr[i] << " " << arr[j] << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1" << endl;
    return -1;
}


int main()
{
    /*Задача 0: Прочетете int от клавиатурата, Вземете младшите му 8 бита в отделни променливи и ги принтирайте(без -> със масив)*/
    //{
    //    
    //    int bitArr[Byte];
    //    printBitArr(bitArr);
    //    cout << endl;
    //    /*Задача 1 (продължение на 0) Въведете число, изведете бита на този индекс от числото от задача 0.*/
    //    isBitUp(bitArr);
    //}

    /*Задача 2: Въведете n, въведете масив с n елемента и го принтирайте */
    /*{
        const unsigned long size = 1 * (1 << 8);
        int n;
        cin >> n;
        int arr[size];
        printArr(arr, n);
    }*/

    /*В слеващите задачи ще предполагаме, че имаме вход на масив, който изглежда така:[1,2,3,4,5]*/
    int arr[SizeOfTheArray] = { 1, 2, 3, 4, 5 };
    //{
    //    /*Задача 3: Намерете средноаритметичното на елементите от масив.*/
    //    cout << "Average: " << average(arr) << endl;

    //    /*Задача 4: Върнете масив с елементите вдиганти на втора степен. */
    //    printSquareOfNumbers(arr);

    //    /*Задача 5: Изведете нечетните елементи от масив.*/
    //    printOddFromArray(arr);

    //    /*Задача 6: Обърнете елементите на масив*/
    //    printArrayBackwards(arr);

    //    /*Задача 7: Намерете минималния елемент на масив*/
    //    cout << "Minimal element: " << minimalElement(arr) << endl;

    //    /*Задача 8: Намерете индекса на първото срещане на даден елемент (иначе -1)*/
    //    cout << "First index of the number you searched: " << findIndex(arr) << endl;

    //    /*Задача 9: Намерете втория най-малък елемент от масив*/
    //    cout << "Second smallest number in the array: " << findSecondMin(arr) << endl;

    //    /*Задача 11: Извадете разликата на сумите от четните и нечетните числа в масив*/
    //    cout << "The substraction of odd numbers from even numbers is: " << substrOddFromEven(arr) << endl;

    //}
    ///*Задача 10: Намерете първия повтарящ се елемент в масив( ако няма принтирайте, че няма)*/
    int arrWeMake[bigSizeOfArray];
    //cout << "Same elements: " << checkForSameEl(arrWeMake) << endl;

    ///*Задача 12: Извадете всички елементи в масив, котио са по-големи от всички елементи вдясно от тях.*/
    //printElBiggerThanRight(arrWeMake);

    ///*Задача 13: Намерете общите елементи в два масива*/
    //twoArrSameEl(arr, arrWeMake);

    ///*Задача 14: Намерете два елемента в масив, които се сумират до дадено число (ако няма -1, -1)*/
    //twoElAdd(arrWeMake);
}
