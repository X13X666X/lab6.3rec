#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2 {
    TEST_CLASS(UnitTest2) {
public:
    TEST_METHOD(TestCountOddElements) {
        int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int size = 10;
        int expectedCount = 5;

        int actualCount = CountOddElements(array, size, 0);

        Assert::AreEqual(expectedCount, actualCount);
    }

    TEST_METHOD(TestCountOddElementsTemplate) {
        double array[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
        int size = 10;
        int expectedCount = 5;

        int actualCount = CountOddElements(array, size, 0);

        Assert::AreEqual(expectedCount, actualCount);
    }
    };
}
