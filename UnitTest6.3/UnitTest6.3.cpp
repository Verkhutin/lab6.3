#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3/lab6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 2, 5, 7, 8 };
			int t = MySum(a, 4);
			Assert::AreEqual(t, 10);
		}
	};
}
