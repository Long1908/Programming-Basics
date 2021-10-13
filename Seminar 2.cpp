// Seminar 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://github.com/Yabonev/FMI-UP-2019-2020/tree/master/Practices/Practice%2004

#include <iostream>

using namespace std;

int main()
{
	/*Задача 1: Прочетете 2 цели числа 'а', 'б' от конзолата, където 'а' е 32 битово число без знак, а 'б' е число в интервала [0, 31].
	Изпишете на конзолата дали има 1 на 'б'-ти бит в двоичното преставяне на числото 'а'. Броим битовете отдясно наляво като запошваме от 0.*/

	//{
	//	unsigned a, b;
	//	cout << "Please enter a positive integer and then enter a number corresponding to the 32 bits of the first inteter: ";
	//	cin >> a >> b;
	//	if ((b >= 32) || (b < 0))
	//	{
	//		cerr << "The bit that you have chosen is out of our scale." << endl;
	//		return -1;
	//	}
	//	else
	//	{
	//		unsigned inspNum = 1 << b;
	//		bool thereIsOne = ((a & inspNum) == inspNum) ? 1 : 0;
	//		cout << thereIsOne << endl;
	//	};
	//}

	/*Задача 2: Прочетете 2 цели числа 'а', 'n' от конзолата, където 'а' е 32 битово число без знак, а 'n' е число в нтервала [0, 31].
	Изпишете на конзолата числото 'с', което се получава като направим 'n'-тия бит на числото 'а' единица.*/

	//{
	//	unsigned number, bit, result;
	//	cout << "Please enter the number and then the bit that you want you want to change to 1 in the chosen number: ";
	//	cin >> number >> bit;
	//	if ((bit > 32) || (bit < 0))
	//		cerr << "Error! You inputed an invalid bit to work with!" << endl;
	//	else
	//	{
	//		result = (number | (1 << bit));
	//		cout << "The number that you get after changing the " << bit << "- bit is: " << result << endl;
	//	}
	//}

	/*Задача 3: Прочетете 2 цели числа 'а', 'n' от конзолата, където 'а' е 32 битово число без знак, а 'n' е число в нтервала [0, 31].
	Изпишете на конзолата числото 'с', което се получава като направим 'n'-тия бит на числото 'а' нула.*/

//{
//	unsigned number, bit, result;
//	cout << "Please enter the number and then the bit that you want you want to change to 1 in the chosen number: ";
//	cin >> number >> bit;
//	if ((bit > 32) || (bit < 0))
//		cerr << "Error! You inputed an invalid bit to work with!" << endl;
//	else
//	{
//		unsigned mask = 1;
//		mask = mask << bit;
//		mask = ~mask;
//		result = (number & mask);
//		cout << "The number that you get after changing the " << bit << "-bit is: " << result << endl;
//	}
//}

/*Задача 4: Прочетете от конзолата 3 числа 'а', 'x', 'y', където 'а' е 64 битово число без знак, а 'x' и 'y' е число в нтервала [0, 63].
Изпишете на конзолата числото 'с', което се получава като се разменят 'x'-тия и 'y'-тия бит на числото 'а'.*/

/*{
	unsigned long number;
	unsigned short bit1, bit2;
	cout << "Please enter a number and the two bits you want to swap.\nReminder the scope of bits we are working with is [0, 63]: ";
	cin >> number >> bit1 >> bit2;
	if ((bit1 > 63) || (bit2 > 63))
	{
		cerr << "Error. The values of the bit that you entered is not valid. Terminating program!" << endl;
		return -1;
	}
	else
	{
		unsigned short mask = 1;
		if (((number >> bit1) & mask) == ((number >> bit2) & mask))
			cout << number;
		else
		{
			unsigned mask1, mask2;
			if (((number >> bit1) & mask) == 1)
			{
				mask1 = ~(mask << bit1);
				number = (number & mask1);
				mask2 = (mask << bit2);
				number = (number | mask2);
				cout << number;
			}
			else
			{
				mask1 = (mask << bit1);
				number = (number | mask1);
				mask2 = ~(mask << bit2);
				number = (number & mask2);
				cout << number;
			}
		}
	}
}*/

/*Задача 5 (Задача 3 от семинар 1): Прочетете от конзолата числото, 'а' е 64 битово число без знак и изкарайте на конзолата числото 'с',
с което се получава като размените високите и ниските битове на 'а'.
Помощ: Пример в двоичен запис на 4-битови числа:
	01 10 -> 10 01
	11 01 -> 01 11*/

	//{
	//	cout << sizeof(unsigned long) << endl; // 4byte = 32bit!!!
	//	cout << sizeof(unsigned long long) << endl; // 8byte = 64bit!!!
	//	//Aко ползваме long само, ще ни даде грешка, затова работим с long long- what a shitty PC :)
	//	unsigned long long a, mask1, mask2, c;
	//	cout << "Please enter the number: " << endl;
	//	cin >> a;
	//	mask1 = (a << 32);
	//	mask2 = (a >> 32);
	//	c = (mask1 | mask2);
	//	cout << c;
	//}

	/*Задача 6: Прочетете 2 числа 'а', 'б', където 'а' и 'б' са 32 битови, без знак и проеверте дали те са едно и също число само с побитови операции.*/

	/*{
		unsigned long a, b;
		cin >> a >> b;
		((a ^ b) == 0) ? cout << "Yup" << endl : cout << "Nope" << endl;
	}*/

	/*Задача 7: Прочетете 64 битово число 'а' без знак и изпишете на конзолата длаи е степен на 2 или не. */

	/*{
		unsigned long long a;
		cin >> a;
		if (a == 0)
			cout << "Nope" << endl;
		else
		{
			cout << (((a ^ a - 1) == ((a << 1) - 1)) ? "Yup" : "Nope") << endl;
		}
	}*/

	/*Задача 8: Прочетете 2 цели числа от конзолата 'а', 'б', където 'а' е 64 битово число без знак, а 'б' е число в интервала[0, 63].
	Завъртете наляво(надясно) 'б' бита от 'а'.*/

	/*{
	const unsigned size = sizeof(unsigned long long) * 8;
	unsigned long long a , c;
	unsigned short b;
	cin >> a >> b;
	unsigned long long mask = (a >> (size - b));
	unsigned long long buff = (a << b);
	c = (mask | buff);
	cout << c;
	}*/

	
	return 0;
}
