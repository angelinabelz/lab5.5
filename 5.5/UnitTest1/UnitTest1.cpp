#include "pch.h"
#include "CppUnitTest.h"
#include "../5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumOfDigits)
        {
            int depth = 0;
            int result = sumOfDigits(123, depth);

            Assert::AreEqual(result, 6);
            Assert::AreEqual(depth, 3);
        }

        TEST_METHOD(TestZeroInput)
        {
            int depth = 0;
            int result = sumOfDigits(0, depth);

            Assert::AreEqual(result, 0);
            Assert::AreEqual(depth, 0);
        }

        TEST_METHOD(TestLargeNumber)
        {
            int depth = 0;
            int result = sumOfDigits(987654321, depth);

            Assert::AreEqual(result, 45);
            Assert::AreEqual(depth, 9);
        }

        TEST_METHOD(TestSingleDigit)
        {
            int depth = 0;
            int result = sumOfDigits(5, depth);

            Assert::AreEqual(result, 5);
            Assert::AreEqual(depth, 1);
        }
    };
}
