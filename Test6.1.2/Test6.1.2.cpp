#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.1.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test612
{
	TEST_CLASS(Test612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[20]{ 9,- 20, - 20,  21,   7, - 12,   8, - 18, - 8,  32,  37,  18, - 14, - 12,  28,  32, - 14,   1, - 10, - 2 };
			c = Sum(a, 20, 1);
			Assert::AreEqual(c, 126);
		}
	};
}
