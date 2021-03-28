#include "pch.h"
#include "CppUnitTest.h"
#include "../2.1 oop/Goods.h"
#include "../2.1 oop/Goods.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My355
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			
			Goods b(4);
			 Assert::AreEqual(b.GetFirst(), 4);

		}
	};
}

