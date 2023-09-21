// Tyuiu.KhasanovRV.Sprint0.Task4.V4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.KhasanovRV.Sprint1.Task3.V0.Lib/Tyuiu.KhasanovRV.Sprint1.Task3.V0.Lib.cpp"
using namespace std;


int main()
{
    ISprint0Task3V0* date = new Service1;
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите четырехзначное число: ";
    cin >> a;
    if (a >= 1000 && a < 10000)
    {
        cout << "Результатом вычислений будет " << date->Uslovie(a);
    }
    else
    {
        cout << "Вы ввели не четырехзначное число";
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Ex-isting Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
