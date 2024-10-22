#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3_rec/6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            const int SIZE = 5;
            int testArray[SIZE] = { 0 };

            std::istringstream input("1\n2\n3\n4\n5\n");
            std::streambuf* backup = std::cin.rdbuf(input.rdbuf());

            InputArray(testArray, SIZE);
            std::cin.rdbuf(backup);

            Assert::AreEqual(1, testArray[0]);
            Assert::AreEqual(2, testArray[1]);
            Assert::AreEqual(3, testArray[2]);
            Assert::AreEqual(4, testArray[3]);
            Assert::AreEqual(5, testArray[4]);

		}
	};
}
