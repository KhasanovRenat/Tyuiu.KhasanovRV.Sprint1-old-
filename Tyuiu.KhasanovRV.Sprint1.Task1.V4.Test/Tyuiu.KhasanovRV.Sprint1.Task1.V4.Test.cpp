#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KhasanovRV.Sprint1.Task1.V4.Lib/Tyuiu.KhasanovRV.Sprint1.Task1.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest9
{
	TEST_CLASS(UnitTest9)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* date = new Service1();
			int a = 17;
			bool c;
			c = date->Logic(a);

			Assert::AreEqual(true, c);
		}
	};
}