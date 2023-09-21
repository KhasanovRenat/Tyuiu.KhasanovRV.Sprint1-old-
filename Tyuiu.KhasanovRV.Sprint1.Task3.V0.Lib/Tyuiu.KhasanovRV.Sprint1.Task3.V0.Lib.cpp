// Tyuiu.KhasanovRV.Sprint0.Task4.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint0Task3V0
{
	virtual int Uslovie(int a) override
	{
		if (a != 1000 && a % 4 == 0 && a % 2 == 0)
		{
			return a * 2;
		}
		else
		{
			return a / 5;
		}
	};
};
