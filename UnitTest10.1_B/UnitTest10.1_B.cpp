#include "pch.h"
#include "CppUnitTest.h"
#include "../LB10.1_B/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            Students students[4];
            students[0].grade_physics = 5;
            students[0].grade_math = 5;
            students[1].grade_math = 5;
            students[1].grade_physics = 5;
            students[2].grade_physics = 4;
            students[2].grade_math = 3;
            students[3].grade_physics = 4;
            students[3].grade_math = 3;
            double result = Percentage(students, 4);

            Assert::AreEqual(result, 50, 0.001);
        }
    };
}
