#include "pch.h"
#include "CppUnitTest.h"
#include <sstream>
#include <iostream>
#include "../mustangbronco/car.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace CCarTest
{
	TEST_CLASS(CCarTest)
	{
	public:
		//Tests correct bronco outputs
		TEST_METHOD(TestBronco)
		{
			Car carTest;
			stringstream ss;
			carTest.car_output(6,ss);

			Assert::IsTrue(ss.str()== "Mustang\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(369, ss);
			Assert::IsTrue(ss.str() == "Mustang\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(-3, ss);
			Assert::IsTrue(ss.str() == "Mustang\n");
		}
		//Test correct Mustang outputs
		TEST_METHOD(TestMustang)
		{
			Car carTest;
			stringstream ss;
			carTest.car_output(10, ss);

			Assert::IsTrue(ss.str() == "Bronco\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(520, ss);
			Assert::IsTrue(ss.str() == "Bronco\n");
		}
		//Tests output for when the int is div by both 5 and 3
		TEST_METHOD(TestMustangBronco)
		{
			Car carTest;
			stringstream ss;
			carTest.car_output(15, ss);

			Assert::IsTrue(ss.str() == "MustangBronco\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(405, ss);
			Assert::IsTrue(ss.str() == "MustangBronco\n");
		}
		//Tests when not div
		TEST_METHOD(TestNotDivisible) {
			Car carTest;
			stringstream ss;
			carTest.car_output(2, ss);

			Assert::IsTrue(ss.str() == "2\n");

			ss.clear();
			ss.str(std::string());
			carTest.car_output(214, ss);
			Assert::IsTrue(ss.str() == "214\n");
		}
	};
}
