// Seminar 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://github.com/Yabonev/FMI-UP-2019-2020/blob/master/Practices/Practice%2009/TASKS_algorithmsOnArrays.pdf

#include <iostream>

using namespace std;
const unsigned long sizeArr = 1 * (1 << 10);
void fillArray(int arr[], unsigned int q)
{
    int element;
    for (size_t i = 0; i < q; ++i)
    {
        cin >> element;
        arr[i] = element;
    }
}
void swapAtIndices(int arrayOfNumbers[], unsigned int q, unsigned int firstIn, unsigned int secondIn)
{
    fillArray(arrayOfNumbers, q);
    int buffer;
    for (size_t i = 0; i < q; ++i)
    {
        if (i == firstIn)
        {
            for (size_t j = 0; j < q; ++j)
            {
                if (j == secondIn)
                {
                    buffer = arrayOfNumbers[i];
                    arrayOfNumbers[i] = arrayOfNumbers[j];
                    arrayOfNumbers[j] = buffer;
                    return;
                }
            }
        }
    }
}
void printArray(int arr[], unsigned int q)
{
    for (size_t i = 0; i < q; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Bubble Sort(actual);
void bubbleSort(int resultArray[], unsigned int size) 
{
    int element;
    int buffer;
    for (size_t i = 0; i < size; ++i)
    {
        cin >> element;
        resultArray[i] = element;
        if (i > 0)
        {
            for (size_t j = 0; j < i; ++j)
            {
                if (resultArray[j] > resultArray[i])
                {
                    buffer = resultArray[j];
                    resultArray[j] = resultArray[i];
                    resultArray[i] = buffer;
                }
            }
        }
    }
    printArray(resultArray, size);
}
// Insertion Sort
void insertionSort(int resultArray[], unsigned int size)
{
    int element, buffer;
    for (size_t i = 0; i < size; ++i)
    {
        cin >> element;
        resultArray[i] = element;
        if (i > 0)
        {
            for (size_t j = i; j > 0; --j)
            {
                if (resultArray[j] < resultArray[j - 1])
                {
                    buffer = resultArray[j];
                    resultArray[j] = resultArray[j - 1];
                    resultArray[j - 1] = buffer;
                }
            }
        }
    }
    printArray(resultArray, size);
}
bool checkIfExist(int resultArray[], unsigned int size)
{
    for (size_t i = 0; i < size; ++i)
    {
        if (resultArray[size] == resultArray[i])
            return 1;
    }
    return 0;
}
void elementCounterArray(int arrayOfNumbers[], int counterArray[], unsigned size)
{
    for (size_t i = 0; i < size; ++i)
    {
        if (checkIfExist(arrayOfNumbers, i))
        {
            for (size_t j = 0; j < i; ++j)
            {
                if (arrayOfNumbers[i] == arrayOfNumbers[j])
                {
                    counterArray[j] += 1;
                    counterArray[i] = 0;
                }

            }
        }
        else
        {
            counterArray[i] = 1;
        }
    }
}
int mode(int arrayofNumbers[], unsigned int size)
{
    int counterArray[sizeArr];
    int modeCounter;
    int modeInd;
    int mode;
    fillArray(arrayofNumbers, size);
    elementCounterArray(arrayofNumbers, counterArray, size);
    modeCounter = counterArray[0];
    modeInd = 0;
    for (size_t i = 1; i < size; ++i)
    {
        if (modeCounter < counterArray[i])
        {
            modeCounter = counterArray[i];
            modeInd = i;
        }
    }
    return arrayofNumbers[modeInd];
}
void modes(int arrayOfNumbers[], unsigned int size, int modes[], unsigned int& modesSizе)
{
    modesSizе = 0;
    fillArray(arrayOfNumbers, size);
    elementCounterArray(arrayOfNumbers, modes, size);
    for (size_t i = 0; i < size; ++i)
    {
        if (modes[i] > 1)
        {
            cout << arrayOfNumbers[i] << " ";
            ++modesSizе;
        }
    }
    cout << endl;
}

int main()
{
    int array[sizeArr];
    int modesArray[sizeArr];
    unsigned quantity, firstIn, secondIn, modesSize;
    /*Задача 1: Напишете функция bool swapAtIndices(int arrayOfNumbers[], unsigned int i, unsigned int j), която разменя стойностите на елементите
    с индекси i и j. Пробвайте дали работи правилно. Ккакво става, ако някои от индексите е извън максмиалния индкес за този масив.*/
    /*{
        cin >> quantity >> firstIn >> secondIn;
        swapAtIndices(array, quantity, firstIn, secondIn);
        printArray(array, quantity);
    }*/
    //Ако сложим индекс извън максимума, тогава няма да има размяна.

    /*Задача 2: Напишете функция void readAndSort(int resultArray[], unsigned int size), която приема празен масив resultArray и size-брой елементи
    които трябва да прочете от конзолата. След като завърши фунцкията, масивът трябва да е запълнен със size числа, които са сортирани във 
    възходящ ред. Сортирането да се случва още по време на четенето от конзолата. Използвайте Insertion sort*/
    /*{
        cin >> quantity;
        readAndSort(array, quantity); 
    }*/

    /*Задача 4: Прочетете число цяло, положително число N, а след това прочетете N числа, Напишете фунцкия 
    int mode(int arrayOfNumbers[], unsigned int size), който наимра модата на редицата от числа. Може да считате, че въвдените числа,
    ще имат само 1 мода.*/
    /*{
        cin >> quantity;
        cout << mode(array, quantity) << endl;
    }*/

    /*Задача 5: Прочетете число, цяло положителноо число N, а след това прочетете N числа.
    Напишете фунцкия void modes(int arrayOfNumbers[], unsigned int size, int modes[], unsigned int &modesSize),
    който намира всички моди на редица от числа. За какво се използват modes и modesSize*/
    /*{
        cin >> quantity;
        modes(array, quantity, modesArray, modesSize);
        cout << modesSize << endl;
    }*/
} 