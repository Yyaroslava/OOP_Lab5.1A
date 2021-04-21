#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab5.1A/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51A
{
	TEST_CLASS(UnitTest51A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line A(4, 6, 10);
			int test_variable = A.Function();
			Assert::AreEqual(46, test_variable);
		}
	};
}
