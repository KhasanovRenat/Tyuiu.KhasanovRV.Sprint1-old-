#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KhasanovRV.Sprint1.Task2.V4.Lib/Tyuiu.KhasanovRV.Sprint1.Task2.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest9
{
	TEST_CLASS(UnitTest9)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task2* date = new Service1();
			int a = 178;
			bool c;
			c = date->LogicLong(a);

			Assert::AreEqual(true, c);
		}
	};
}