#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[10] = { 9,2,6,-3,8,4,2,1,-7,5 };
			int c = Sum(a, 9);
		
			Assert::AreEqual(c, 27);
			
		}
		TEST_METHOD(TestMethod2)
		{
			int a[10] = { 9,2,6,-3,8,4,2,1,-7,5 };
			
			int d = number(a, 10);
			
			Assert::AreEqual(d, 10);
		}
	};
}
