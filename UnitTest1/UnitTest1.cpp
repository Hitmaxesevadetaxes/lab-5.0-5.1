#include "pch.h"
#include "cmath"
#include "CppUnitTest.h"
#include "C:\Users\HP\source\repos\lab 5.1\lab 5.1\5.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p = 4.0;
			double q = 9.0;
			double expected = pow(k(p + sqrt(q), q - sqrt(p)), 2) - k(1, p + q);
			double actual = -0.668718;  // Очікуване значення
			Assert::AreEqual(expected, actual, 1e-5);  // Перевірка результату з точністю
		}
	}
	; }
