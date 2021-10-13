// Seminar 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://github.com/Yabonev/FMI-UP-2019-2020/blob/master/Practices/Practice%2010/Pointers.pdf
//Поинтери и динамична памет.

#include <iostream>
using namespace std;

const unsigned long sizeArr = 1 * (1 << 10);
void printAddress(int* array, unsigned size)
{
    for (size_t i = 0; i < size; ++i)
    {
        cout << &array[i] << endl;
    }
    cout << endl;
}
void swap(int* a, int* b)
{
    cout << *a << endl;
    cout << *b << endl;
    int t = *a;
    *a = *b;
    *b = t;
    cout << *a << endl;
    cout << *b << endl;
}
void readArray(int* array, unsigned size)
{
    int element;
    for (size_t i = 0; i < size; ++i)
    {
        cin >> element;
        array[i] = element;
    }
}
void printArray(int* array, unsigned size)
{
    for (size_t i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int* alloc(unsigned size)
{
    int* arr = new(nothrow)int[size];
    readArray(arr, size);
    printArray(arr, size);
    return arr;
}
void free(int* array)
{
    delete[] array;
}


void mySort(int* array, unsigned size, bool ascending)
{
    int buffer;
    if (!ascending)
    {
        for (size_t i = 0; i < size; ++i)
        {
            for (size_t j = i + 1; j < size; ++j)
            {
                if (array[i] < array[j])
                {
                    buffer = array[i];
                    array[i] = array[j];
                    array[j] = buffer;
                }
            }
        }
    }
    else
    {
        for (size_t i = 0; i < size; ++i)
        {
            for (size_t j = i + 1; j < size; ++j)
            {
                if (array[i] > array[j])
                {
                    buffer = array[i];
                    array[i] = array[j];
                    array[j] = buffer;
                }
            }
        }
    }
    
}
int main()
{
    int array[sizeArr];
    unsigned int size;
    /*Задача 1: Изведете адеса на променлива от тип: int, char, double, float, bool*/
    /*{
        int a;
        char b;
        double c;
        float d;
        bool e;
        int* pa = &a;
        char* pb = &b;
        double* pc = &c;
        float* pd = &d;
        bool* pe = &e;
        cout << &pa << endl;
        cout << &pb << endl;
        cout << &pc << endl;
        cout << &pd << endl;
        cout << &pe << endl;
    }*/

    /*Задача 2: Дефинирайте масив с N елемента на статичната и автоматичната памет. Изведете а екрана последователно адресите и срещу тях
    стойностите на всяка клетка в масива. Напишете фунцкията void printAddress(int* array, unsigned size)*/
    /*{
        cin >> size;
        printAddress(array, size);
    }*/

    /*Задача 3: Напишете фунцкия void swap(int* a, int* b), която разменя стойностите на две променливи по подадени адреси. */
    /*{
        int a, b;
        int* pa = &a;
        int* pb = &b;
        cin >> a >> b;
        swap(pa, pb);
    }*/

    /*Задача 4: Напишете функция void readArray(int* array, unsigned size), която по подаден поинтер към масив с це;и числа и размер size
    прочита от клавиатурата size на брой числа и ги записва в масива.
      Задача 5: Напишете функцията void printArray(int* array, unsigned size), която по подаден поинтер към масив с цели числа и размер size, 
      изкарва на екрана size на брой числа от масива.*/
    /*{
        cin >> size;
        printArray(array, size);
    }*/

    /*Задача 6: Напишете фунцкиите:
        -int* alloc(unsigned size), която заделя динамично памет и връща поинтер кум заделената памет. 
        -void free(int* array), която зтрива динамично заделената памет за масива
      Задача 7: Въведете цяло положително число N. Задделете димично масив с N елемента.
      Можете ли да използвате фунцкиите от задача 4 и 5, за да запиште и изведете числата от и в масива.*/
    /*{
        cin >> size;
        int* arr = alloc(size);
        free(arr);
    }*/

    /*Задача 8: За въведените числа в динамичния памет масив от задача 6, сортирайте го с любимия си сортиращ алгоритъм. Напишете фунцията
    void mySort(int* array, unsigned size, bool ascending), която сортира масива във възходящ ред, ако променливата ascending е равна на true.
    И в низходящ, ако е false.*/
    /*{
        bool ascending = 0;
        cin >> size;
        int* arr = alloc(size);
        mySort(arr, size, ascending);
        printArray(arr, size);
        free(arr);
    }*/
}