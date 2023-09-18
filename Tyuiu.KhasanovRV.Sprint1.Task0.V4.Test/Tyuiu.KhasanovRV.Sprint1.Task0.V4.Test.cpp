#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KhasanovRV.Sprint1.Task0.V4.Lib/Tyuiu.KhasanovRV.Sprint1.Task0.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8
{
	TEST_CLASS(UnitTest8)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task0V00* date = new Service1();
			int a = 4, b = 4, c;
			c = date->Calculate(a, b);

			Assert::AreEqual(16, c);
		}
	};
}