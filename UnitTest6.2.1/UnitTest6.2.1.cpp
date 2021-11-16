#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Юра\source\repos\6.2.1\6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { 29, 22, 25, 71, 26, 20, 20, 44, 71, 18 };
			int res = (Sum(a, n, 0, 0) / n);
			Assert::AreEqual(17, res);

		}
	};
}