// Seminar 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://github.com/yasenAlexiev/FMI-UP-2019-2020/blob/master/Practices/Practice%2012/recursion.md

#include <iostream>
using namespace std;

int firstNSum(int N)
{
    if (N > 0)
        return N + firstNSum(N - 1);
    else
        return N;
}

int main()
{
    /*Задача 1: Напишете фунцкия int firstNSum(int N), която намиера сумата на пурвите N числа - рекурсивно.*/
    {
        int n;
        cin >> n;
        cout << firstNSum(n) << endl;
    }
}