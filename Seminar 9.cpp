// Seminar 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://github.com/Yabonev/FMI-UP-2019-2020/blob/master/Practices/Practice%2011/cstrings_tasks.pdf

#include <iostream>
using namespace std;

int main()
{
	char** text = new(nothrow)char*[20];
	for (size_t i = 0; i < 20; ++i)
	{
		text[i] = new(nothrow)char[20];
	}
	for (size_t i = 0; i < 20; ++i)
	{
		if (!text[i])
			return -1;
	}
	if (!text)
		return -1;

	for (size_t i = 0; i < 20; ++i)
	{
		cin.getline(text[i], 20, ' ');
	}
	for (size_t i = 0; i < 20; ++i)
	{
		cout << text[i] << " ";
	}
	cout << endl;
	for (size_t i = 0; i < 20; ++i)
	{
		cout << strlen(text[i]) << " ";
	}
	for (size_t i = 0; i < 20; ++i)
	{
		delete[] text[i];
	}
	delete[] text;
}