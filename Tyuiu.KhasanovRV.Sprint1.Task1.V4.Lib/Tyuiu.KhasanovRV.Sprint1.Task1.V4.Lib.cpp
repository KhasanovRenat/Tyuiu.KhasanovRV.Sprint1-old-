// Tyuiu.KhasanovRV.Sprint0.Task4.V4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint1Task1
{
	virtual bool Logic(int a) override
	{
		if (a % 10 == 7)
		{
			return true;
		}
		else
		{
			return false;
		};
	};
};
