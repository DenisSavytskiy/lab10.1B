// UnitTestB.cpp
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№10.1B.cpp/AP_Lab№10.1B.cpp.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2 {
    TEST_CLASS(UnitTest2) {
public:
    TEST_METHOD(TestCalculateHighGradesPercentage) {
        const int N = 3;
        Student* s = new Student[N];

        s[0].physicsGrade = 5;
        s[1].physicsGrade = 4;
        s[2].physicsGrade = 3;

        double result = CalculateHighGradesPercentage(s, N);
        Assert::AreEqual(66.67, result, 0.01);

        delete[] s;
    }
    };
}