// Seminar 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Here we are going to practice from easy to hard everything from https://github.com/Yabonev/FMI-UP-2019-2020/blob/master/Practices/Practice%2003/practice_3%20(1).pdf*/

#include <iostream>

using namespace std;

int main()
{
    //Задача 1: По въведено цяло число, изкарайте на екрана неговата абсолютна стойност.

    //{
    //    int number; //Declaration of a whole integer
    //    cout << "Please enter an integer: "; //Printing out the text, and telling the user to write the number he wants.
    //    cin >> number; //Entering a value for the integer
    //    if (number < 0) //checking if the value is below 0. If it's bellow zero we will make it a positive integer 
    //    {
    //        cout << "The absolute value of the integer is: " << -number << endl;
    //    }
    //    else //if 'number' is not negative, then we just print it out the wat it is
    //    {
    //        cout << "The absolute value of the integer is: " << number << endl;
    //    }
    //    
    //}

    ////Задача 2: От клавиатурата се въвежда цяло число. Определете дал е четно или нечетно. Изпишете на екрана правиланта информация за това.

    //{
    //    int number; 
    //    cout << "Please enter an integer: ";
    //    cin >> number;
    //    int remainder = number % 2;
    //    //NOTE! An integer has a capacity of 32 bits only, which generally speaking it can take <=2 147 483 648. Something above that will crash.
    //    if (remainder == 0)
    //        cout << "The number is even." << endl;
    //    else if (remainder == 1)
    //        cout << "The number is odd." << endl;
    //}

    ////Задача 3: Напише програма, която разменя високите с нискирте битове на число: Пример при вход 0x1234 изходът е 0x3412

    //{
    //}

    //Задача 4: По въведени координати на точки в равнината, намерете дистанцията между тях.

    //{
    //    int cx1, cy1; //coordinates for the first point
    //    int cx2, cy2; //coordinates for the second point
    //    cout << "Please enter coordinates for the first dot." << endl;
    //    cin >> cx1 >> cy1;
    //    cout << "Please enter coordinates for the second dot." << endl;
    //    cin >> cx2 >> cy2;
    //    double distance = sqrt((cx2 - cx1) * (cx2 - cx1) + (cy2 - cy1) * (cy2 - cy1));
    //    cout << "Distance between the dots: " << distance << endl;
    //}

    ///* Задача 5: Да се състави програма, чрез която се въвеждат от клавиатурата 3 числа от интервала [-99.99 ; 99.99].
    //Програмата да извежда въведените числа във възходящ ред на стойностите им. 
    //Пример: 3.14, -2.73, 1.25
    //Изход: -2.73, 1.25, 3,14 */

    //{
    //    float fNumber, sNumber, tNumber;
    //    cout << "Please enter your three numbers between -99.99 and 99.99" << endl;
    //    cin >> fNumber >> sNumber >> tNumber;
    //    if (((fNumber < -99.99) || (fNumber > 99.99))
    //        && ((sNumber < -99.99) || (sNumber > 99.99))
    //        && ((tNumber < -99.99) || (tNumber > 99.99)))
    //        cerr << "Error! A number you input is not valid." << endl;
    //    else
    //    {
    //        if (fNumber <= sNumber && fNumber <= tNumber)
    //        {
    //            if (sNumber <= tNumber)
    //                cout << fNumber << " " << sNumber << " " << tNumber << " " << endl;
    //            else
    //                cout << fNumber << " " << tNumber << " " << sNumber << " " << endl;
    //        }
    //        else if (sNumber <= fNumber && sNumber <= tNumber)
    //        {
    //            if (fNumber <= tNumber)
    //                cout << sNumber << " " << fNumber << " " << tNumber << " " << endl;
    //            else
    //                cout << sNumber << " " << tNumber << " " << fNumber << " " << endl;
    //        }
    //        if (tNumber <= sNumber && tNumber <= fNumber)
    //        {
    //            if (sNumber <= fNumber)
    //                cout << tNumber << " " << sNumber << " " << fNumber << " " << endl;
    //            else
    //                cout << tNumber << " " << fNumber << " " << sNumber << " " << endl;
    //        }
    //    }
    //}

    /*Задача 6: Да се състави програма, чрез която се въвежда 4-цифрено естествено число от интервала [1000...9999]. От това число се формират
    2 нови 2-цифрени числа. Първото число се формира от 1-та и 4-та цифра на въведеното число. Второто число се формира от 2-ра - 3та цифра на въведено число.
    На екрана да се изведе дали 1-то ново число е по-малко <, равно = или по-голямо от 2-то число.
    Пример: 3332 Изход: по-малко (32<33)
    Пример: 1144 Изход: равни (14=14)
    Пример: 9875 Изход: по-голямо (95>87)*/

    //{
    //    int number;
    //    cout << "Please enter number: " << endl;
    //    cin >> number;
    //    if ((number < 1000) || (number > 9999))
    //    {
    //        cerr << "Your input is invalid!" << endl;
    //        return -1;
    //    }
    //    else
    //    {
    //        int copyOfNumber = number;
    //        copyOfNumber %= 1000;
    //        if (number / 1000 < copyOfNumber / 100)
    //        {
    //            cout << number / 1000 << number % 10 << " < " << copyOfNumber / 10 << endl;
    //        }
    //        else if (number / 1000 > copyOfNumber / 100)
    //        {
    //            cout << number / 1000 << number % 10 << " > " << copyOfNumber / 10 << endl;
    //        }
    //        else
    //        {
    //            if (number % 10 > (copyOfNumber / 10) % 10)
    //                cout << number / 1000 << number % 10 << " > " << copyOfNumber / 10 << endl;
    //            else if(number % 10 < (copyOfNumber / 10) % 10)
    //                cout << number / 1000 << number % 10 << " < " << copyOfNumber / 10 << endl;
    //            else
    //                cout << number / 1000 << number % 10 << " = " << copyOfNumber / 10 << endl;
    //        }
    //    }
    //}

    /*Задача 7: По въведена година, определете дали тя е високосна или не. Една година е високосна, ако се дели точно на 4, изключение правят годините,
    които се делят точно на 100. Но и тези годиним които се делят точно на 400, също са високосни.*/

    //{
    //    unsigned short year;
    //    cout << "Please enter the year you want: ";
    //    cin >> year;
    //    if (year % 4 == 0)
    //    {
    //        if (year % 100 == 0)
    //        {
    //            if(year % 400 == 0)
    //                cout << year << " is's a leap year - 366 days." << endl;
    //            else
    //                cout << year << " is's a normal year - 365 days." << endl;
    //        }
    //        else
    //            cout << year << " is's a leap year   366 days." << endl;
    //    }
    //    else
    //        cout << year << " is's a normal year - 365 days." << endl;
    //}

    /*Задача 8: По въведени 3 цели положителни числа, определете дали те са валидни страни на триъгълник. Изведете на екрана информация за това.
    Ако е валиден триъгълник, пресметнете неговото лице.*/

    //{
    //    unsigned a, b, c;
    //    cout << "Please enter the triangles sides: ";
    //    cin >> a >> b >> c;
    //    if (((a + b) <= c)
    //        || ((a + c) <= b)
    //        || ((b + c) <= a))
    //    {
    //        cerr << "The values that you entered cannot form a triangle!" << endl;
    //        return -1;
    //    }
    //    else
    //    {
    //        float halfPerimeter = (float)(a + b + c) / 2.0;
    //        float areaOfTriangle = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
    //        cout << "The area of the Triangle is : " << areaOfTriangle << endl;
    //    }
    //}

    /*Задача 9: Въведете координати на точка в равнината и установете дали тя се намира във фигурата или извън нея
        а)*/

    //{
        //    double coordX, coordY;
        //    cout << "Please enter your coordinates as followed - X Y : ";
        //    cin >> coordX >> coordY;
        //    cout << "The area that we are working with is a Rectangle, where it has a center (0,0), and faces - 10 and 6. " << endl;
        //    if (((coordX > 5) || (coordX < -5)) || ((coordY > 3) || (coordY < -3)))
        //        cout << "And you coordinates are outside the area of the rectangle." << endl;
        //    else
        //        cout << "And you coordinates are inside the area of the rectangle." << endl;
        //}

        /*b)*/
    /*{
            double coordX, coordY;
            cout << "Please enter your coordinates as followed - X Y : ";
            cin >> coordX >> coordY;
            cout << "The area that we are working with is a Circle, where it has a center (3,2) and radius 4. " << endl;
            if (((coordX - 3) * (coordX - 3) + (coordY - 2) * (coordY - 2)) <= 16)
                cout << "The point with the coordinates that you have given is inside the circle." << endl;
            else
                cout << "The point with the coordinates that you have given is outside the circle." << endl;
        }*/

        /*c)*/

    /*{
          double coordX, coordY;
          cout << "Please enter your coordinates as followed - X Y : ";
          cin >> coordX >> coordY;
          cout << "The area that we are working with is a half Circle half rectangle, where it has a center (0,0),\n on the upper x-axis is the half circle wih radius 5 and on the lower x-axis is rectangle with sides 4 and 3. " << endl;

          if (coordY >= 0)
          {
              if ((coordX * coordX + coordY * coordY) <= 25)
                  cout << "The point with the coordinates that you have given is inside the figure." << endl;
              else
                  cout << "The point with the coordinates that you have given is outside the figure." << endl;
          }
          else
          {
              if (((coordX > 2) || (coordX < -2)) || coordY < -3)
                  cout << "The point with the coordinates that you have given is outside the figure." << endl;
              else
                  cout << "The point with the coordinates that you have given is inside the figure." << endl;
          }
      }*/

    /*Задача 10: Въведете координати на точка в равнината и ако тя се намира във фигурата на бяло, изведете на екрана - Yin, ако е върху черно - Yang.
      Ако е извън фигурата, изпишете на екрана "In the chaos!!!"*/

    /*{
        double coordX, coordY;
        cout << "Please enter your coordinates as followed - X Y : ";
        cin >> coordX >> coordY;
        cout << "The area that we are working with is a the Yin and Yang symbol " << endl;
        if ((coordX * coordX + coordY * coordY) <= 36)
        {
            if (coordX >= 0)
            {
                if (((coordX - 3) * (coordX - 3) + coordY * coordY) <= 1)
                    cout << "Yang" << endl;
                else
                {
                    if (coordY < 0)
                    {
                        if (((coordX - 3) * (coordX - 3) + coordY * coordY) <= 9)
                            cout << "Yin" << endl;
                        else
                            cout << "Yang" << endl;
                    }
                    else
                        cout << "Yin" << endl;
                }
            }
            else
            {
                if (((coordX - 3) * (coordX - 3) + coordY * coordY) <= 1)
                    cout << "Yin" << endl;
                else
                {
                    if (coordY > 0)
                    {
                        if (((coordX - 3) * (coordX - 3) + coordY * coordY) <= 9)
                            cout << "Yang" << endl;
                        else
                            cout << "Yin" << endl;
                    }
                    else
                        cout << "Yang" << endl;
                }
            }
        }
        else
            cout << "In the chaos!!!" << endl;
    }*/
 
    /*Задача 11: Въвежда се от клавиатурата цяло положително число. Изведете на екрана на кой ден от седмицата съответства то.*/
    
    //{
    //    unsigned number, day;
    //    cout << "Please enter an integer to caluclate which day that would be: ";
    //    cin >> number;
    //    day = number % 7;
    //    switch (day)
    //    {
    //    case 0:
    //        cout << "Sunday" << endl;
    //        break;
    //    case 1:
    //        cout << "Monday" << endl;
    //        break;
    //    case 2:
    //        cout << "Tuesday" << endl;
    //        break;
    //    case 3:
    //        cout << "Wednesday" << endl;
    //        break;
    //    case 4:
    //        cout << "Thursday" << endl;
    //        break;
    //    case 5:
    //        cout << "Friday" << endl;
    //        break;
    //    case 6:
    //        cout << "Saturday" << endl;
    //        break;
    //    default:
    //        cout << "No such day" << endl;//Не очакваме някога да влизаме в този случаи.
    //        break;
    //    }
    //}

    /*Задача 12: В играта спортен бридж се изплозва колода от 52 карти. Те се разделят по групи както следва: 2, 3, 4, 5, 6, 7, 8, 9, 10, вале, дама, поп, асо.
    Всяка от тях има 4 разновидности: спатия, каро, купа и пика.
    Да се състави програма, която при въвеждане на естествено число от интервала [1 - 52] извежда точната карта от колодата*/

    //{
    //    unsigned short number;
    //    cout << "Please pick a number from the deck of cards: " << endl;
    //    cin >> number;
    //    if (number > 52)
    //    {
    //        cerr << "Invalid number. Not that many cards." << endl;
    //        return -1;
    //    }
    //    else
    //    {
    //        unsigned card;
    //        card = number % 13;
    //        switch (card)
    //        {
    //        case 0:
    //            cout << "Ace of";
    //            break;
    //        case 1:
    //            cout << "Two of";
    //            break;
    //        case 2:
    //            cout << "Three of";
    //            break;
    //        case 3:
    //            cout << "Four of";
    //            break;
    //        case 4:
    //            cout << "Five of";
    //            break;
    //        case 5:
    //            cout << "Six of";
    //            break;
    //        case 6:
    //            cout << "Seven of";
    //            break;
    //        case 7:
    //            cout << "Eight of";
    //            break;
    //        case 8:
    //            cout << "Nine of";
    //            break;
    //        case 9:
    //            cout << "Ten of";
    //            break;
    //        case 10:
    //            cout << "Jack of";
    //            break;
    //        case 11:
    //            cout << "Queen of";
    //            break;
    //        case 12:
    //            cout << "King of";
    //            break;
    //        default: // shouldn't be in this case ever!
    //            cout << "Joker";
    //            break;
    //        }
    //        unsigned short type;
    //        type = number % 4;
    //        switch (type)
    //        {
    //        case 0:
    //            cout << " Spades" << endl;
    //            break;
    //        case 1:
    //            cout << " Clubs" << endl;
    //            break;
    //        case 2:
    //            cout << " Diamonds" << endl;
    //            break;
    //        case 3:
    //            cout << " Hearts" << endl;
    //            break;
    //        }
    //    }
    //}

    /*Задача 13: Учениците в един клаас имали контролно и много искали още на следващия час да си разберат оценките. След дълго увещаване преподавателят
    склонил да им каже резултатите, но само цифровата им стойност.
    Помогнете на нашия познат да разбере каква му е словестната оценка. Валидни са следните правила:
    оценка < 3.00 е слаб. Оценка, която след десетичната точка е >= 0.50 минава към по-високата, т.е. оценка 5.50 е Отличен. 
    Да се състави програма, която по въведено число в интервала [2.00 - 6.00] извежда оценка с думи*/

     /*  {
            float grade;
            cout << "Please enter the grade: ";
            cin >> grade;
            if ((grade < 2.00) || (grade > 6.00))
            {
                cerr << "The grade that you just entered is invalid! " << endl;
                return -1;
            }
            else
            {
                if (grade < 3.00)
                {
                    cout << "slab (" << grade << ")" << endl;
                }
                else if ((grade >= 3.00) && (grade < 3.49))
                {
                    cout << "sreden (" << grade << ")" << endl;
                }
                else if ((grade >= 3.50) && (grade < 4.49))
                {
                    cout << "dobur (" << grade << ")" << endl;
                }
                else if ((grade >= 4.50) && (grade < 5.49))
                {
                    cout << "Mn. dobur (" << grade << ")" << endl;
                }
                else if ((grade >= 5.50) && (grade < 6.00))
                {
                    cout << "Otli4en (" << grade << ")" << endl;
                }
            }
        }*/
    /*Задача 14: Да се състави програма, чрез която се въвеждат стойности на две променливи - естествени числа от интервала [1-101], 
    както и вид на аритметично действие с тях:
    1 - increment; 2 - decrement; 3 - сума; 4 - разлика; 5 - умножение; 6 - делене; 7 - степенуване; 
    Програмата да изведе резулатата от избраната аритметична операция.*/

    //{
    //    double fNumber, sNumber;
    //    cout << "Please enter the two number ou want to work with: ";
    //    cin >> fNumber >> sNumber;
    //    unsigned short operation;
    //    cout << "Please enter the desired operation you want to use from the following options:\n1 - increment; 2 - decrement; 3 - Sum; 4 - subtract; 5 - mul; 6 - divide; 7 - pow\nYour choice:";
    //    cin >> operation;
    //    switch (operation) 
    //    {
    //    case 1: 
    //        cout << "Increment: " << ++fNumber << " " << ++sNumber << endl;
    //        break;
    //    case 2:
    //        cout << "Decrement: " << --fNumber << " " << --sNumber << endl;
    //        break;
    //    case 3:
    //        cout << "Addition/Sum: " << fNumber + sNumber << endl;
    //        break;
    //    case 4:
    //        cout << "Subtraction: " << fNumber - sNumber << endl;
    //        break;
    //    case 5:
    //        cout << "Multiply: " << fNumber * sNumber << endl;
    //        break;
    //    case 6:
    //        (sNumber != 0) ? cout << "Division: " << fNumber / sNumber << endl : cout << "Dividing by 0 is prohibited!" << endl;
    //        break;
    //    case 7:
    //        cout << "Power: " << pow(fNumber,sNumber) << endl;
    //        break;
    //    }
    //}

    /*Задача 15: Дасе състави програма, чрез коятп по въведен номер на футболист (естествено число от интервала 1..99) да се извежда ролята на играча.
    Постът на футболист може да бъде едн от следните: вратар, защитник, полузащитник или нападател като правилата в програмата са:
    -вратар: номера, завършващи на 1 без 11
    -защитник: номера, завърщващи на 2, 3 или 4
    -полузащитник: номера, завършващи на 5, 6, 7 или 8
    -нападател: всички останали номера.*/

    //{
    //    unsigned short number;
    //    cout << "Please enter a number from the interval [1..99] for the player: ";
    //    cin >> number;
    //    if ((number < 1) || (number > 99))
    //    {
    //        cerr << "Error. The number you just entered is out of he given interval." << endl;
    //        return -1;
    //    }
    //    else
    //    {
    //        if ((number % 10 == 1) && (number != 11))
    //            cout << "Goal Keeper" << endl;
    //        else if ((number % 10 == 2) || (number % 10 == 3) || (number % 10 == 4))
    //            cout << "Defender" << endl;
    //        else if ((number % 10 == 5) || (number % 10 == 6) || (number % 10 == 7) || (number % 10 == 8))
    //            cout << "Half - Defender" << endl;
    //        else
    //            cout << "Striker" << endl;
    //    }
    //}
    
    return 0;
}
