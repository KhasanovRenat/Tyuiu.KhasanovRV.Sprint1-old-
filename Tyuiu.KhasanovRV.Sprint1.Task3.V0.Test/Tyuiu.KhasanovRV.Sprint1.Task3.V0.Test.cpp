#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KhasanovRV.Sprint1.Task3.V0.Lib/Tyuiu.KhasanovRV.Sprint1.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest9
{
	TEST_CLASS(UnitTest9)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3V0* date = new Service1();
			int a = 1780, c;
			c = date->Uslovie(a);

			Assert::AreEqual(3560, c);
		}

		TEST_METHOD(TestMethod2)
		{
			ISprint0Task3V0* date = new Service1();
			int a = 2000, c;
			c = date->Uslovie(a);

			Assert::AreEqual(4000, c);
		}
	};
}
