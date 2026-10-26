
#include "pch.h"
#include "CppUnitTest.h"

#define UNIT_TEST
#include "../Lab_06_3_it/Lab_06_3_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
    TEST_CLASS(UnitTest63)
    {
    public:

        TEST_METHOD(TestSum)
        {
            int a[6] = { 5, -4, 8, 3, -6, 1 };

            int expected = -2;

            int actual = Sum<int>(a, 6);

            Assert::AreEqual(expected, actual);
        }
    };
}
